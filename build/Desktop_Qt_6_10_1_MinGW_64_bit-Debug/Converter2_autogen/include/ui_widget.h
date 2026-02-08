/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTabWidget *tabWidget;
    QWidget *tab1;
    QSplitter *splitter_3;
    QSplitter *splitter_2;
    QLineEdit *lineEdit1;
    QComboBox *comboBox1;
    QSplitter *splitter;
    QLineEdit *lineEdit2;
    QComboBox *comboBox2;
    QWidget *tab2;
    QSplitter *splitter_4;
    QSplitter *splitter_5;
    QLineEdit *lineEdit3;
    QComboBox *comboBox3;
    QSplitter *splitter_6;
    QLineEdit *lineEdit4;
    QComboBox *comboBox4;
    QWidget *tab3;
    QSplitter *splitter_7;
    QSplitter *splitter_8;
    QLineEdit *lineEdit5;
    QComboBox *comboBox5;
    QSplitter *splitter_9;
    QLineEdit *lineEdit6;
    QComboBox *comboBox6;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(600, 400);
        Widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    font-family: \"Seagull\";\n"
"    font-size: 12pt;\n"
"    color: rgb(255, 255, 255); \n"
"}\n"
"\n"
"QWidget#tab1, QWidget#tab2, QWidget#tab3 {\n"
"    background-color: #f8f9fa;\n"
"}"));
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(25, 25, 550, 350));
        QFont font;
        font.setFamilies({QString::fromUtf8("Seagull")});
        font.setPointSize(12);
        font.setBold(true);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab {\n"
"    background: #e1e4e8; \n"
"    border: 1px solid #c1c4c8;\n"
"    padding: 12px 30px;\n"
"    margin-right: 2px;\n"
"    border-top-left-radius: 8px;\n"
"    border-top-right-radius: 8px;\n"
"    color: #586069; \n"
"}\n"
"\n"
"QTabBar::tab:hover {\n"
"    background: #d1d5da;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: #007bff; \n"
"    color: #ffffff;  \n"
"    border-bottom-color: #007bff;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: 2px solid #007bff;\n"
"    top: -2px;\n"
"    background: #ffffff;\n"
"    border-radius: 8px;\n"
"}"));
        tab1 = new QWidget();
        tab1->setObjectName("tab1");
        splitter_3 = new QSplitter(tab1);
        splitter_3->setObjectName("splitter_3");
        splitter_3->setGeometry(QRect(30, 70, 485, 166));
        splitter_3->setStyleSheet(QString::fromUtf8("QSplitter {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"}\n"
"\n"
"QSplitter::handle {\n"
"    background-color: rgb(255, 255, 255)\n"
"}\n"
"\n"
"QSplitter::handle:horizontal {\n"
"    width: 1px; \n"
"}\n"
"\n"
"QSplitter::handle:vertical {\n"
"    height: 1px;\n"
"}\n"
"\n"
"QSplitter::handle:hover {\n"
"    background-color: #0078d4; \n"
"}"));
        splitter_3->setOrientation(Qt::Orientation::Vertical);
        splitter_3->setHandleWidth(90);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Orientation::Horizontal);
        splitter_2->setHandleWidth(70);
        lineEdit1 = new QLineEdit(splitter_2);
        lineEdit1->setObjectName("lineEdit1");
        lineEdit1->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; \n"
"    border: 1px solid #a0c4ff; \n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    border: 1px solid #7fb3ff; \n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 4px solid #0078d4;\n"
"    background-color: #ffffff;\n"
"}"));
        splitter_2->addWidget(lineEdit1);
        comboBox1 = new QComboBox(splitter_2);
        comboBox1->addItem(QString());
        comboBox1->addItem(QString());
        comboBox1->addItem(QString());
        comboBox1->addItem(QString());
        comboBox1->addItem(QString());
        comboBox1->setObjectName("comboBox1");
        comboBox1->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #ffffff; \n"
"    border: 1px solid #a0c4ff; \n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    border: 1px solid #7fb3ff; \n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid #0078d4; \n"
"    background-color: #ffffff;\n"
"}"));
        splitter_2->addWidget(comboBox1);
        splitter_3->addWidget(splitter_2);
        splitter = new QSplitter(splitter_3);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Orientation::Horizontal);
        splitter->setHandleWidth(60);
        lineEdit2 = new QLineEdit(splitter);
        lineEdit2->setObjectName("lineEdit2");
        lineEdit2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; \n"
"    border: 1px solid #a0c4ff; \n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    border: 1px solid #7fb3ff; \n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 4px solid #0078d4; \n"
"    background-color: #ffffff;\n"
"}"));
        splitter->addWidget(lineEdit2);
        comboBox2 = new QComboBox(splitter);
        comboBox2->addItem(QString());
        comboBox2->addItem(QString());
        comboBox2->addItem(QString());
        comboBox2->addItem(QString());
        comboBox2->addItem(QString());
        comboBox2->setObjectName("comboBox2");
        comboBox2->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #ffffff; \n"
