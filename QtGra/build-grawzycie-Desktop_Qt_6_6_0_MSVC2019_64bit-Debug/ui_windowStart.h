/********************************************************************************
** Form generated from reading UI file 'windowStart.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWSTART_H
#define UI_WINDOWSTART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_windowStartDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QSpinBox *heightSpinBox;
    QSpinBox *widthSpinBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *windowStartDialog)
    {
        if (windowStartDialog->objectName().isEmpty())
            windowStartDialog->setObjectName("windowStartDialog");
        windowStartDialog->resize(334, 189);
        buttonBox = new QDialogButtonBox(windowStartDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(-60, 140, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit = new QLineEdit(windowStartDialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 20, 321, 24));
        lineEdit->setReadOnly(true);
        layoutWidget = new QWidget(windowStartDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(150, 60, 50, 67));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        heightSpinBox = new QSpinBox(layoutWidget);
        heightSpinBox->setObjectName("heightSpinBox");
        heightSpinBox->setMinimum(3);
        heightSpinBox->setMaximum(20);

        verticalLayout->addWidget(heightSpinBox);

        widthSpinBox = new QSpinBox(layoutWidget);
        widthSpinBox->setObjectName("widthSpinBox");
        widthSpinBox->setMinimum(3);
        widthSpinBox->setMaximum(20);

        verticalLayout->addWidget(widthSpinBox);

        layoutWidget1 = new QWidget(windowStartDialog);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 60, 110, 65));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(layoutWidget1);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(layoutWidget1);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit_3);


        retranslateUi(windowStartDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, windowStartDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, windowStartDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(windowStartDialog);
    } // setupUi

    void retranslateUi(QDialog *windowStartDialog)
    {
        windowStartDialog->setWindowTitle(QCoreApplication::translate("windowStartDialog", "Dialog", nullptr));
        lineEdit->setText(QCoreApplication::translate("windowStartDialog", "Prosze podaj rozmiar planszy. (min 3 max 20):", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("windowStartDialog", "Wysoko\305\233\304\207", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("windowStartDialog", "Szeroko\305\233\304\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class windowStartDialog: public Ui_windowStartDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWSTART_H
