#ifndef __CIRCLE_BUFFER_H__
#define __CIRCLE_BUFFER_H__
#include <assert.h>

template< typename T >
class CircleBuffer
{
public:
    CircleBuffer() : buff(0),allocSize(0),front(0),rear(0),isAttach(false)
    {
    }
    ~CircleBuffer()
    {
        if( !isAttach && buff != NULL )
            delete[] buff;
    }
    inline void init( int size )
    {
        if( !isAttach && buff != NULL )
            delete[] buff;
        isAttach = false;
        buff = new T[ size ];
        allocSize = size;
        empty();
    }
    inline bool attach( T* buff, int size )
    {
        isAttach = true;
        this->buff = buff;
        allocSize = size;
        empty();
    }
    inline void empty()
    {
        front = rear = 0;
    }

    inline bool isEmpty()
    {
        return ( front == rear );
    }

    inline bool isFull()
    {
        return ( ( ( rear + 1 ) % allocSize ) == front );
    }

    int size()
    {
        if ( rear >= front )
            return rear - front;
        else
            return ( rear + allocSize - front );
    }

    bool get( int index, T &t )
    {
        if ( buuf == NULL || index >= size() )
            return false;
        int i = ( front + index ) % allocSize;
        t = buff[ i ];
        return true;
    }

    inline T* data()
    {
        return buff;
    }

    T &at( int index )
    {
        assert( buff != NULL && index < size() );
        int i = ( front + index ) % allocSize;
        return buff[ i ];
    }

    bool enqueue( const T &t )
    {
        if ( isFull() )
            return false;
        buff[ rear ] = t;
        if ( ( rear + 1 ) >= allocSize )
            rear = 0;
        else
            ++rear;
        return true;
    }

    bool push_front( const T &t )
    {
        if ( isFull() )  return false;
        if ( ( front - 1 ) < 0 )
            front = allocSize - 1;
        else
            --front;
        buff[ front ] = t;
        return true;
    }

    bool dequeue( T &t )
    {
        if ( isEmpty() )  return false;
        t = buff[ front ];
        if ( ( front + 1 ) >= allocSize )
            front = 0;
        else
            ++front;
        return true;
    }

private:
    T*  buff;
    int allocSize;
    int front;
    int rear;
    bool isAttach;
};

template< typename T, int SIZE >
class StaticCircleBuffer
{
public:
	StaticCircleBuffer()
	{
		assert( SIZE > 0 );
		circleBuffer.attach( buff, SIZE );
	}

	inline void empty()
	{
		return circleBuffer.empty();
	}

	inline bool isEmpty()
	{
		return circleBuffer.isEmpty();
	}

	inline bool isFull()
	{
		return circleBuffer.isFull();
	}

	inline int size()
	{
		return circleBuffer.size();
	}

	inline int allocSize()
	{
		return SIZE;
	}

	inline bool get( int index, T &t )
	{
		return circleBuffer.get( index, t );
	}

	inline T &at( int index )
	{
		return circleBuffer.at( index );
	}

	inline bool enqueue( const T &t )
	{
		return circleBuffer.enqueue( t );
	}

	inline bool push_front( const T &t )
	{
		return circleBuffer.push_front( t );
	}

	inline bool dequeue( T &t )
	{
		return circleBuffer.dequeue( t );
	}

private:
    T buff[SIZE];
    CircleBuffer<T> circleBuffer;
};
#endif
