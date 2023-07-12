/********************************************************************************
** Form generated from reading UI file 'main.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_H
#define UI_MAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExist;
    QAction *actionStart;
    QAction *actionPause;
    QAction *actionStop;
    QAction *actionClear;
    QAction *actionScan;
    QAction *actionOptions;
    QAction *actionASCIITable;
    QAction *actionCheckSum;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBoxPort;
    QGridLayout *gridLayout;
    QLabel *label_port;
    QComboBox *comboBox_port;
    QLabel *label_baudrate;
    QComboBox *comboBox_baudrate;
    QLabel *label_dataBits;
    QComboBox *comboBox_dataBits;
    QLabel *label_parity;
    QComboBox *comboBox_parity;
    QLabel *label_stopBits;
    QComboBox *comboBox_stopBits;
    QLabel *label_flowType;
    QComboBox *comboBox_flowType;
    QGroupBox *groupBox_receive;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_receiveText;
    QRadioButton *radioButton_receiveHex;
    QCheckBox *checkBox_feedLine;
    QCheckBox *checkBox_displaySend;
    QCheckBox *checkBox_distplayTime;
    QGroupBox *groupBox_send;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_sendText;
    QRadioButton *radioButton_sendHex;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_sendLoop;
    QSpinBox *spinBox_loopTime;
    QLabel *label_ms;
    QCheckBox *checkBox_loopPerLine;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_send;
    QComboBox *comboBox_history;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *plainTextEdit_receive;
    QPlainTextEdit *plainTextEdit_send;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuTools;
    QStatusBar *statusbar;
    QToolBar *toolBar_editor;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(886, 580);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ui/ComAssist.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionExist = new QAction(MainWindow);
        actionExist->setObjectName(QString::fromUtf8("actionExist"));
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QString::fromUtf8("actionStart"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ui/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStart->setIcon(icon1);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ui/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon2);
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ui/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon3);
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/ui/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon4);
        actionScan = new QAction(MainWindow);
        actionScan->setObjectName(QString::fromUtf8("actionScan"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/ui/scan.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionScan->setIcon(icon5);
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/ui/options.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOptions->setIcon(icon6);
        actionASCIITable = new QAction(MainWindow);
        actionASCIITable->setObjectName(QString::fromUtf8("actionASCIITable"));
        actionCheckSum = new QAction(MainWindow);
        actionCheckSum->setObjectName(QString::fromUtf8("actionCheckSum"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_4 = new QHBoxLayout(centralwidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBoxPort = new QGroupBox(centralwidget);
        groupBoxPort->setObjectName(QString::fromUtf8("groupBoxPort"));
        gridLayout = new QGridLayout(groupBoxPort);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_port = new QLabel(groupBoxPort);
        label_port->setObjectName(QString::fromUtf8("label_port"));
        label_port->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_port, 0, 0, 1, 1);

        comboBox_port = new QComboBox(groupBoxPort);
        comboBox_port->setObjectName(QString::fromUtf8("comboBox_port"));

        gridLayout->addWidget(comboBox_port, 0, 1, 1, 1);

        label_baudrate = new QLabel(groupBoxPort);
        label_baudrate->setObjectName(QString::fromUtf8("label_baudrate"));
        label_baudrate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_baudrate, 1, 0, 1, 1);

        comboBox_baudrate = new QComboBox(groupBoxPort);
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->setObjectName(QString::fromUtf8("comboBox_baudrate"));

        gridLayout->addWidget(comboBox_baudrate, 1, 1, 1, 1);

        label_dataBits = new QLabel(groupBoxPort);
        label_dataBits->setObjectName(QString::fromUtf8("label_dataBits"));
        label_dataBits->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_dataBits, 2, 0, 1, 1);

        comboBox_dataBits = new QComboBox(groupBoxPort);
        comboBox_dataBits->addItem(QString());
        comboBox_dataBits->addItem(QString());
        comboBox_dataBits->addItem(QString());
        comboBox_dataBits->addItem(QString());
        comboBox_dataBits->setObjectName(QString::fromUtf8("comboBox_dataBits"));

        gridLayout->addWidget(comboBox_dataBits, 2, 1, 1, 1);

        label_parity = new QLabel(groupBoxPort);
        label_parity->setObjectName(QString::fromUtf8("label_parity"));
        label_parity->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_parity, 3, 0, 1, 1);

        comboBox_parity = new QComboBox(groupBoxPort);
        comboBox_parity->addItem(QString());
        comboBox_parity->addItem(QString());
        comboBox_parity->addItem(QString());
        comboBox_parity->addItem(QString());
        comboBox_parity->addItem(QString());
        comboBox_parity->setObjectName(QString::fromUtf8("comboBox_parity"));

        gridLayout->addWidget(comboBox_parity, 3, 1, 1, 1);

        label_stopBits = new QLabel(groupBoxPort);
        label_stopBits->setObjectName(QString::fromUtf8("label_stopBits"));
        label_stopBits->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_stopBits, 4, 0, 1, 1);

        comboBox_stopBits = new QComboBox(groupBoxPort);
        comboBox_stopBits->addItem(QString());
        comboBox_stopBits->addItem(QString());
        comboBox_stopBits->addItem(QString());
        comboBox_stopBits->setObjectName(QString::fromUtf8("comboBox_stopBits"));

        gridLayout->addWidget(comboBox_stopBits, 4, 1, 1, 1);

        label_flowType = new QLabel(groupBoxPort);
        label_flowType->setObjectName(QString::fromUtf8("label_flowType"));
        label_flowType->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_flowType, 5, 0, 1, 1);

        comboBox_flowType = new QComboBox(groupBoxPort);
        comboBox_flowType->addItem(QString());
        comboBox_flowType->addItem(QString());
        comboBox_flowType->addItem(QString());
        comboBox_flowType->setObjectName(QString::fromUtf8("comboBox_flowType"));

        gridLayout->addWidget(comboBox_flowType, 5, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout_3->addWidget(groupBoxPort);

        groupBox_receive = new QGroupBox(centralwidget);
        groupBox_receive->setObjectName(QString::fromUtf8("groupBox_receive"));
        verticalLayout = new QVBoxLayout(groupBox_receive);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButton_receiveText = new QRadioButton(groupBox_receive);
        radioButton_receiveText->setObjectName(QString::fromUtf8("radioButton_receiveText"));

        horizontalLayout->addWidget(radioButton_receiveText);

        radioButton_receiveHex = new QRadioButton(groupBox_receive);
        radioButton_receiveHex->setObjectName(QString::fromUtf8("radioButton_receiveHex"));

        horizontalLayout->addWidget(radioButton_receiveHex);


        verticalLayout->addLayout(horizontalLayout);

        checkBox_feedLine = new QCheckBox(groupBox_receive);
        checkBox_feedLine->setObjectName(QString::fromUtf8("checkBox_feedLine"));

        verticalLayout->addWidget(checkBox_feedLine);

        checkBox_displaySend = new QCheckBox(groupBox_receive);
        checkBox_displaySend->setObjectName(QString::fromUtf8("checkBox_displaySend"));

        verticalLayout->addWidget(checkBox_displaySend);

        checkBox_distplayTime = new QCheckBox(groupBox_receive);
        checkBox_distplayTime->setObjectName(QString::fromUtf8("checkBox_distplayTime"));

        verticalLayout->addWidget(checkBox_distplayTime);


        verticalLayout_3->addWidget(groupBox_receive);

        groupBox_send = new QGroupBox(centralwidget);
        groupBox_send->setObjectName(QString::fromUtf8("groupBox_send"));
        verticalLayout_2 = new QVBoxLayout(groupBox_send);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioButton_sendText = new QRadioButton(groupBox_send);
        radioButton_sendText->setObjectName(QString::fromUtf8("radioButton_sendText"));

        horizontalLayout_2->addWidget(radioButton_sendText);

        radioButton_sendHex = new QRadioButton(groupBox_send);
        radioButton_sendHex->setObjectName(QString::fromUtf8("radioButton_sendHex"));

        horizontalLayout_2->addWidget(radioButton_sendHex);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        checkBox_sendLoop = new QCheckBox(groupBox_send);
        checkBox_sendLoop->setObjectName(QString::fromUtf8("checkBox_sendLoop"));

        horizontalLayout_3->addWidget(checkBox_sendLoop);

        spinBox_loopTime = new QSpinBox(groupBox_send);
        spinBox_loopTime->setObjectName(QString::fromUtf8("spinBox_loopTime"));

        horizontalLayout_3->addWidget(spinBox_loopTime);

        label_ms = new QLabel(groupBox_send);
        label_ms->setObjectName(QString::fromUtf8("label_ms"));
        label_ms->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_ms);

        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);

        checkBox_loopPerLine = new QCheckBox(groupBox_send);
        checkBox_loopPerLine->setObjectName(QString::fromUtf8("checkBox_loopPerLine"));
        checkBox_loopPerLine->setEnabled(false);

        verticalLayout_2->addWidget(checkBox_loopPerLine);


        verticalLayout_3->addWidget(groupBox_send);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout_4->addLayout(verticalLayout_3);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton_send = new QPushButton(centralwidget);
        pushButton_send->setObjectName(QString::fromUtf8("pushButton_send"));

        gridLayout_3->addWidget(pushButton_send, 4, 1, 1, 1);

        comboBox_history = new QComboBox(centralwidget);
        comboBox_history->addItem(QString());
        comboBox_history->addItem(QString());
        comboBox_history->addItem(QString());
        comboBox_history->addItem(QString());
        comboBox_history->addItem(QString());
        comboBox_history->addItem(QString());
        comboBox_history->setObjectName(QString::fromUtf8("comboBox_history"));

        gridLayout_3->addWidget(comboBox_history, 3, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        plainTextEdit_receive = new QPlainTextEdit(centralwidget);
        plainTextEdit_receive->setObjectName(QString::fromUtf8("plainTextEdit_receive"));
        plainTextEdit_receive->setAcceptDrops(false);
        plainTextEdit_receive->setUndoRedoEnabled(false);
        plainTextEdit_receive->setReadOnly(true);

        gridLayout_2->addWidget(plainTextEdit_receive, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 2);

        plainTextEdit_send = new QPlainTextEdit(centralwidget);
        plainTextEdit_send->setObjectName(QString::fromUtf8("plainTextEdit_send"));

        gridLayout_3->addWidget(plainTextEdit_send, 3, 0, 2, 1);


        horizontalLayout_4->addLayout(gridLayout_3);

        horizontalLayout_4->setStretch(1, 1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 886, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setSizeGripEnabled(true);
        MainWindow->setStatusBar(statusbar);
        toolBar_editor = new QToolBar(MainWindow);
        toolBar_editor->setObjectName(QString::fromUtf8("toolBar_editor"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_editor);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuTools->menuAction());
        menuFile->addAction(actionExist);
        menuEdit->addAction(actionScan);
        menuEdit->addSeparator();
        menuEdit->addAction(actionStart);
        menuEdit->addAction(actionPause);
        menuEdit->addAction(actionStop);
        menuEdit->addSeparator();
        menuEdit->addAction(actionClear);
        menuTools->addAction(actionASCIITable);
        menuTools->addAction(actionOptions);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ComAssist", nullptr));
        actionExist->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        actionPause->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        actionStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        actionClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        actionScan->setText(QCoreApplication::translate("MainWindow", "Scan", nullptr));
        actionOptions->setText(QCoreApplication::translate("MainWindow", "Options...", nullptr));
        actionASCIITable->setText(QCoreApplication::translate("MainWindow", "ASCII Table", nullptr));
        actionCheckSum->setText(QCoreApplication::translate("MainWindow", "CheckSum", nullptr));
        groupBoxPort->setTitle(QCoreApplication::translate("MainWindow", "Serial Port Setting", nullptr));
        label_port->setText(QCoreApplication::translate("MainWindow", "Port", nullptr));
        label_baudrate->setText(QCoreApplication::translate("MainWindow", "Baudrate", nullptr));
        comboBox_baudrate->setItemText(0, QCoreApplication::translate("MainWindow", "110", nullptr));
        comboBox_baudrate->setItemText(1, QCoreApplication::translate("MainWindow", "300", nullptr));
        comboBox_baudrate->setItemText(2, QCoreApplication::translate("MainWindow", "600", nullptr));
        comboBox_baudrate->setItemText(3, QCoreApplication::translate("MainWindow", "1200", nullptr));
        comboBox_baudrate->setItemText(4, QCoreApplication::translate("MainWindow", "2400", nullptr));
        comboBox_baudrate->setItemText(5, QCoreApplication::translate("MainWindow", "4800", nullptr));
        comboBox_baudrate->setItemText(6, QCoreApplication::translate("MainWindow", "9600", nullptr));
        comboBox_baudrate->setItemText(7, QCoreApplication::translate("MainWindow", "19200", nullptr));
        comboBox_baudrate->setItemText(8, QCoreApplication::translate("MainWindow", "38400", nullptr));
        comboBox_baudrate->setItemText(9, QCoreApplication::translate("MainWindow", "57600", nullptr));
        comboBox_baudrate->setItemText(10, QCoreApplication::translate("MainWindow", "115200", nullptr));
        comboBox_baudrate->setItemText(10, QCoreApplication::translate("MainWindow", "921600", nullptr));

        label_dataBits->setText(QCoreApplication::translate("MainWindow", "Data Bits", nullptr));
        comboBox_dataBits->setItemText(0, QCoreApplication::translate("MainWindow", "5", nullptr));
        comboBox_dataBits->setItemText(1, QCoreApplication::translate("MainWindow", "6", nullptr));
        comboBox_dataBits->setItemText(2, QCoreApplication::translate("MainWindow", "7", nullptr));
        comboBox_dataBits->setItemText(3, QCoreApplication::translate("MainWindow", "8", nullptr));

        label_parity->setText(QCoreApplication::translate("MainWindow", "Parity", nullptr));
        comboBox_parity->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));
        comboBox_parity->setItemText(1, QCoreApplication::translate("MainWindow", "Odd", nullptr));
        comboBox_parity->setItemText(2, QCoreApplication::translate("MainWindow", "Even", nullptr));
        comboBox_parity->setItemText(3, QCoreApplication::translate("MainWindow", "Mark", nullptr));
        comboBox_parity->setItemText(4, QCoreApplication::translate("MainWindow", "Space", nullptr));

        label_stopBits->setText(QCoreApplication::translate("MainWindow", "Stop Bits", nullptr));
        comboBox_stopBits->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        comboBox_stopBits->setItemText(1, QCoreApplication::translate("MainWindow", "1.5", nullptr));
        comboBox_stopBits->setItemText(2, QCoreApplication::translate("MainWindow", "2", nullptr));

        label_flowType->setText(QCoreApplication::translate("MainWindow", "Flow Type", nullptr));
        comboBox_flowType->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));
        comboBox_flowType->setItemText(1, QCoreApplication::translate("MainWindow", "RTX/CTS", nullptr));
        comboBox_flowType->setItemText(2, QCoreApplication::translate("MainWindow", "XON/XOFF", nullptr));

        groupBox_receive->setTitle(QCoreApplication::translate("MainWindow", "Receive Setting", nullptr));
        radioButton_receiveText->setText(QCoreApplication::translate("MainWindow", "Text", nullptr));
        radioButton_receiveHex->setText(QCoreApplication::translate("MainWindow", "Hex", nullptr));
        checkBox_feedLine->setText(QCoreApplication::translate("MainWindow", "Auto Feed Line", nullptr));
        checkBox_displaySend->setText(QCoreApplication::translate("MainWindow", "Display Send", nullptr));
        checkBox_distplayTime->setText(QCoreApplication::translate("MainWindow", "Display Time", nullptr));
        groupBox_send->setTitle(QCoreApplication::translate("MainWindow", "Send Setting", nullptr));
        radioButton_sendText->setText(QCoreApplication::translate("MainWindow", "Text", nullptr));
        radioButton_sendHex->setText(QCoreApplication::translate("MainWindow", "Hex", nullptr));
        checkBox_sendLoop->setText(QCoreApplication::translate("MainWindow", "Loop", nullptr));
        label_ms->setText(QCoreApplication::translate("MainWindow", "ms", nullptr));
        checkBox_loopPerLine->setText(QCoreApplication::translate("MainWindow", "Loop Per Line", nullptr));
        pushButton_send->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        comboBox_history->setItemText(0, QCoreApplication::translate("MainWindow", "SendSpace1", nullptr));
        comboBox_history->setItemText(1, QCoreApplication::translate("MainWindow", "SendSpace2", nullptr));
        comboBox_history->setItemText(2, QCoreApplication::translate("MainWindow", "SendSpace3", nullptr));
        comboBox_history->setItemText(3, QCoreApplication::translate("MainWindow", "SendSpace4", nullptr));
        comboBox_history->setItemText(4, QCoreApplication::translate("MainWindow", "SendSpace5", nullptr));
        comboBox_history->setItemText(5, QCoreApplication::translate("MainWindow", "SendSpace6", nullptr));

        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        toolBar_editor->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_H
