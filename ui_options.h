/********************************************************************************
** Form generated from reading UI file 'options.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONS_H
#define UI_OPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogOptions
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_send;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_lineEndingMode;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_noneEnding;
    QRadioButton *radioButton_CREnding;
    QRadioButton *radioButton_NL_CREnding;
    QRadioButton *radioButton_CR_NLEnding;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_userEnding;
    QLineEdit *lineEdit_userEnding;
    QGroupBox *groupBox_checkSum;
    QGridLayout *gridLayout_3;
    QRadioButton *radioButton_bigEndian;
    QLabel *label_checkSumType;
    QComboBox *comboBox_checkSumType;
    QRadioButton *radioButton_LittleEndian;
    QSpacerItem *verticalSpacer;
    QWidget *tab_logFile;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout;
    QPushButton *pushButton_open;
    QLabel *label_logFileName;
    QLineEdit *lineEdit_logFileName;
    QLabel *label_maxLogSize;
    QSpinBox *spinBox_maxLogSize;
    QLabel *label_MB;
    QCheckBox *checkBox_saveLog;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_font;
    QLineEdit *lineEdit_font;
    QLabel *label_font;
    QPushButton *pushButton_receiveColor;
    QLabel *label_buffSize;
    QLabel *label_KB;
    QLabel *label_receiveColor;
    QPushButton *pushButton_sendColor;
    QLineEdit *lineEdit_receiveColor;
    QLabel *label_sendColor;
    QLineEdit *lineEdit_sendColor;
    QSpinBox *spinBox_buffSize;
    QCheckBox *checkBox_color;
    QLabel *label_encode;
    QComboBox *comboBox_encode;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogOptions)
    {
        if (DialogOptions->objectName().isEmpty())
            DialogOptions->setObjectName(QString::fromUtf8("DialogOptions"));
        DialogOptions->resize(463, 305);
        verticalLayout = new QVBoxLayout(DialogOptions);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(DialogOptions);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_send = new QWidget();
        tab_send->setObjectName(QString::fromUtf8("tab_send"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tab_send->sizePolicy().hasHeightForWidth());
        tab_send->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(tab_send);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_lineEndingMode = new QGroupBox(tab_send);
        groupBox_lineEndingMode->setObjectName(QString::fromUtf8("groupBox_lineEndingMode"));
        verticalLayout_2 = new QVBoxLayout(groupBox_lineEndingMode);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButton_noneEnding = new QRadioButton(groupBox_lineEndingMode);
        radioButton_noneEnding->setObjectName(QString::fromUtf8("radioButton_noneEnding"));
        radioButton_noneEnding->setChecked(true);

        horizontalLayout->addWidget(radioButton_noneEnding);

        radioButton_CREnding = new QRadioButton(groupBox_lineEndingMode);
        radioButton_CREnding->setObjectName(QString::fromUtf8("radioButton_CREnding"));

        horizontalLayout->addWidget(radioButton_CREnding);

        radioButton_NL_CREnding = new QRadioButton(groupBox_lineEndingMode);
        radioButton_NL_CREnding->setObjectName(QString::fromUtf8("radioButton_NL_CREnding"));

        horizontalLayout->addWidget(radioButton_NL_CREnding);

        radioButton_CR_NLEnding = new QRadioButton(groupBox_lineEndingMode);
        radioButton_CR_NLEnding->setObjectName(QString::fromUtf8("radioButton_CR_NLEnding"));

        horizontalLayout->addWidget(radioButton_CR_NLEnding);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioButton_userEnding = new QRadioButton(groupBox_lineEndingMode);
        radioButton_userEnding->setObjectName(QString::fromUtf8("radioButton_userEnding"));

        horizontalLayout_2->addWidget(radioButton_userEnding);

        lineEdit_userEnding = new QLineEdit(groupBox_lineEndingMode);
        lineEdit_userEnding->setObjectName(QString::fromUtf8("lineEdit_userEnding"));
        lineEdit_userEnding->setMaxLength(10);

        horizontalLayout_2->addWidget(lineEdit_userEnding);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(groupBox_lineEndingMode);

        groupBox_checkSum = new QGroupBox(tab_send);
        groupBox_checkSum->setObjectName(QString::fromUtf8("groupBox_checkSum"));
        gridLayout_3 = new QGridLayout(groupBox_checkSum);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        radioButton_bigEndian = new QRadioButton(groupBox_checkSum);
        radioButton_bigEndian->setObjectName(QString::fromUtf8("radioButton_bigEndian"));

        gridLayout_3->addWidget(radioButton_bigEndian, 2, 2, 1, 1);

        label_checkSumType = new QLabel(groupBox_checkSum);
        label_checkSumType->setObjectName(QString::fromUtf8("label_checkSumType"));
        label_checkSumType->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_checkSumType, 1, 0, 1, 1);

        comboBox_checkSumType = new QComboBox(groupBox_checkSum);
        comboBox_checkSumType->addItem(QString());
        comboBox_checkSumType->addItem(QString());
        comboBox_checkSumType->addItem(QString());
        comboBox_checkSumType->addItem(QString());
        comboBox_checkSumType->addItem(QString());
        comboBox_checkSumType->setObjectName(QString::fromUtf8("comboBox_checkSumType"));

        gridLayout_3->addWidget(comboBox_checkSumType, 1, 1, 1, 1);

        radioButton_LittleEndian = new QRadioButton(groupBox_checkSum);
        radioButton_LittleEndian->setObjectName(QString::fromUtf8("radioButton_LittleEndian"));
        radioButton_LittleEndian->setChecked(true);

        gridLayout_3->addWidget(radioButton_LittleEndian, 1, 2, 1, 1);

        gridLayout_3->setColumnStretch(1, 1);
        gridLayout_3->setColumnStretch(2, 1);

        verticalLayout_3->addWidget(groupBox_checkSum);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        tabWidget->addTab(tab_send, QString());
        tab_logFile = new QWidget();
        tab_logFile->setObjectName(QString::fromUtf8("tab_logFile"));
        verticalLayout_5 = new QVBoxLayout(tab_logFile);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_open = new QPushButton(tab_logFile);
        pushButton_open->setObjectName(QString::fromUtf8("pushButton_open"));

        gridLayout->addWidget(pushButton_open, 1, 2, 1, 1);

        label_logFileName = new QLabel(tab_logFile);
        label_logFileName->setObjectName(QString::fromUtf8("label_logFileName"));
        label_logFileName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_logFileName, 1, 0, 1, 1);

        lineEdit_logFileName = new QLineEdit(tab_logFile);
        lineEdit_logFileName->setObjectName(QString::fromUtf8("lineEdit_logFileName"));
        lineEdit_logFileName->setReadOnly(true);

        gridLayout->addWidget(lineEdit_logFileName, 1, 1, 1, 1);

        label_maxLogSize = new QLabel(tab_logFile);
        label_maxLogSize->setObjectName(QString::fromUtf8("label_maxLogSize"));
        label_maxLogSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_maxLogSize, 2, 0, 1, 1);

        spinBox_maxLogSize = new QSpinBox(tab_logFile);
        spinBox_maxLogSize->setObjectName(QString::fromUtf8("spinBox_maxLogSize"));
        spinBox_maxLogSize->setMinimum(8);
        spinBox_maxLogSize->setMaximum(256);

        gridLayout->addWidget(spinBox_maxLogSize, 2, 1, 1, 1);

        label_MB = new QLabel(tab_logFile);
        label_MB->setObjectName(QString::fromUtf8("label_MB"));

        gridLayout->addWidget(label_MB, 2, 2, 1, 1);

        checkBox_saveLog = new QCheckBox(tab_logFile);
        checkBox_saveLog->setObjectName(QString::fromUtf8("checkBox_saveLog"));

        gridLayout->addWidget(checkBox_saveLog, 0, 0, 1, 2);


        verticalLayout_5->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_logFile, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_font = new QPushButton(tab);
        pushButton_font->setObjectName(QString::fromUtf8("pushButton_font"));

        gridLayout_2->addWidget(pushButton_font, 1, 2, 1, 1);

        lineEdit_font = new QLineEdit(tab);
        lineEdit_font->setObjectName(QString::fromUtf8("lineEdit_font"));
        lineEdit_font->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_font, 1, 1, 1, 1);

        label_font = new QLabel(tab);
        label_font->setObjectName(QString::fromUtf8("label_font"));
        label_font->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_font, 1, 0, 1, 1);

        pushButton_receiveColor = new QPushButton(tab);
        pushButton_receiveColor->setObjectName(QString::fromUtf8("pushButton_receiveColor"));
        pushButton_receiveColor->setEnabled(false);

        gridLayout_2->addWidget(pushButton_receiveColor, 4, 2, 1, 1);

        label_buffSize = new QLabel(tab);
        label_buffSize->setObjectName(QString::fromUtf8("label_buffSize"));

        gridLayout_2->addWidget(label_buffSize, 0, 0, 1, 1);

        label_KB = new QLabel(tab);
        label_KB->setObjectName(QString::fromUtf8("label_KB"));

        gridLayout_2->addWidget(label_KB, 0, 2, 1, 1);

        label_receiveColor = new QLabel(tab);
        label_receiveColor->setObjectName(QString::fromUtf8("label_receiveColor"));
        label_receiveColor->setEnabled(false);
        label_receiveColor->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_receiveColor, 4, 0, 1, 1);

        pushButton_sendColor = new QPushButton(tab);
        pushButton_sendColor->setObjectName(QString::fromUtf8("pushButton_sendColor"));
        pushButton_sendColor->setEnabled(false);

        gridLayout_2->addWidget(pushButton_sendColor, 5, 2, 1, 1);

        lineEdit_receiveColor = new QLineEdit(tab);
        lineEdit_receiveColor->setObjectName(QString::fromUtf8("lineEdit_receiveColor"));
        lineEdit_receiveColor->setEnabled(false);
        lineEdit_receiveColor->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_receiveColor, 4, 1, 1, 1);

        label_sendColor = new QLabel(tab);
        label_sendColor->setObjectName(QString::fromUtf8("label_sendColor"));
        label_sendColor->setEnabled(false);
        label_sendColor->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_sendColor, 5, 0, 1, 1);

        lineEdit_sendColor = new QLineEdit(tab);
        lineEdit_sendColor->setObjectName(QString::fromUtf8("lineEdit_sendColor"));
        lineEdit_sendColor->setEnabled(false);
        lineEdit_sendColor->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_sendColor, 5, 1, 1, 1);

        spinBox_buffSize = new QSpinBox(tab);
        spinBox_buffSize->setObjectName(QString::fromUtf8("spinBox_buffSize"));
        spinBox_buffSize->setMinimum(125);
        spinBox_buffSize->setMaximum(512);

        gridLayout_2->addWidget(spinBox_buffSize, 0, 1, 1, 1);

        checkBox_color = new QCheckBox(tab);
        checkBox_color->setObjectName(QString::fromUtf8("checkBox_color"));
        checkBox_color->setEnabled(false);

        gridLayout_2->addWidget(checkBox_color, 3, 0, 1, 2);

        label_encode = new QLabel(tab);
        label_encode->setObjectName(QString::fromUtf8("label_encode"));
        label_encode->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_encode, 2, 0, 1, 1);

        comboBox_encode = new QComboBox(tab);
        comboBox_encode->addItem(QString());
        comboBox_encode->addItem(QString());
        comboBox_encode->addItem(QString());
        comboBox_encode->setObjectName(QString::fromUtf8("comboBox_encode"));

        gridLayout_2->addWidget(comboBox_encode, 2, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        tabWidget->addTab(tab, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(DialogOptions);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogOptions);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogOptions, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogOptions, SLOT(reject()));
        QObject::connect(radioButton_noneEnding, SIGNAL(toggled(bool)), groupBox_checkSum, SLOT(setEnabled(bool)));
        QObject::connect(radioButton_userEnding, SIGNAL(toggled(bool)), lineEdit_userEnding, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogOptions);
    } // setupUi

    void retranslateUi(QDialog *DialogOptions)
    {
        DialogOptions->setWindowTitle(QCoreApplication::translate("DialogOptions", "Options", nullptr));
        groupBox_lineEndingMode->setTitle(QCoreApplication::translate("DialogOptions", "Line Ending Mode", nullptr));
        radioButton_noneEnding->setText(QCoreApplication::translate("DialogOptions", "None", nullptr));
        radioButton_CREnding->setText(QCoreApplication::translate("DialogOptions", "Carriage Return", nullptr));
        radioButton_NL_CREnding->setText(QCoreApplication::translate("DialogOptions", "NL && CR", nullptr));
        radioButton_CR_NLEnding->setText(QCoreApplication::translate("DialogOptions", "CR && NL", nullptr));
        radioButton_userEnding->setText(QCoreApplication::translate("DialogOptions", "user defined (HEX)", nullptr));
        groupBox_checkSum->setTitle(QCoreApplication::translate("DialogOptions", "checkSum", nullptr));
        radioButton_bigEndian->setText(QCoreApplication::translate("DialogOptions", "Big-Endian", nullptr));
        label_checkSumType->setText(QCoreApplication::translate("DialogOptions", "Type", nullptr));
        comboBox_checkSumType->setItemText(0, QCoreApplication::translate("DialogOptions", "None", nullptr));
        comboBox_checkSumType->setItemText(1, QCoreApplication::translate("DialogOptions", "Sum8", nullptr));
        comboBox_checkSumType->setItemText(2, QCoreApplication::translate("DialogOptions", "Sum16", nullptr));
        comboBox_checkSumType->setItemText(3, QCoreApplication::translate("DialogOptions", "CRC16", nullptr));
        comboBox_checkSumType->setItemText(4, QCoreApplication::translate("DialogOptions", "CRC32", nullptr));

        radioButton_LittleEndian->setText(QCoreApplication::translate("DialogOptions", "Little-Endian", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_send), QCoreApplication::translate("DialogOptions", "Send", nullptr));
        pushButton_open->setText(QCoreApplication::translate("DialogOptions", "open...", nullptr));
        label_logFileName->setText(QCoreApplication::translate("DialogOptions", "File Name", nullptr));
        label_maxLogSize->setText(QCoreApplication::translate("DialogOptions", "Max File Size", nullptr));
        label_MB->setText(QCoreApplication::translate("DialogOptions", "MB", nullptr));
        checkBox_saveLog->setText(QCoreApplication::translate("DialogOptions", "Save Log Message", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_logFile), QCoreApplication::translate("DialogOptions", "Log File", nullptr));
        pushButton_font->setText(QCoreApplication::translate("DialogOptions", "Font..", nullptr));
        label_font->setText(QCoreApplication::translate("DialogOptions", "Font", nullptr));
        pushButton_receiveColor->setText(QCoreApplication::translate("DialogOptions", "Color...", nullptr));
        label_buffSize->setText(QCoreApplication::translate("DialogOptions", "Display Buffer Size", nullptr));
        label_KB->setText(QCoreApplication::translate("DialogOptions", "KB", nullptr));
        label_receiveColor->setText(QCoreApplication::translate("DialogOptions", "Receive Text Color", nullptr));
        pushButton_sendColor->setText(QCoreApplication::translate("DialogOptions", "Color...", nullptr));
        label_sendColor->setText(QCoreApplication::translate("DialogOptions", "Send Text Color", nullptr));
        checkBox_color->setText(QCoreApplication::translate("DialogOptions", "Format Display Color", nullptr));
        label_encode->setText(QCoreApplication::translate("DialogOptions", "encode", nullptr));
        comboBox_encode->setItemText(0, QCoreApplication::translate("DialogOptions", "UTF-8", nullptr));
        comboBox_encode->setItemText(1, QCoreApplication::translate("DialogOptions", "GBK", nullptr));
        comboBox_encode->setItemText(2, QCoreApplication::translate("DialogOptions", "Unicode", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("DialogOptions", "Display", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogOptions: public Ui_DialogOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONS_H
