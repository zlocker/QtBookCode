/********************************************************************************
** Form generated from reading UI file 'AlbumWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUMWIDGET_H
#define UI_ALBUMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlbumWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *albumInfoFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *albumName;
    QPushButton *addPicturesButton;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QListView *thumbnailListView;

    void setupUi(QWidget *AlbumWidget)
    {
        if (AlbumWidget->objectName().isEmpty())
            AlbumWidget->setObjectName(QStringLiteral("AlbumWidget"));
        AlbumWidget->resize(673, 269);
        verticalLayout = new QVBoxLayout(AlbumWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        albumInfoFrame = new QFrame(AlbumWidget);
        albumInfoFrame->setObjectName(QStringLiteral("albumInfoFrame"));
        albumInfoFrame->setMinimumSize(QSize(0, 40));
        albumInfoFrame->setMaximumSize(QSize(16777215, 40));
        albumInfoFrame->setFrameShape(QFrame::StyledPanel);
        albumInfoFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(albumInfoFrame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 4, -1, 4);
        albumName = new QLabel(albumInfoFrame);
        albumName->setObjectName(QStringLiteral("albumName"));
        albumName->setMinimumSize(QSize(0, 0));
        albumName->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        albumName->setFont(font);
        albumName->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(albumName);

        addPicturesButton = new QPushButton(albumInfoFrame);
        addPicturesButton->setObjectName(QStringLiteral("addPicturesButton"));
        addPicturesButton->setMaximumSize(QSize(130, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/photo-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addPicturesButton->setIcon(icon);

        horizontalLayout->addWidget(addPicturesButton);

        editButton = new QPushButton(albumInfoFrame);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setMaximumSize(QSize(130, 16777215));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/album-edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        editButton->setIcon(icon1);

        horizontalLayout->addWidget(editButton);

        deleteButton = new QPushButton(albumInfoFrame);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setMaximumSize(QSize(130, 16777215));
        deleteButton->setLayoutDirection(Qt::LeftToRight);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/album-delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon2);

        horizontalLayout->addWidget(deleteButton);


        verticalLayout->addWidget(albumInfoFrame);

        thumbnailListView = new QListView(AlbumWidget);
        thumbnailListView->setObjectName(QStringLiteral("thumbnailListView"));

        verticalLayout->addWidget(thumbnailListView);


        retranslateUi(AlbumWidget);

        QMetaObject::connectSlotsByName(AlbumWidget);
    } // setupUi

    void retranslateUi(QWidget *AlbumWidget)
    {
        AlbumWidget->setWindowTitle(QApplication::translate("AlbumWidget", "Form", Q_NULLPTR));
        albumName->setText(QApplication::translate("AlbumWidget", "Lorem ipsum", Q_NULLPTR));
        addPicturesButton->setText(QApplication::translate("AlbumWidget", " Add pictures", Q_NULLPTR));
        editButton->setText(QApplication::translate("AlbumWidget", " Edit", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("AlbumWidget", " Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AlbumWidget: public Ui_AlbumWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUMWIDGET_H
