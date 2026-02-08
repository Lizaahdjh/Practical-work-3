#include "widget.h"
#include "ui_widget.h"
#include "converter.h"
#include <QDoubleValidator>
#include <QLocale>
#include <QSignalBlocker>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("Converter");

    QDoubleValidator *validator = new QDoubleValidator(this);
    validator->setNotation(QDoubleValidator::StandardNotation);
    validator->setLocale(QLocale(QLocale::Ukrainian, QLocale::Ukraine));

    QLineEdit* edits[] = {ui->lineEdit1, ui->lineEdit2, ui->lineEdit3, ui->lineEdit4, ui->lineEdit5, ui->lineEdit6};
    for(auto e : edits) e->setValidator(validator);

    // Довжина
    connect(ui->lineEdit1, &QLineEdit::textEdited, this, &Widget::updateFromTop);
    connect(ui->lineEdit2, &QLineEdit::textEdited, this, &Widget::updateFromBottom);
    connect(ui->comboBox1, &QComboBox::currentIndexChanged, this, &Widget::updateFromTop);
    connect(ui->comboBox2, &QComboBox::currentIndexChanged, this, &Widget::updateFromTop);

    // Маса
    connect(ui->lineEdit3, &QLineEdit::textEdited, this, &Widget::updateFromTop);
    connect(ui->lineEdit4, &QLineEdit::textEdited, this, &Widget::updateFromBottom);
    connect(ui->comboBox3, &QComboBox::currentIndexChanged, this, &Widget::updateFromTop);
    connect(ui->comboBox4, &QComboBox::currentIndexChanged, this, &Widget::updateFromTop);

    // Температура
    connect(ui->lineEdit5, &QLineEdit::textEdited, this, &Widget::updateFromTop);
    connect(ui->lineEdit6, &QLineEdit::textEdited, this, &Widget::updateFromBottom);
    connect(ui->comboBox5, &QComboBox::currentIndexChanged, this, &Widget::updateFromTop);
    connect(ui->comboBox6, &QComboBox::currentIndexChanged, this, &Widget::updateFromTop);

    // Очищення полів при зміні вкладки
    connect(ui->tabWidget, &QTabWidget::currentChanged, this, &Widget::clearFields);
}

Widget::~Widget() { delete ui; }

void Widget::clearFields() {
    QLineEdit* edits[] = {ui->lineEdit1, ui->lineEdit2, ui->lineEdit3,
                          ui->lineEdit4, ui->lineEdit5, ui->lineEdit6};
    for(auto e : edits) {
        QSignalBlocker blocker(e);
        e->clear();
        e->setStyleSheet("");
    }
}

void Widget::updateFromTop() {
    QLocale locale(QLocale::Ukrainian);
    int tab = ui->tabWidget->currentIndex();

    QLineEdit *in = (tab==0)? ui->lineEdit1 : (tab==1)? ui->lineEdit3 : ui->lineEdit5;
    QLineEdit *out = (tab==0)? ui->lineEdit2 : (tab==1)? ui->lineEdit4 : ui->lineEdit6;
    QComboBox *cbIn = (tab==0)? ui->comboBox1 : (tab==1)? ui->comboBox3 : ui->comboBox5;
    QComboBox *cbOut = (tab==0)? ui->comboBox2 : (tab==1)? ui->comboBox4 : ui->comboBox6;

    bool ok;
    double val = locale.toDouble(in->text(), &ok);

    if (ok) {
        in->setStyleSheet("");
        double res = Converter::convert(val, cbIn->currentText(), cbOut->currentText(), (Converter::Type)tab);

        QSignalBlocker blocker(out);
        out->setText(locale.toString(res, 'g', 6));
    } else {
        out->clear();
        if (!in->text().isEmpty()) {
            in->setStyleSheet("border: 1px solid red; background-color: #fff0f0;");
        } else {
            in->setStyleSheet("");
        }
    }
}

void Widget::updateFromBottom() {
    QLocale locale(QLocale::Ukrainian);
    int tab = ui->tabWidget->currentIndex();

    QLineEdit *in = (tab==0)? ui->lineEdit2 : (tab==1)? ui->lineEdit4 : ui->lineEdit6;
    QLineEdit *out = (tab==0)? ui->lineEdit1 : (tab==1)? ui->lineEdit3 : ui->lineEdit5;
    QComboBox *cbIn = (tab==0)? ui->comboBox2 : (tab==1)? ui->comboBox4 : ui->comboBox6;
    QComboBox *cbOut = (tab==0)? ui->comboBox1 : (tab==1)? ui->comboBox3 : ui->comboBox5;

    bool ok;
    double val = locale.toDouble(in->text(), &ok);

    if (ok) {
        in->setStyleSheet("");
        double res = Converter::convert(val, cbIn->currentText(), cbOut->currentText(), (Converter::Type)tab);

        QSignalBlocker blocker(out);
        out->setText(locale.toString(res, 'g', 6));
    } else {
        out->clear();
        if (!in->text().isEmpty()) {
            in->setStyleSheet("border: 1px solid red; background-color: #fff0f0;");
        } else {
            in->setStyleSheet("");
        }
    }
}
