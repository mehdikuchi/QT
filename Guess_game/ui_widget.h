/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox;
    QPushButton *checkButton;
    QPushButton *retryButton;
    QLabel *label;
    QLabel *resultLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        horizontalLayoutWidget = new QWidget(Widget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(130, 30, 201, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        spinBox = new QSpinBox(horizontalLayoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout->addWidget(spinBox);

        checkButton = new QPushButton(horizontalLayoutWidget);
        checkButton->setObjectName(QStringLiteral("checkButton"));
        QFont font;
        font.setFamily(QStringLiteral("B Nazanin"));
        font.setPointSize(12);
        checkButton->setFont(font);

        horizontalLayout->addWidget(checkButton);

        retryButton = new QPushButton(horizontalLayoutWidget);
        retryButton->setObjectName(QStringLiteral("retryButton"));
        QFont font1;
        font1.setFamily(QStringLiteral("B Nazanin"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        retryButton->setFont(font1);

        horizontalLayout->addWidget(retryButton);

        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, -20, 137, 78));
        QFont font2;
        font2.setFamily(QStringLiteral("B Nazanin"));
        font2.setPointSize(11);
        label->setFont(font2);
        resultLabel = new QLabel(Widget);
        resultLabel->setObjectName(QStringLiteral("resultLabel"));
        resultLabel->setGeometry(QRect(160, 120, 131, 21));
        QFont font3;
        font3.setFamily(QStringLiteral("B Homa"));
        font3.setPointSize(14);
        resultLabel->setFont(font3);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        checkButton->setText(QApplication::translate("Widget", "\332\206\332\251 \332\251\331\206 ", nullptr));
        retryButton->setText(QApplication::translate("Widget", "\331\205\330\254\330\257\330\257", nullptr));
        label->setText(QApplication::translate("Widget", "\330\247\332\257\331\207 \331\205\333\214\330\252\331\210\331\206\333\214 \330\271\330\257\330\257 \330\265\330\255\333\214\330\255 \330\261\331\210 \330\250\332\251\331\210", nullptr));
        resultLabel->setText(QApplication::translate("Widget", "\331\205\330\254\330\257\330\257 \330\263\330\271\333\214 \332\251\331\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