"    border: 1px solid #a0c4ff; \n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    border: 1px solid #7fb3ff; \n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid #0078d4; \n"
"    background-color: #ffffff;\n"
"}"));
        splitter->addWidget(comboBox2);
        splitter_3->addWidget(splitter);
        tabWidget->addTab(tab1, QString());
        tab2 = new QWidget();
        tab2->setObjectName("tab2");
        splitter_4 = new QSplitter(tab2);
        splitter_4->setObjectName("splitter_4");
        splitter_4->setGeometry(QRect(30, 70, 485, 166));
        splitter_4->setStyleSheet(QString::fromUtf8("QSplitter {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"}\n"
"\n"
"QSplitter::handle {\n"
"    background-color: rgb(255, 255, 255); \n"
"}\n"
"\n"
"QSplitter::handle:horizontal {\n"
"    width: 1px; \n"
"}\n"
"\n"
"QSplitter::handle:vertical {\n"
"    height: 1px;\n"
"}\n"
"\n"
"QSplitter::handle:hover {\n"
"    background-color: #0078d4; \n"
"}"));
        splitter_4->setOrientation(Qt::Orientation::Vertical);
        splitter_4->setHandleWidth(90);
        splitter_5 = new QSplitter(splitter_4);
        splitter_5->setObjectName("splitter_5");
        splitter_5->setOrientation(Qt::Orientation::Horizontal);
        splitter_5->setHandleWidth(70);
        lineEdit3 = new QLineEdit(splitter_5);
        lineEdit3->setObjectName("lineEdit3");
        lineEdit3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; \n"
"    border: 1px solid #a0c4ff; \n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    border: 1px solid #7fb3ff; \n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 4px solid #0078d4;\n"
"    background-color: #ffffff;\n"
"}"));
        splitter_5->addWidget(lineEdit3);
        comboBox3 = new QComboBox(splitter_5);
        comboBox3->addItem(QString());
        comboBox3->addItem(QString());
        comboBox3->addItem(QString());
        comboBox3->setObjectName("comboBox3");
        comboBox3->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #ffffff; \n"
"    border: 1px solid #a0c4ff; \n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    border: 1px solid #7fb3ff; \n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid #0078d4; \n"
"    background-color: #ffffff;\n"
"}"));
        splitter_5->addWidget(comboBox3);
        splitter_4->addWidget(splitter_5);
        splitter_6 = new QSplitter(splitter_4);
        splitter_6->setObjectName("splitter_6");
        splitter_6->setOrientation(Qt::Orientation::Horizontal);
        splitter_6->setHandleWidth(60);
        lineEdit4 = new QLineEdit(splitter_6);
        lineEdit4->setObjectName("lineEdit4");
        lineEdit4->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; \n"
"    border: 1px solid #a0c4ff; \n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    border: 1px solid #7fb3ff; \n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 4px solid #0078d4;\n"
"    background-color: #ffffff;\n"
"}"));
        splitter_6->addWidget(lineEdit4);
        comboBox4 = new QComboBox(splitter_6);
        comboBox4->addItem(QString());
        comboBox4->addItem(QString());
        comboBox4->addItem(QString());
        comboBox4->setObjectName("comboBox4");
        comboBox4->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #ffffff; \n"
"    border: 1px solid #a0c4ff; \n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    border: 1px solid #7fb3ff; \n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid #0078d4; \n"
"    background-color: #ffffff;\n"
"}"));
        splitter_6->addWidget(comboBox4);
        splitter_4->addWidget(splitter_6);
        tabWidget->addTab(tab2, QString());
        tab3 = new QWidget();
        tab3->setObjectName("tab3");
        splitter_7 = new QSplitter(tab3);
        splitter_7->setObjectName("splitter_7");
        splitter_7->setGeometry(QRect(30, 70, 485, 166));
        splitter_7->setStyleSheet(QString::fromUtf8("QSplitter {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"}\n"
"\n"
"QSplitter::handle {\n"
"    background-color: rgb(255, 255, 255); \n"
"}\n"
"\n"
"QSplitter::handle:horizontal {\n"
"    width: 1px; \n"
"}\n"
"\n"
"QSplitter::handle:vertical {\n"
"    height: 1px;\n"
"}\n"
"\n"
"QSplitter::handle:hover {\n"
"    background-color: #0078d4; \n"
"}"));
        splitter_7->setOrientation(Qt::Orientation::Vertical);
        splitter_7->setHandleWidth(90);
        splitter_8 = new QSplitter(splitter_7);
        splitter_8->setObjectName("splitter_8");
        splitter_8->setOrientation(Qt::Orientation::Horizontal);
        splitter_8->setHandleWidth(70);
        lineEdit5 = new QLineEdit(splitter_8);
        lineEdit5->setObjectName("lineEdit5");
        lineEdit5->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; \n"
