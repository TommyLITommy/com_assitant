/********************************************************************************
** Form generated from reading UI file 'ASCII.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASCII_H
#define UI_ASCII_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogASCIITable
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;

    void setupUi(QDialog *DialogASCIITable)
    {
        if (DialogASCIITable->objectName().isEmpty())
            DialogASCIITable->setObjectName(QString::fromUtf8("DialogASCIITable"));
        DialogASCIITable->resize(522, 410);
        verticalLayout = new QVBoxLayout(DialogASCIITable);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(DialogASCIITable);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);


        retranslateUi(DialogASCIITable);

        QMetaObject::connectSlotsByName(DialogASCIITable);
    } // setupUi

    void retranslateUi(QDialog *DialogASCIITable)
    {
        DialogASCIITable->setWindowTitle(QCoreApplication::translate("DialogASCIITable", "ASCII Table", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogASCIITable: public Ui_DialogASCIITable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASCII_H
