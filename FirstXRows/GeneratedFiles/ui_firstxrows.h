/********************************************************************************
** Form generated from reading UI file 'firstxrows.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTXROWS_H
#define UI_FIRSTXROWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirstXRowsClass
{
public:
    QWidget *centralWidget;
    QPushButton *okButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *masterFileLineEdit;
    QSpinBox *linesSpinBox;
    QLineEdit *outputFileLineEdit;
    QToolButton *masterToolButton;
    QToolButton *outputToolButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FirstXRowsClass)
    {
        if (FirstXRowsClass->objectName().isEmpty())
            FirstXRowsClass->setObjectName(QStringLiteral("FirstXRowsClass"));
        FirstXRowsClass->resize(600, 400);
        centralWidget = new QWidget(FirstXRowsClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        okButton = new QPushButton(centralWidget);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(200, 210, 112, 34));
        okButton->setCheckable(false);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 30, 80, 151));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(180, 30, 311, 151));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        masterFileLineEdit = new QLineEdit(layoutWidget1);
        masterFileLineEdit->setObjectName(QStringLiteral("masterFileLineEdit"));

        verticalLayout_2->addWidget(masterFileLineEdit);

        linesSpinBox = new QSpinBox(layoutWidget1);
        linesSpinBox->setObjectName(QStringLiteral("linesSpinBox"));
        linesSpinBox->setMaximum(9999);

        verticalLayout_2->addWidget(linesSpinBox);

        outputFileLineEdit = new QLineEdit(layoutWidget1);
        outputFileLineEdit->setObjectName(QStringLiteral("outputFileLineEdit"));

        verticalLayout_2->addWidget(outputFileLineEdit);

        masterToolButton = new QToolButton(centralWidget);
        masterToolButton->setObjectName(QStringLiteral("masterToolButton"));
        masterToolButton->setGeometry(QRect(500, 50, 32, 25));
        outputToolButton = new QToolButton(centralWidget);
        outputToolButton->setObjectName(QStringLiteral("outputToolButton"));
        outputToolButton->setGeometry(QRect(500, 140, 32, 25));
        FirstXRowsClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FirstXRowsClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 31));
        FirstXRowsClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FirstXRowsClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FirstXRowsClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FirstXRowsClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FirstXRowsClass->setStatusBar(statusBar);

        retranslateUi(FirstXRowsClass);

        QMetaObject::connectSlotsByName(FirstXRowsClass);
    } // setupUi

    void retranslateUi(QMainWindow *FirstXRowsClass)
    {
        FirstXRowsClass->setWindowTitle(QApplication::translate("FirstXRowsClass", "FirstXRows", Q_NULLPTR));
        okButton->setText(QApplication::translate("FirstXRowsClass", "Ok", Q_NULLPTR));
        label->setText(QApplication::translate("FirstXRowsClass", "Master File", Q_NULLPTR));
        label_2->setText(QApplication::translate("FirstXRowsClass", "# of Lines", Q_NULLPTR));
        label_3->setText(QApplication::translate("FirstXRowsClass", "Output File", Q_NULLPTR));
        masterToolButton->setText(QApplication::translate("FirstXRowsClass", "...", Q_NULLPTR));
        outputToolButton->setText(QApplication::translate("FirstXRowsClass", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FirstXRowsClass: public Ui_FirstXRowsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTXROWS_H