"    border: 1px solid #a0c4ff; \n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    border: 1px solid #7fb3ff; \n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 4px solid #0078d4;\n"
"    background-color: #ffffff;\n"
"}"));
        splitter_8->addWidget(lineEdit5);
        comboBox5 = new QComboBox(splitter_8);
        comboBox5->addItem(QString());
        comboBox5->addItem(QString());
        comboBox5->addItem(QString());
        comboBox5->setObjectName("comboBox5");
        comboBox5->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #ffffff; \n"
"    border: 1px solid #a0c4ff; \n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    border: 1px solid #7fb3ff; \n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid #0078d4; \n"
"    background-color: #ffffff;\n"
"}"));
        splitter_8->addWidget(comboBox5);
        splitter_7->addWidget(splitter_8);
        splitter_9 = new QSplitter(splitter_7);
        splitter_9->setObjectName("splitter_9");
        splitter_9->setOrientation(Qt::Orientation::Horizontal);
        splitter_9->setHandleWidth(60);
        lineEdit6 = new QLineEdit(splitter_9);
        lineEdit6->setObjectName("lineEdit6");
        lineEdit6->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ffffff; \n"
"    border: 1px solid #a0c4ff; \n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    border: 1px solid #7fb3ff; \n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 4px solid #0078d4;\n"
"    background-color: #ffffff;\n"
"}"));
        splitter_9->addWidget(lineEdit6);
        comboBox6 = new QComboBox(splitter_9);
        comboBox6->addItem(QString());
        comboBox6->addItem(QString());
        comboBox6->addItem(QString());
        comboBox6->setObjectName("comboBox6");
        comboBox6->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #ffffff; \n"
"    border: 1px solid #a0c4ff; \n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    border: 1px solid #7fb3ff; \n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid #0078d4; \n"
"    background-color: #ffffff;\n"
"}"));
        splitter_9->addWidget(comboBox6);
        splitter_7->addWidget(splitter_9);
        tabWidget->addTab(tab3, QString());

        retranslateUi(Widget);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        comboBox1->setItemText(0, QCoreApplication::translate("Widget", "meters (m)", nullptr));
        comboBox1->setItemText(1, QCoreApplication::translate("Widget", "kilometers (km)", nullptr));
        comboBox1->setItemText(2, QCoreApplication::translate("Widget", "inches (in)", nullptr));
        comboBox1->setItemText(3, QCoreApplication::translate("Widget", "feet (ft)", nullptr));
        comboBox1->setItemText(4, QCoreApplication::translate("Widget", "miles (mi)", nullptr));

        comboBox2->setItemText(0, QCoreApplication::translate("Widget", "meters (m)", nullptr));
        comboBox2->setItemText(1, QCoreApplication::translate("Widget", "kilometers (km)", nullptr));
        comboBox2->setItemText(2, QCoreApplication::translate("Widget", "inches (in)", nullptr));
        comboBox2->setItemText(3, QCoreApplication::translate("Widget", "feet (ft)", nullptr));
        comboBox2->setItemText(4, QCoreApplication::translate("Widget", "miles (mi)", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab1), QCoreApplication::translate("Widget", "Length", nullptr));
        comboBox3->setItemText(0, QCoreApplication::translate("Widget", "kilograms (kg)", nullptr));
        comboBox3->setItemText(1, QCoreApplication::translate("Widget", "pounds (lb)", nullptr));
        comboBox3->setItemText(2, QCoreApplication::translate("Widget", "ounces (oz)", nullptr));

        comboBox4->setItemText(0, QCoreApplication::translate("Widget", "kilograms (kg)", nullptr));
        comboBox4->setItemText(1, QCoreApplication::translate("Widget", "pounds (lb)", nullptr));
        comboBox4->setItemText(2, QCoreApplication::translate("Widget", "ounces (oz)", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab2), QCoreApplication::translate("Widget", "Mass", nullptr));
        comboBox5->setItemText(0, QCoreApplication::translate("Widget", "Celsius (\302\260C)", nullptr));
        comboBox5->setItemText(1, QCoreApplication::translate("Widget", "Fahrenheit (\302\260F)", nullptr));
        comboBox5->setItemText(2, QCoreApplication::translate("Widget", "Kelvin (K)", nullptr));

        comboBox6->setItemText(0, QCoreApplication::translate("Widget", "Celsius (\302\260C)", nullptr));
        comboBox6->setItemText(1, QCoreApplication::translate("Widget", "Fahrenheit (\302\260F)", nullptr));
        comboBox6->setItemText(2, QCoreApplication::translate("Widget", "Kelvin (K)", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab3), QCoreApplication::translate("Widget", "Temperature", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
