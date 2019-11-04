/********************************************************************************
** Form generated from reading UI file 'interface.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACE_H
#define UI_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_interface
{
public:
    QAction *actionNovo;
    QAction *actionAbrir;
    QAction *actionSalvar;
    QAction *actionPlay;
    QAction *actionRecortar;
    QAction *actionCopiar;
    QAction *actionColar;
    QAction *actionDesfazer;
    QAction *actionRefazer;
    QWidget *centralwidget;
    QGridLayout *gridLayout_7;
    QTabWidget *Entrada;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit;
    QWidget *tab_3;
    QGridLayout *gridLayout_8;
    QTextBrowser *codeNumber;
    QTabWidget *Saida_das_analises;
    QWidget *lexica;
    QGridLayout *gridLayout;
    QTextBrowser *saidaLexica;
    QWidget *sintatica;
    QGridLayout *gridLayout_4;
    QTextBrowser *saidaSintatica;
    QWidget *tabelaIdentificador;
    QGridLayout *gridLayout_10;
    QTextBrowser *saidaSemantica;
    QTabWidget *Ilustraodassaidas;
    QWidget *automatos;
    QGridLayout *gridLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QLabel *automato1;
    QLabel *automato2;
    QLabel *automato3;
    QLabel *automato4;
    QLabel *automato5;
    QLabel *automato6;
    QLabel *automato7;
    QLabel *automato8;
    QLabel *automato9;
    QLabel *automato10;
    QLabel *automato11;
    QLabel *automato12;
    QLabel *automato13;
    QLabel *automato14;
    QLabel *automato15;
    QWidget *arvore;
    QGridLayout *gridLayout_6;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_9;
    QLabel *arvoreText;
    QWidget *gramatica;
    QGridLayout *gridLayout_5;
    QTextBrowser *textGramatica;
    QMenuBar *menubar;
    QMenu *menuNovo;
    QMenu *menuEditar;
    QMenu *menuEditar_2;
    QToolBar *toolBar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *interface)
    {
        if (interface->objectName().isEmpty())
            interface->setObjectName(QString::fromUtf8("interface"));
        interface->resize(1249, 662);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 85, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush2(QColor(0, 0, 127, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        QBrush brush4(QColor(0, 0, 0, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        interface->setPalette(palette);
        actionNovo = new QAction(interface);
        actionNovo->setObjectName(QString::fromUtf8("actionNovo"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNovo->setIcon(icon);
        actionAbrir = new QAction(interface);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbrir->setIcon(icon1);
        actionSalvar = new QAction(interface);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalvar->setIcon(icon2);
        actionPlay = new QAction(interface);
        actionPlay->setObjectName(QString::fromUtf8("actionPlay"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlay->setIcon(icon3);
        actionRecortar = new QAction(interface);
        actionRecortar->setObjectName(QString::fromUtf8("actionRecortar"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/cortar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecortar->setIcon(icon4);
        actionCopiar = new QAction(interface);
        actionCopiar->setObjectName(QString::fromUtf8("actionCopiar"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/copiar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopiar->setIcon(icon5);
        actionColar = new QAction(interface);
        actionColar->setObjectName(QString::fromUtf8("actionColar"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/icons/colar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColar->setIcon(icon6);
        actionDesfazer = new QAction(interface);
        actionDesfazer->setObjectName(QString::fromUtf8("actionDesfazer"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/icons/desfazer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDesfazer->setIcon(icon7);
        actionRefazer = new QAction(interface);
        actionRefazer->setObjectName(QString::fromUtf8("actionRefazer"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/icons/refazer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefazer->setIcon(icon8);
        centralwidget = new QWidget(interface);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_7 = new QGridLayout(centralwidget);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        Entrada = new QTabWidget(centralwidget);
        Entrada->setObjectName(QString::fromUtf8("Entrada"));
        QPalette palette1;
        QBrush brush5(QColor(100, 100, 100, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush5);
        Entrada->setPalette(palette1);
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        Entrada->setFont(font);
        Entrada->setTabShape(QTabWidget::Triangular);
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QPalette palette2;
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        QBrush brush7(QColor(104, 104, 104, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush7);
        QBrush brush8(QColor(255, 255, 255, 128));
        brush8.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        QBrush brush9(QColor(255, 255, 255, 128));
        brush9.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        QBrush brush10(QColor(240, 240, 240, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        QBrush brush11(QColor(255, 255, 255, 128));
        brush11.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        textEdit->setPalette(palette2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        textEdit->setFont(font1);
        textEdit->setMouseTracking(true);
        textEdit->setTabletTracking(true);
        textEdit->setContextMenuPolicy(Qt::ActionsContextMenu);
        textEdit->setInputMethodHints(Qt::ImhMultiLine);
        textEdit->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(textEdit, 0, 0, 1, 1);

        Entrada->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_8 = new QGridLayout(tab_3);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        codeNumber = new QTextBrowser(tab_3);
        codeNumber->setObjectName(QString::fromUtf8("codeNumber"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Text, brush6);
        QBrush brush12(QColor(108, 108, 108, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush12);
        QBrush brush13(QColor(255, 255, 255, 128));
        brush13.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        QBrush brush14(QColor(255, 255, 255, 128));
        brush14.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        QBrush brush15(QColor(255, 255, 255, 128));
        brush15.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        codeNumber->setPalette(palette3);
        codeNumber->setFont(font1);

        gridLayout_8->addWidget(codeNumber, 0, 0, 1, 1);

        Entrada->addTab(tab_3, QString());

        gridLayout_7->addWidget(Entrada, 0, 0, 1, 1, Qt::AlignLeft);

        Saida_das_analises = new QTabWidget(centralwidget);
        Saida_das_analises->setObjectName(QString::fromUtf8("Saida_das_analises"));
        Saida_das_analises->setFont(font);
        Saida_das_analises->setTabShape(QTabWidget::Triangular);
        lexica = new QWidget();
        lexica->setObjectName(QString::fromUtf8("lexica"));
        gridLayout = new QGridLayout(lexica);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        saidaLexica = new QTextBrowser(lexica);
        saidaLexica->setObjectName(QString::fromUtf8("saidaLexica"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        QBrush brush16(QColor(127, 127, 127, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush16);
        QBrush brush17(QColor(170, 170, 170, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush17);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        QBrush brush18(QColor(255, 255, 220, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush18);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush16);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush17);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush18);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush16);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush17);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush18);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        saidaLexica->setPalette(palette4);
        saidaLexica->setFont(font1);
        saidaLexica->setMouseTracking(true);
        saidaLexica->setTabletTracking(true);
        saidaLexica->setContextMenuPolicy(Qt::ActionsContextMenu);
        saidaLexica->setAutoFormatting(QTextEdit::AutoNone);
        saidaLexica->setUndoRedoEnabled(true);
        saidaLexica->setOpenLinks(false);

        gridLayout->addWidget(saidaLexica, 0, 0, 1, 1);

        Saida_das_analises->addTab(lexica, QString());
        sintatica = new QWidget();
        sintatica->setObjectName(QString::fromUtf8("sintatica"));
        gridLayout_4 = new QGridLayout(sintatica);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        saidaSintatica = new QTextBrowser(sintatica);
        saidaSintatica->setObjectName(QString::fromUtf8("saidaSintatica"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        saidaSintatica->setFont(font2);

        gridLayout_4->addWidget(saidaSintatica, 0, 0, 1, 1);

        Saida_das_analises->addTab(sintatica, QString());
        tabelaIdentificador = new QWidget();
        tabelaIdentificador->setObjectName(QString::fromUtf8("tabelaIdentificador"));
        gridLayout_10 = new QGridLayout(tabelaIdentificador);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        saidaSemantica = new QTextBrowser(tabelaIdentificador);
        saidaSemantica->setObjectName(QString::fromUtf8("saidaSemantica"));

        gridLayout_10->addWidget(saidaSemantica, 0, 0, 1, 1);

        Saida_das_analises->addTab(tabelaIdentificador, QString());

        gridLayout_7->addWidget(Saida_das_analises, 0, 2, 1, 1);

        Ilustraodassaidas = new QTabWidget(centralwidget);
        Ilustraodassaidas->setObjectName(QString::fromUtf8("Ilustraodassaidas"));
        Ilustraodassaidas->setFont(font);
        Ilustraodassaidas->setTabShape(QTabWidget::Triangular);
        automatos = new QWidget();
        automatos->setObjectName(QString::fromUtf8("automatos"));
        gridLayout_3 = new QGridLayout(automatos);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        scrollArea = new QScrollArea(automatos);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 443, 535));
        scrollAreaWidgetContents->setFocusPolicy(Qt::NoFocus);
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        automato1 = new QLabel(scrollAreaWidgetContents);
        automato1->setObjectName(QString::fromUtf8("automato1"));

        verticalLayout->addWidget(automato1);

        automato2 = new QLabel(scrollAreaWidgetContents);
        automato2->setObjectName(QString::fromUtf8("automato2"));

        verticalLayout->addWidget(automato2);

        automato3 = new QLabel(scrollAreaWidgetContents);
        automato3->setObjectName(QString::fromUtf8("automato3"));

        verticalLayout->addWidget(automato3);

        automato4 = new QLabel(scrollAreaWidgetContents);
        automato4->setObjectName(QString::fromUtf8("automato4"));

        verticalLayout->addWidget(automato4);

        automato5 = new QLabel(scrollAreaWidgetContents);
        automato5->setObjectName(QString::fromUtf8("automato5"));

        verticalLayout->addWidget(automato5);

        automato6 = new QLabel(scrollAreaWidgetContents);
        automato6->setObjectName(QString::fromUtf8("automato6"));

        verticalLayout->addWidget(automato6);

        automato7 = new QLabel(scrollAreaWidgetContents);
        automato7->setObjectName(QString::fromUtf8("automato7"));

        verticalLayout->addWidget(automato7);

        automato8 = new QLabel(scrollAreaWidgetContents);
        automato8->setObjectName(QString::fromUtf8("automato8"));
        automato8->setBaseSize(QSize(120, 0));

        verticalLayout->addWidget(automato8);

        automato9 = new QLabel(scrollAreaWidgetContents);
        automato9->setObjectName(QString::fromUtf8("automato9"));

        verticalLayout->addWidget(automato9);

        automato10 = new QLabel(scrollAreaWidgetContents);
        automato10->setObjectName(QString::fromUtf8("automato10"));

        verticalLayout->addWidget(automato10);

        automato11 = new QLabel(scrollAreaWidgetContents);
        automato11->setObjectName(QString::fromUtf8("automato11"));

        verticalLayout->addWidget(automato11);

        automato12 = new QLabel(scrollAreaWidgetContents);
        automato12->setObjectName(QString::fromUtf8("automato12"));

        verticalLayout->addWidget(automato12);

        automato13 = new QLabel(scrollAreaWidgetContents);
        automato13->setObjectName(QString::fromUtf8("automato13"));

        verticalLayout->addWidget(automato13);

        automato14 = new QLabel(scrollAreaWidgetContents);
        automato14->setObjectName(QString::fromUtf8("automato14"));

        verticalLayout->addWidget(automato14);

        automato15 = new QLabel(scrollAreaWidgetContents);
        automato15->setObjectName(QString::fromUtf8("automato15"));

        verticalLayout->addWidget(automato15);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_3->addWidget(scrollArea, 0, 0, 1, 1);

        Ilustraodassaidas->addTab(automatos, QString());
        arvore = new QWidget();
        arvore->setObjectName(QString::fromUtf8("arvore"));
        gridLayout_6 = new QGridLayout(arvore);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        scrollArea_2 = new QScrollArea(arvore);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 443, 535));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(16);
        scrollAreaWidgetContents_2->setFont(font3);
        gridLayout_9 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        arvoreText = new QLabel(scrollAreaWidgetContents_2);
        arvoreText->setObjectName(QString::fromUtf8("arvoreText"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Verdana"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setUnderline(true);
        font4.setWeight(75);
        arvoreText->setFont(font4);
        arvoreText->setTextFormat(Qt::PlainText);

        gridLayout_9->addWidget(arvoreText, 0, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_6->addWidget(scrollArea_2, 0, 0, 1, 1);

        Ilustraodassaidas->addTab(arvore, QString());
        gramatica = new QWidget();
        gramatica->setObjectName(QString::fromUtf8("gramatica"));
        gridLayout_5 = new QGridLayout(gramatica);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        textGramatica = new QTextBrowser(gramatica);
        textGramatica->setObjectName(QString::fromUtf8("textGramatica"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Verdana"));
        font5.setPointSize(10);
        textGramatica->setFont(font5);

        gridLayout_5->addWidget(textGramatica, 0, 0, 1, 1);

        Ilustraodassaidas->addTab(gramatica, QString());

        gridLayout_7->addWidget(Ilustraodassaidas, 0, 3, 1, 1);

        interface->setCentralWidget(centralwidget);
        menubar = new QMenuBar(interface);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1249, 21));
        menubar->setDefaultUp(false);
        menuNovo = new QMenu(menubar);
        menuNovo->setObjectName(QString::fromUtf8("menuNovo"));
        menuEditar = new QMenu(menubar);
        menuEditar->setObjectName(QString::fromUtf8("menuEditar"));
        menuEditar_2 = new QMenu(menubar);
        menuEditar_2->setObjectName(QString::fromUtf8("menuEditar_2"));
        interface->setMenuBar(menubar);
        toolBar = new QToolBar(interface);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush19(QColor(168, 168, 168, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush19);
        QBrush brush20(QColor(98, 98, 98, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::NoRole, brush20);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush19);
        palette5.setBrush(QPalette::Inactive, QPalette::NoRole, brush20);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::NoRole, brush20);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        toolBar->setPalette(palette5);
        QFont font6;
        font6.setFamily(QString::fromUtf8("Forte"));
        toolBar->setFont(font6);
        toolBar->setIconSize(QSize(18, 18));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        interface->addToolBar(Qt::TopToolBarArea, toolBar);
        statusbar = new QStatusBar(interface);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        interface->setStatusBar(statusbar);

        menubar->addAction(menuNovo->menuAction());
        menubar->addAction(menuEditar->menuAction());
        menubar->addAction(menuEditar_2->menuAction());
        menuNovo->addAction(actionNovo);
        menuNovo->addAction(actionAbrir);
        menuNovo->addSeparator();
        menuNovo->addAction(actionSalvar);
        menuEditar->addAction(actionPlay);
        menuEditar_2->addAction(actionRecortar);
        menuEditar_2->addAction(actionCopiar);
        menuEditar_2->addAction(actionColar);
        menuEditar_2->addSeparator();
        menuEditar_2->addAction(actionDesfazer);
        menuEditar_2->addAction(actionRefazer);
        toolBar->addAction(actionNovo);
        toolBar->addSeparator();
        toolBar->addAction(actionAbrir);
        toolBar->addSeparator();
        toolBar->addAction(actionSalvar);
        toolBar->addSeparator();
        toolBar->addAction(actionPlay);
        toolBar->addSeparator();
        toolBar->addAction(actionDesfazer);
        toolBar->addSeparator();
        toolBar->addAction(actionRefazer);
        toolBar->addSeparator();

        retranslateUi(interface);

        Entrada->setCurrentIndex(0);
        Saida_das_analises->setCurrentIndex(2);
        Ilustraodassaidas->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(interface);
    } // setupUi

    void retranslateUi(QMainWindow *interface)
    {
        interface->setWindowTitle(QApplication::translate("interface", "interface", nullptr));
        actionNovo->setText(QApplication::translate("interface", "Novo", nullptr));
        actionAbrir->setText(QApplication::translate("interface", "Abrir", nullptr));
        actionSalvar->setText(QApplication::translate("interface", "Salvar", nullptr));
        actionPlay->setText(QApplication::translate("interface", "Run", nullptr));
        actionRecortar->setText(QApplication::translate("interface", "Recortar", nullptr));
        actionCopiar->setText(QApplication::translate("interface", "Copiar", nullptr));
        actionColar->setText(QApplication::translate("interface", "Colar", nullptr));
        actionDesfazer->setText(QApplication::translate("interface", "Desfazer", nullptr));
        actionRefazer->setText(QApplication::translate("interface", "Refazer", nullptr));
        Entrada->setTabText(Entrada->indexOf(tab_2), QApplication::translate("interface", "Editor", nullptr));
        Entrada->setTabText(Entrada->indexOf(tab_3), QApplication::translate("interface", "C\303\263digo Numerado", nullptr));
        saidaLexica->setHtml(QApplication::translate("interface", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:9pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial Black'; font-size:8pt;\"><br /></p></body></html>", nullptr));
        Saida_das_analises->setTabText(Saida_das_analises->indexOf(lexica), QApplication::translate("interface", "An\303\241lise L\303\251xica", nullptr));
        Saida_das_analises->setTabText(Saida_das_analises->indexOf(sintatica), QApplication::translate("interface", "An\303\241lise Sint\303\241tica", nullptr));
        Saida_das_analises->setTabText(Saida_das_analises->indexOf(tabelaIdentificador), QApplication::translate("interface", "Page", nullptr));
        automato1->setText(QString());
        automato2->setText(QString());
        automato3->setText(QString());
        automato4->setText(QString());
        automato5->setText(QString());
        automato6->setText(QString());
        automato7->setText(QString());
        automato8->setText(QString());
        automato9->setText(QString());
        automato10->setText(QString());
        automato11->setText(QString());
        automato12->setText(QString());
        automato13->setText(QString());
        automato14->setText(QString());
        automato15->setText(QString());
        Ilustraodassaidas->setTabText(Ilustraodassaidas->indexOf(automatos), QApplication::translate("interface", "Aut\303\264mato", nullptr));
        arvoreText->setText(QString());
        Ilustraodassaidas->setTabText(Ilustraodassaidas->indexOf(arvore), QApplication::translate("interface", "\303\201rvore Sint\303\241tica", nullptr));
        textGramatica->setHtml(QApplication::translate("interface", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600; text-decoration: underline; color:#00007f;\">Declara\303\247\303\265es</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; color:#000000;\">1. programa -&gt; lista-decl </span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text"
                        "-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">2. lista-decl -&gt; lista-decl decl | decl</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">3. decl -&gt; decl-const | decl-var | decl-proc | decl-func | decl-main</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">4. decl-const -&gt; CONST ID = literal ;</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">5. decl-var -&gt; VAR espec-tipo lista-var ;</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-"
                        "left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">6. espec-tipo -&gt; INT | FLOAT | CHAR | BOOL | STRING </span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">7. decl-proc -&gt; SUB espec-tipo ID ( params ) bloco END-SUB</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">8. decl-func -&gt; FUNCTION espec-tipo ID ( params ) bloco END-FUNCTION</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">9. decl-main -&gt; MAIN ( ) bloco END</span></"
                        "p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">10. params -&gt; lista-param | \316\265</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">11. lista-param -&gt; lista-param , param | param</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">12. param -&gt; VAR espec-tipo lista-var BY mode</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">13. mode -&gt; VAL"
                        "UE | REF </span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600; text-decoration: underline; color:#00007f;\">Comandos</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">14. bloco -&gt; lista-com</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">15. lista-com -&gt; comando lista-com | \316\265"
                        "</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">16. comando -&gt; cham-proc | com-atrib | com-selecao | com-repeticao | com-desvio | com-leitura | com-escrita | decl-var | decl-const</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">17. com-atrib -&gt; var = exp ;</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">18. com-selecao -&gt; IF exp THEN bloco END-IF | IF exp THEN bloco ELSE bloco END-IF</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; "
                        "-qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">19. com-repeticao -&gt; WHILE  exp DO bloco LOOP | DO bloco AS  exp  ; |  REPEAT bloco UNTIL exp ; | FOR ID = exp-soma TO exp-soma DO bloco NEXT</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">20. com-desvio -&gt; RETURN exp ; | BREAK ; | CONTINUE ;</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">21. com-leitura -&gt; SCAN ( lista-var ) ; | SCANLN ( lista-var ) ;</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25"
                        "pt;\">22. com-escrita -&gt; PRINT ( lista-exp ) ; | PRINTLN ( lista-exp ) ;</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">23. cham-proc -&gt; ID ( args ) ; </span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600; text-decoration: underline; color:#00007f;\">Express\303\265es</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family"
                        ":'MS Shell Dlg 2'; font-size:8.25pt;\">24. lista-exp  -&gt; exp , lista-exp | exp</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">25. exp -&gt; exp-soma op-relac exp-soma | exp-soma</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">26. op-relac -&gt; &lt;= | &lt; | &gt; | &gt;= | == | &lt;&gt;</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">27. exp-soma -&gt; exp-mult op-soma exp-soma | exp-mult</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; "
                        "-qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">28. op-soma -&gt; + | - | OR</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">29. exp-mult -&gt; exp-mult op-mult exp-simples | exp-simples</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">30. op-mult -&gt; * | / | DIV | MOD | AND</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">31. exp-simples -&gt; ( exp ) | var | cham-func | literal | op-unario exp</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0"
                        "px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">32. literal -&gt; NUMINT | NUMREAL | CARACTERE | STRING | valor-verdade</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">33. valor-verdade -&gt; TRUE | FALSE</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">34. cham-func -&gt; ID ( args )</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">35. args -&gt; lista-exp | \316\265</span></p>\n"
"<p align=\"jus"
                        "tify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">36. var -&gt; ID | ID [ exp-soma ]</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">37. lista-var  -&gt; var , lista-var | var</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">38. op-unario -&gt; + | - | NOT</span></p></body></html>", nullptr));
        Ilustraodassaidas->setTabText(Ilustraodassaidas->indexOf(gramatica), QApplication::translate("interface", "Gramatica D+", nullptr));
        menuNovo->setTitle(QApplication::translate("interface", "Arquivo", nullptr));
        menuEditar->setTitle(QApplication::translate("interface", "Compilar", nullptr));
        menuEditar_2->setTitle(QApplication::translate("interface", "Editar", nullptr));
        toolBar->setWindowTitle(QApplication::translate("interface", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class interface: public Ui_interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_H
