#include "interface.h"
#include "analex.h"
#include "anasin.h"
#include "anasem.h"
#include "ui_interface.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <QQueue>
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QPixmap>
#include <sstream>
using namespace std;

static int state = 0, tamanho = 0, keySintatico = 0;
static bool automato1 = false;
static bool automato2 = false;
static bool automato3 = false;
static bool automato4 = false;
static bool automato5 = false;
static bool automato6 = false;
static bool automato7 = false;
static bool automato8 = false;
static bool automato9 = false;
static bool automato10 = false;
static bool automato11 = false;
static bool automato12 = false;
static bool automato13 = false;
static bool automato14 = false;
static bool automato15 = false;
static bool gramatica1 = false;
static bool gramatica2 = false;
static bool gramatica3 = false;
static bool gramatica4 = false;
static bool gramatica5 = false;
static bool gramatica6 = false;
static bool gramatica7 = false;
static bool gramatica8 = false;
static bool gramatica9 = false;
static bool gramatica10 = false;
static bool gramatica11 = false;
static bool gramatica12 = false;
static bool gramatica13 = false;
static bool gramatica14 = false;
static bool gramatica15 = false;
static bool gramatica16 = false;
static bool gramatica17 = false;
static bool gramatica18 = false;
static bool gramatica19 = false;
static bool gramatica20 = false;
static bool gramatica21 = false;
static bool gramatica22 = false;
static bool gramatica23 = false;
static bool gramatica24 = false;
static bool gramatica25 = false;
static bool gramatica26 = false;
static bool gramatica27 = false;
static bool gramatica28 = false;
static bool gramatica29 = false;
static bool gramatica30 = false;
static bool gramatica31 = false;
static bool gramatica32 = false;
static bool gramatica33 = false;
static bool gramatica34 = false;
static bool gramatica35 = false;
static bool gramatica36 = false;
static bool gramatica37 = false;
static bool gramatica38 = false;
static bool keySemantico = false;
static int aux = 0, auxSintatico = 0, stopBlock = 0, lineNumber = 1, nivel = 0, auxSimbolTable = 0;
static int contadorMain = 0;
static std::string erroLexico = "";
static std::string lexema, token, line, lineTextNumber, codeNumber;
static QQueue <string> queueTokenLexema;
static std::string tree = "";
static std::string treeTerminal = "";
static std::string logAnaliseSintatica = "Analise Sintática";
static std::string logAnaliseSemantica = "Analise Semântica";
static std::string tokensLexemasTable [1000][3];
static std::string simbolTable [1000][6];
static std::string gramatica = "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">"
                               "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">"
                               "p, li { white-space: pre-wrap; }"
                               "</style></head><body style=\" font-family:\'Verdana\'; font-size:10pt; font-weight:400; font-style:normal;\">"
                               "<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:12pt; font-weight:600; text-decoration: underline; color:#00007f;\">Declarações</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">1. programa -&gt; lista-decl </span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">2. lista-decl -&gt; lista-decl decl | decl</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">3. decl -&gt; decl-const | decl-var | decl-proc | decl-func | decl-main</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">4. decl-const -&gt; CONST ID = literal ;</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">5. decl-var -&gt; VAR espec-tipo lista-var ;</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">6. espec-tipo -&gt; INT | FLOAT | CHAR | BOOL | STRING </span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">7. decl-proc -&gt; SUB espec-tipo ID ( params ) bloco END-SUB</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">8. decl-func -&gt; FUNCTION espec-tipo ID ( params ) bloco END-FUNCTION</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">9. decl-main -&gt; MAIN ( ) bloco END</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">10. params -&gt; lista-param | \u03B5</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">11. lista-param -&gt; lista-param , param | param</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">12. param -&gt; VAR espec-tipo lista-var BY mode</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">13. mode -&gt; VALUE | REF </span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\"> </span></p>"
                               "<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:12pt; font-weight:600; text-decoration: underline; color:#00007f;\">Comandos</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">14. bloco -&gt; lista-com</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">15. lista-com -&gt; comando lista-com | \u03B5</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">16. comando -&gt; cham-proc | com-atrib | com-selecao | com-repeticao | com-desvio | com-leitura | com-escrita | decl-var | decl-const</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">17. com-atrib -&gt; var = exp ;</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">18. com-selecao -&gt; IF exp THEN bloco END-IF | IF exp THEN bloco ELSE bloco END-IF</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">19. com-repeticao -&gt; WHILE  exp DO bloco LOOP | DO bloco AS  exp  ; |  REPEAT bloco UNTIL exp ; | FOR ID = exp-soma TO exp-soma DO bloco NEXT</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">20. com-desvio -&gt; RETURN exp ; | BREAK ; | CONTINUE ;</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">21. com-leitura -&gt; SCAN ( lista-var ) ; | SCANLN ( lista-var ) ;</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">22. com-escrita -&gt; PRINT ( lista-exp ) ; | PRINTLN ( lista-exp ) ;</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">23. cham-proc -&gt; ID ( args ) ; </span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\"> </span></p>"
                               "<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:12pt; font-weight:600; text-decoration: underline; color:#00007f;\">Expressões</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">24. lista-exp  -&gt; exp , lista-exp | exp</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">25. exp -&gt; exp-soma op-relac exp-soma | exp-soma</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">26. op-relac -&gt; &lt;= | &lt; | &gt; | &gt;= | == | &lt;&gt;</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">27. exp-soma -&gt; exp-mult op-soma exp-soma | exp-mult</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">28. op-soma -&gt; + | - | OR</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">29. exp-mult -&gt; exp-mult op-mult exp-simples | exp-simples</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">30. op-mult -&gt; * | / | DIV | MOD | AND</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">31. exp-simples -&gt; ( exp ) | var | cham-func | literal | op-unario exp</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">32. literal -&gt; NUMINT | NUMREAL | CARACTERE | STRING | valor-verdade</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">33. valor-verdade -&gt; TRUE | FALSE</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">34. cham-func -&gt; ID ( args )</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">35. args -&gt; lista-exp | \u03B5 </span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">36. var -&gt; ID | ID [ exp-soma ]</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">37. lista-var  -&gt; var , lista-var | var</span></p>"
                               "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">38. op-unario -&gt; + | - | NOT</span></p></body></html>";

interface::interface(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::interface)
{
    ui->setupUi(this);
    QPixmap automatoState1("://automatos/stateDisabled1.png");
    ui->automato1->setPixmap(automatoState1.scaled(480,150));
    QPixmap automatoState2("://automatos/stateDisabled2.png");
    ui->automato2->setPixmap(automatoState2.scaled(480,175));
    QPixmap automatoState3("://automatos/stateDisabled3.png");
    ui->automato3->setPixmap(automatoState3.scaled(480,150));
    QPixmap automatoState4("://automatos/stateDisabled4.png");
    ui->automato4->setPixmap(automatoState4.scaled(480,150));
    QPixmap automatoState5("://automatos/stateDisabled5.png");
    ui->automato5->setPixmap(automatoState5.scaled(480,150));
    QPixmap automatoState6("://automatos/stateDisabled6.png");
    ui->automato6->setPixmap(automatoState6.scaled(480,175));
    QPixmap automatoState7("://automatos/stateDisabled7.png");
    ui->automato7->setPixmap(automatoState7.scaled(480,150));
    QPixmap automatoState8("://automatos/stateDisabled8.png");
    ui->automato8->setPixmap(automatoState8.scaled(480,150));
    QPixmap automatoState9("://automatos/stateDisabled9.png");
    ui->automato9->setPixmap(automatoState9.scaled(480,150));
    QPixmap automatoState10("://automatos/stateDisabled10.png");
    ui->automato10->setPixmap(automatoState10.scaled(480,150));
    QPixmap automatoState11("://automatos/stateDisabled11.png");
    ui->automato11->setPixmap(automatoState11.scaled(480,150));
    QPixmap automatoState12("://automatos/stateDisabled12.png");
    ui->automato12->setPixmap(automatoState12.scaled(480,150));
    QPixmap automatoState13("://automatos/stateDisabled13.png");
    ui->automato13->setPixmap(automatoState13.scaled(480,150));
    QPixmap automatoState14("://automatos/stateDisabled14.png");
    ui->automato14->setPixmap(automatoState14.scaled(480,150));
    QPixmap automatoState15("://automatos/stateDisabled15.png");
    ui->automato15->setPixmap(automatoState15.scaled(480,150));
}

interface::~interface()
{
    delete ui;
}


void interface::on_actionNovo_triggered()
{
    place_file = "";
    ui->textEdit->clear();
    ui->textEdit->setFocus();
}

void interface::on_actionAbrir_triggered()
{
    QString filtro = "Arquivos (*.dpp)";
    QString file_name = QFileDialog::getOpenFileName(this,"Abrir", QDir::homePath(),filtro);
    QFile file(file_name);
    place_file = file_name;
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "", "Arquivo não pode ser aberto");
        return;
    }
    QTextStream enter(&file);
    QString text = enter.readAll();
    ui->textEdit->setText(text);
    file.close();
}

void interface::on_actionSalvar_triggered()
{
    QString filtro = "Arquivos (*.dpp)";
    QString file_name = QFileDialog::getSaveFileName(this,"Salvar",QDir::homePath(),filtro);
    QFile file(file_name);
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, "", "Arquivo não pode ser salvo");
        return;
    }
    QTextStream exit(&file);
    QString text = ui->textEdit->toPlainText();
    exit << text;
    file.flush();
    file.close();
}

void interface::on_actionRecortar_triggered()
{
    ui->textEdit->cut();
}

void interface::on_actionCopiar_triggered()
{
    ui->textEdit->copy();
}

void interface::on_actionColar_triggered()
{
    ui->textEdit->paste();
}

void interface::on_actionDesfazer_triggered()
{
    ui->textEdit->undo();
}

void interface::on_actionRefazer_triggered()
{
    ui->textEdit->redo();
}

void interface::on_actionPlay_triggered()
{
    line = ui->textEdit->toPlainText().toStdString();
    lineTextNumber = ui->textEdit->toPlainText().toStdString();
    analiseLexica();
    std::string textAnaliseLexicaLexema = "Token\n";
    std::string textAnaliseLexicaToken = "Lexema\n";
    std::string textAnaliseSintatica = "Análise Sintática";
    std::string textAnaliseSemantica = "Análise Semântica";
    std::string textWithLineNumber = "1. ";
    std::string textSimbolNumber = "#\n";
    std::string textSimbolNome = "Nome\n";
    std::string textSimbolTipo = "Tipo\n";
    std::string textSimbolCategoria = "Categoria\n";
    std::string textSimbolNivel = "Linha\n";
    aux = 0;
    int lineNumberCode = 2;
    if(erroLexico == ""){
        while (lineTextNumber.size() > aux){
            textWithLineNumber += lineTextNumber[aux];
            if(lineTextNumber[aux] == '\n'){
                textWithLineNumber += to_string(lineNumberCode) + ". ";
                lineNumberCode++;
            }
            aux++;
        }
        aux = 0;
        while (!queueTokenLexema.empty()){
            textAnaliseLexicaLexema  += queueTokenLexema.dequeue() + "\n";
            textAnaliseLexicaToken  += queueTokenLexema.dequeue() + "\n";
        }
        textAnaliseSintatica = analiseSintatica();
        textAnaliseSintatica += "\n Log " + logAnaliseSintatica;
        gramaticaOn();
        textAnaliseSemantica = validSemantic();
        textAnaliseSemantica += "\n Log " + logAnaliseSemantica;
        QString gramaticaConvert = QString::fromStdString(gramatica);
        QString lexicoLexema = QString::fromStdString(textAnaliseLexicaLexema);
        QString lexicoToken = QString::fromStdString(textAnaliseLexicaToken);
        QString sintatico = QString::fromStdString(textAnaliseSintatica);
        QString codeNumberText = QString::fromStdString(textWithLineNumber);
        QString semantico = QString::fromStdString(textAnaliseSemantica);
        if(keySintatico == 1) tree = "Erro na Análise Sintática, impossivel gerar árvore";
        QString treeText = QString::fromStdString(tree);
        setType();
        textSimbolNumber +=  setSimbolTableNumber();
        textSimbolNome += setSimbolTableNome();
        textSimbolTipo += setSimbolTableTipo();
        textSimbolCategoria += setSimbolTableCategoria();
        textSimbolNivel += setSimbolTableNivel();
        QString simbolNumber = QString::fromStdString(textSimbolNumber);
        QString simbolNome = QString::fromStdString(textSimbolNome);
        QString simbolTipo = QString::fromStdString(textSimbolTipo);
        QString simbolCategoria = QString::fromStdString(textSimbolCategoria);
        QString simbolNivel = QString::fromStdString(textSimbolNivel);
        ui->saidaLexicaLexema->setText(lexicoLexema);
        ui->saidaLexicaToken->setText(lexicoToken);
        ui->saidaSintatica->setText(sintatico);
        ui->saidaSemantica->setText(semantico);
        ui->codeNumber->setText(codeNumberText);
        ui->textGramatica->setHtml(gramaticaConvert);
        ui->arvoreText->setText(treeText);
        ui->numero->setText(simbolNumber);
        ui->nome->setText(simbolNome);
        ui->tipo->setText(simbolTipo);
        ui->categoria->setText(simbolCategoria);
        ui->numeroLinha->setText(simbolNivel);
    }else{
        textAnaliseLexicaLexema = "Erro Lexico, CARACTER INCORRETO: " + erroLexico;
        setAutomaton();
        QString lexico = QString::fromStdString(textAnaliseLexicaLexema);
        ui->saidaLexicaLexema->setText(lexico);
        ui->saidaLexicaToken->setText(lexico);
        erroLexico = "";
    }

    logAnaliseSintatica = "Analise Sintática";
    logAnaliseSemantica = "Analise Semântica";

    if(automato1){
        QPixmap automatoState1("://automatos/state1.png");
        ui->automato1->setPixmap(automatoState1.scaled(480,150));
    }else{
        QPixmap automatoState1("://automatos/stateDisabled1.png");
        ui->automato1->setPixmap(automatoState1.scaled(480,150));
    }
    if(automato2){
        QPixmap automatoState2("://automatos/state2.png");
        ui->automato2->setPixmap(automatoState2.scaled(480,175));
    }else{
        QPixmap automatoState2("://automatos/stateDisabled2.png");
        ui->automato2->setPixmap(automatoState2.scaled(480,175));
    }
    if(automato3){
        QPixmap automatoState3("://automatos/state3.png");
        ui->automato3->setPixmap(automatoState3.scaled(480,150));
    }else{
        QPixmap automatoState3("://automatos/stateDisabled3.png");
        ui->automato3->setPixmap(automatoState3.scaled(480,150));
    }
    if(automato4){
        QPixmap automatoState4("://automatos/state4.png");
        ui->automato4->setPixmap(automatoState4.scaled(480,150));
    }else{
        QPixmap automatoState4("://automatos/stateDisabled4.png");
        ui->automato4->setPixmap(automatoState4.scaled(480,150));
    }
    if(automato5){
        QPixmap automatoState5("://automatos/state5.png");
        ui->automato5->setPixmap(automatoState5.scaled(480,150));
    }else{
        QPixmap automatoState5("://automatos/stateDisabled5.png");
        ui->automato5->setPixmap(automatoState5.scaled(480,150));
    }
    if(automato6){
        QPixmap automatoState6("://automatos/state6.png");
        ui->automato6->setPixmap(automatoState6.scaled(480,175));
    }else{
        QPixmap automatoState6("://automatos/stateDisabled6.png");
        ui->automato6->setPixmap(automatoState6.scaled(480,175));
    }
    if(automato7){
        QPixmap automatoState7("://automatos/state7.png");
        ui->automato7->setPixmap(automatoState7.scaled(480,150));
    }else{
        QPixmap automatoState7("://automatos/stateDisabled7.png");
        ui->automato7->setPixmap(automatoState7.scaled(480,150));
    }
    if(automato8){
        QPixmap automatoState8("://automatos/state8.png");
        ui->automato8->setPixmap(automatoState8.scaled(480,150));
    }else{
        QPixmap automatoState8("://automatos/stateDisabled8.png");
        ui->automato8->setPixmap(automatoState8.scaled(480,150));
    }
    if(automato9){
        QPixmap automatoState9("://automatos/state9.png");
        ui->automato9->setPixmap(automatoState9.scaled(480,150));
    }else{
        QPixmap automatoState9("://automatos/stateDisabled9.png");
        ui->automato9->setPixmap(automatoState9.scaled(480,150));
    }
    if(automato10){
        QPixmap automatoState10("://automatos/state10.png");
        ui->automato10->setPixmap(automatoState10.scaled(480,150));
    }else{
        QPixmap automatoState10("://automatos/stateDisabled10.png");
        ui->automato10->setPixmap(automatoState10.scaled(480,150));
    }
    if(automato11){
        QPixmap automatoState11("://automatos/state11.png");
        ui->automato11->setPixmap(automatoState11.scaled(480,150));
    }else{
        QPixmap automatoState11("://automatos/stateDisabled11.png");
        ui->automato11->setPixmap(automatoState11.scaled(480,150));
    }
    if(automato12){
        QPixmap automatoState12("://automatos/state12.png");
        ui->automato12->setPixmap(automatoState12.scaled(480,150));
    }else{
        QPixmap automatoState12("://automatos/stateDisabled12.png");
        ui->automato12->setPixmap(automatoState12.scaled(480,150));
    }
    if(automato13){
        QPixmap automatoState13("://automatos/state13.png");
        ui->automato13->setPixmap(automatoState13.scaled(480,150));
    }else{
        QPixmap automatoState13("://automatos/stateDisabled13.png");
        ui->automato13->setPixmap(automatoState13.scaled(480,150));
    }
    if(automato14){
        QPixmap automatoState14("://automatos/state14.png");
        ui->automato14->setPixmap(automatoState14.scaled(480,150));
    }else{
        QPixmap automatoState14("://automatos/stateDisabled14.png");
        ui->automato14->setPixmap(automatoState14.scaled(480,150));
    }
    if(automato15){
        QPixmap automatoState15("://automatos/state15.png");
        ui->automato15->setPixmap(automatoState15.scaled(480,150));
    }else{
        QPixmap automatoState15("://automatos/stateDisabled15.png");
        ui->automato15->setPixmap(automatoState15.scaled(480,150));
    }
    setAutomaton();
    limpaSintatico();
    setGramatica();
    gramaticaClear();
    clearSimbol();
}

void setAutomaton(){
    automato1 = false;
    automato2 = false;
    automato3 = false;
    automato4 = false;
    automato5 = false;
    automato6 = false;
    automato7 = false;
    automato8 = false;
    automato9 = false;
    automato10 = false;
    automato11 = false;
    automato12 = false;
    automato13 = false;
    automato14 = false;
    automato15 = false;
}

void setGramatica(){
    gramatica1 = false;
    gramatica2 = false;
    gramatica3 = false;
    gramatica4 = false;
    gramatica5 = false;
    gramatica6 = false;
    gramatica7 = false;
    gramatica8 = false;
    gramatica9 = false;
    gramatica10 = false;
    gramatica11 = false;
    gramatica12 = false;
    gramatica13 = false;
    gramatica14 = false;
    gramatica15 = false;
    gramatica16 = false;
    gramatica17 = false;
    gramatica18 = false;
    gramatica19 = false;
    gramatica20 = false;
    gramatica21 = false;
    gramatica22 = false;
    gramatica23 = false;
    gramatica24 = false;
    gramatica25 = false;
    gramatica26 = false;
    gramatica27 = false;
    gramatica28 = false;
    gramatica29 = false;
    gramatica30 = false;
    gramatica31 = false;
    gramatica32 = false;
    gramatica33 = false;
    gramatica34 = false;
    gramatica35 = false;
    gramatica36 = false;
    gramatica37 = false;
    gramatica38 = false;
}

void analiseLexica() {
    while(line.size() > aux){
        switch(state) {
            case 0:
                state00();
                break;
            case 1:
                state01();
                break;
            case 2:
                state02();
                break;
            case 3:
                state03();
                break;
            case 4:
                state04();
                break;
            case 5:
                state05();
                break;
            case 6:
                state06();
                break;
            case 7:
                state07();
                break;
            case 8:
                state08();
                break;
            case 9:
                state09();
                break;
            case 10:
                state10();
                break;
            case 11:
                state11();
                break;
            case 12:
                state12();
                break;
            case 13:
                state13();
                break;
            case 14:
                state14();
                break;
            case 15:
                state15();
                break;
            case 16:
                state16();
                break;
            case 17:
                state17();
                break;
            case 18:
                state18();
                break;
            case 19:
                state19();
                break;
            case 20:
                state20();
                break;
            default:
                state = 0;
                aux = 0;
                clearQueue();
                break;
        }
        if(erroLexico != "") return;
    }
    aux = 0;
    return;
}

void queueValue(){
    queueTokenLexema.enqueue(token);
    queueTokenLexema.enqueue(lexema);
    tokensLexemasTable [auxSintatico][0] = lexema;
    tokensLexemasTable [auxSintatico][1] = token;
    tokensLexemasTable [auxSintatico][2] = to_string(lineNumber);
    if(auxSintatico > 0){
        if(token == "IDENTIFICADOR" && validaIdentificado()){
            simbolTable[auxSimbolTable][0] = to_string(auxSimbolTable);
            simbolTable[auxSimbolTable][1] = lexema;
            if(nivel == 0) simbolTable[auxSimbolTable][4] = "GLOBAL";
            else simbolTable[auxSimbolTable][4] = "LOCAL";
            simbolTable[auxSimbolTable][5] = to_string(lineNumber);
            for(int i = auxSintatico - 1; simbolTable[auxSimbolTable][2] == ""; i--){
                if(comparType(i) && tokensLexemasTable [i][2] == simbolTable[auxSimbolTable][5]){
                    simbolTable[auxSimbolTable][2] = tokensLexemasTable [i][0];
                    simbolTable[auxSimbolTable][3] = "VARIAVEL";
                    if(tokensLexemasTable[i-1][0] == "SUB") simbolTable[auxSimbolTable][3] = "PROCEDURE";
                    if(tokensLexemasTable[i-1][0] == "FUNCTION") simbolTable[auxSimbolTable][3] = "FUNÇÃO";
                    break;
                }
                if(tokensLexemasTable[i][1] == "ID_CONST" && tokensLexemasTable [i][2] == simbolTable[auxSimbolTable][5]){
                    simbolTable[auxSimbolTable][2] = "-";
                    simbolTable[auxSimbolTable][3] = "CONSTANTE";
                    break;
                }
                if(simbolTable[auxSimbolTable][5] < tokensLexemasTable [i][2]) break;
            }
            auxSimbolTable++;
        }

    }
    auxSintatico++;
}

void clearQueue(){
    while(!queueTokenLexema.empty()){
        queueTokenLexema.dequeue();
    }
}

void clear(){
    lexema = "";
    token = "";
}

void nextChar() {
    aux++;
}

void reservWorks () {
    lexemaMaiusculo();
    int i = 0;
    for (i = 0; i < 45; i++ ){
        if (lexema == tableReservWorks[i][0]){
            token = tableReservWorks[i][1];
            return;
        }
    }
   token = "IDENTIFICADOR";
}

void lexemaMaiusculo(){
    for (int i = 0; i < lexema.length(); i++){
        lexema[i] = toupper(lexema[i]);
    }
}

bool caracterValidationFirst() {
    return (regex_match(string(1, line[aux]), regex("[a-zA-Z_]")));
}

bool caracterValidation () {
    return (regex_match(string(1, line[aux]), regex("[a-zA-Z_0-9-]")));
}

bool numberValidation(){
    return (regex_match(string(1, line[aux]), regex("[0-9]*")));
}

void validaString(){
    nextChar();
    if(line[aux] != '\u0022'){
        lexema +=line[aux];
        while(line[aux] != '\u0022'){
            nextChar();
            lexema += line[aux];
            if(line[aux] == '\0' || line[aux] == '\n'){
                erroLexico = line[aux];
                state = 200;
                nextChar();
                clear();
            }
        }
        token = "ID_STRING";
    }else{
        erroLexico = line[aux];
        state = 200;
        nextChar();
        clear();
    }
}

void validaCaracter(){
    nextChar();
    if(line[aux] != '\u0027' && line[aux+1] == '\u0027'){
        lexema += line[aux];
        nextChar();
        lexema += line[aux];
        token = "ID_CARACTER";
    }else{
        erroLexico = line[aux];
        state = 200;
        nextChar();
        clear();
    }
}

void state00(){
    lexema += line[aux];
    if (caracterValidationFirst()){
        nextChar();
        state = 1;
        return;
    }
    if (numberValidation()){
        nextChar();
        state = 2;
        return;
    }
    if(line[aux] == '\n'){
        lineNumber++;
        nextChar();
        clear();
        return;
    }
    if (line[aux] == '\0' || line[aux] == ' '){
        nextChar();
        clear();
        return;
    }
    switch (line[aux]) {
        case '(':
            state = 3;
            break;
        case ')':
            state = 4;
            break;
        case '>':
            state = 5;
            break;
        case '<':
            state = 6;
            break;
        case '=':
            state = 7;
            break;
        case '+':
            state = 8;
            break;
        case '-':
            state = 9;
            break;
        case '*':
            state = 10;
            break;
        case '/':
            state = 11;
            break;
        case ';':
            state = 12;
            break;
        case ',':
            state = 13;
            break;
        case '\t':
            clear();
            nextChar();
            break;
        case '[':
            state = 14;
            break;
        case ']':
            state = 15;
            break;
        case '\u0022':
            validaString();
            state = 0;
            queueValue();
            nextChar();
            clear();
            break;
        case '\u0027':
            validaCaracter();
            state = 0;
            queueValue();
            nextChar();
            clear();
            break;
        default:
            erroLexico = line[aux];
            state = 200;
            nextChar();
            clear();
            break;
    }
}

void state01(){
    while(caracterValidation()){
        lexema += line[aux];
        nextChar();
    }
    if(automato1 == false) automato1 = true;
    reservWorks();
    queueValue();
    clear();
    state = 0;
}

void state02(){
    automato2 = true;
    while(numberValidation()){
        lexema +=line[aux];
        nextChar();
    }
    if(line[aux] == '.'){
        lexema +=line[aux];
        nextChar();
        state = 16;
        return;
    }
    token = "NUMINT";
    queueValue();
    clear();
    state = 0;
}

void state03(){
    automato3 = true;
    lexema = "(";
    token = "ID_BRACKETRIGHT";
    queueValue();
    clear();
    nextChar();
    state = 0;
}

void state04(){
    automato4 = true;
    lexema = ")";
    token = "ID_BRACKETLEFT";
    queueValue();
    clear();
    nextChar();
    state = 0;
}

void state05(){
    automato5 = true;
    nextChar();
    if(line[aux] == '='){
        state = 17;
        return;
    }
    lexema = ">";
    token = "OPERATOR_BIGGER";
    queueValue();
    clear();
    state = 0;
}

void state06(){
    nextChar();
    switch (line[aux]) {
        case '=':
            state = 19;
            break;
        case '>':
            state = 18;
            break;
        default:
            lexema = "<";
            automato6 = true;
            token = "OPERATOR_SMALLER";
            queueValue();
            clear();
            state = 0;
            break;
    }
}

void state07(){
    automato7 = true;
    nextChar();
    if(line[aux] == '='){
        state = 20;
        return;
    }
    lexema = "=";
    token = "OPERATOR_ATRIBUT";
    queueValue();
    clear();
    state = 0;
}

void state08(){
    automato8 = true;
    lexema = "+";
    token = "OPERATOR_PLUS";
    queueValue();
    clear();
    nextChar();
    state = 0;
}

void state09(){
    automato9 = true;
    lexema = "-";
    token = "OPERATOR_SUBTRACTION";
    queueValue();
    clear();
    nextChar();
    state = 0;
}

void state10(){
    automato10 = true;
    lexema = "*";
    token = "OPERATOR_MULTIPLICATION";
    queueValue();
    clear();
    nextChar();
    state = 0;
}

void state11(){
    nextChar();
    if(line[aux] == '/'){
        nextChar();
        while(line[aux] != '\n'){
            if(line.size() < aux) return;
            nextChar();
        }
        lineNumber++;
        state = 0;
        nextChar();
    }else{
        if(line[aux] == '*'){
            nextChar();
            while(line[aux] != '*' && line[aux+1] != '/'){
                if(line[aux] == '\n') lineNumber++;
                if(line.size() < aux) return;
                nextChar();
            }
            state = 0;
            nextChar();
            nextChar();
        }else{
            automato11 = true;
            lexema = "/";
            token = "OPERATOR_DIVISION";
            queueValue();
            clear();
            state = 0;
        }
    }
}

void state12(){
    automato12 = true;
    lexema = ";";
    token = "SIGNAL_SEMICOLON";
    queueValue();
    clear();
    nextChar();
    state = 0;
}

void state13(){
    automato13 = true;
    lexema = ",";
    token = "SIGNAL_COMMA";
    queueValue();
    clear();
    nextChar();
    state = 0;
}

void state14(){
    automato14 = true;
    lexema = "[";
    token = "SIGNAL_HOOKRIGHT";
    queueValue();
    clear();
    nextChar();
    state = 0;
}

void state15(){
    automato15 = true;
    lexema = "]";
    token = "SIGNAL_HOOKLEFT";
    queueValue();
    nextChar();
    clear();
    state = 0;
}

void state16(){
    while(numberValidation()){
        lexema +=line[aux];
        nextChar();
    }
    token = "NUMREAL";
    queueValue();
    clear();
    state = 0;
}

void state17(){
    lexema = ">=";
    token = "OPERATOR_BIGGEREQUAL";
    queueValue();
    clear();
    state = 0;
}

void state18(){
    automato6 = true;
    lexema = "<>";
    token = "OPERATOR_DIFERENT";
    queueValue();
    nextChar();
    clear();
    state = 0;
}

void state19(){
    automato6 = true;
    lexema = "<=";
    token = "OPERATOR_SMALLEREQUAL";
    queueValue();
    nextChar();
    clear();
    state = 0;
}

void state20(){
    nextChar();
    lexema = "==";
    token = "OPERATOR_COMPARATION";
    queueValue();
    clear();
    state = 0;
}

void limpaSintatico(){
    while(auxSintatico > tamanho){
        tokensLexemasTable[tamanho][0] = "";
        tokensLexemasTable[tamanho][1] = "";
        tokensLexemasTable[tamanho][2] = "";
        tamanho++;
    }
    tamanho = 0;
    auxSintatico = 0;
    lineNumber = 1;
}

void gramaticaOn(){
    gramatica += "<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:12pt; font-weight:600; text-decoration: underline; color:#005500;\">Regras Utilizadas</span></p>";
    if(gramatica1)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">1. programa -&gt; lista-decl </span></p>";
    if(gramatica2)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">2. lista-decl -> lista-decl decl | decl -&gt; lista-decl </span></p>";
    if(gramatica3)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">3. decl -> decl-const | decl-var | decl-proc | decl-func | decl-main </span></p>";
    if(gramatica4)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">4. decl-const -> CONST ID = literal ;</span></p>";
    if(gramatica5)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">5. decl-var -> VAR espec-tipo lista-var ; </span></p>";
    if(gramatica6)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">6. espec-tipo -> INT | FLOAT | CHAR | BOOL | STRING </span></p>";
    if(gramatica7)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">7. decl-proc -> SUB espec-tipo ID ( params ) bloco END-SUB </span></p>";
    if(gramatica8)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">8. decl-func -> FUNCTION espec-tipo ID ( params ) bloco END-FUNCTION </span></p>";
    if(gramatica9)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">9. decl-main -> MAIN ( ) bloco END </span></p>";
    if(gramatica10)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">10. params -> lista-param | \u03B5 </span></p>";
    if(gramatica11)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">11. lista-param -> lista-param , param | param </span></p>";
    if(gramatica12)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">12. param -> VAR espec-tipo lista-var BY mode </span></p>";
    if(gramatica13)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">13. mode -> VALUE | REF </span></p>";
    if(gramatica14)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">14. bloco -> lista-com </span></p>";
    if(gramatica15)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">15. lista-com -> comando lista-com | \u03B5 </span></p>";
    if(gramatica16)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">16. comando -> cham-proc | com-atrib | com-selecao | com-repeticao | com-desvio | com-leitura | com-escrita | decl-var | decl-const </span></p>";
    if(gramatica17)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">17. com-atrib -> var = exp ; </span></p>";
    if(gramatica18)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">18. com-selecao -> IF exp THEN bloco END-IF | IF exp THEN bloco ELSE bloco END-IF</span></p>";
    if(gramatica19)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">19. com-repeticao -> WHILE  exp DO bloco LOOP | DO bloco AS  exp  ; |  REPEAT bloco UNTIL exp ; | FOR ID = exp-soma TO exp-soma DO bloco NEXT </span></p>";
    if(gramatica20)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">20. com-desvio -> RETURN exp ; | BREAK ; | CONTINUE ; </span></p>";
    if(gramatica21)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">21. com-leitura -> SCAN ( lista-var ) ; | SCANLN ( lista-var ) </span></p>";
    if(gramatica22)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">22. com-escrita -> PRINT ( lista-exp ) ; | PRINTLN ( lista-exp ) ; </span></p>";
    if(gramatica23)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">23. cham-proc -> ID ( args ) ; </span></p>";
    if(gramatica24)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">24. lista-exp  -> exp , lista-exp | exp </span></p>";
    if(gramatica25)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">25. exp -> exp-soma op-relac exp-soma | exp-soma </span></p>";
    if(gramatica26)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">26. op-relac -> <= | < | > | >= | == | <> </span></p>";
    if(gramatica27)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">27. exp-soma -> exp-mult op-soma exp-soma | exp-mult </span></p>";
    if(gramatica28)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">28. op-soma -> + | - | OR </span></p>";
    if(gramatica29)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">29. exp-mult -> exp-mult op-mult exp-simples | exp-simples </span></p>";
    if(gramatica30)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">30. op-mult -> * | / | DIV | MOD | AND </span></p>";
    if(gramatica31)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">31. exp-simples -> ( exp ) | var | cham-func | literal | op-unario exp </span></p>";
    if(gramatica32)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">32. literal -> NUMINT | NUMREAL | CARACTERE | STRING | valor-verdade </span></p>";
    if(gramatica33)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">33. valor-verdade -> TRUE | FALSE </span></p>";
    if(gramatica34)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">34. cham-func -> ID ( args ) </span></p>";
    if(gramatica35)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">35. args -> lista-exp | \u03B5 </span></p>";
    if(gramatica36)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">36. var -> ID | ID [ exp-soma ] </span></p>";
    if(gramatica37)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">37. lista-var  -> var , lista-var | var </span></p>";
    if(gramatica38)
        gramatica += "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt; font-weight:600; color:#005500;\">38. op-unario -> + | - | NOT </span></p>";
}

void gramaticaClear(){
    gramatica = "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">"
                "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">"
                "p, li { white-space: pre-wrap; }"
                "</style></head><body style=\" font-family:\'Verdana\'; font-size:10pt; font-weight:400; font-style:normal;\">"
                "<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:12pt; font-weight:600; text-decoration: underline; color:#00007f;\">Declarações</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">1. programa -&gt; lista-decl </span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">2. lista-decl -&gt; lista-decl decl | decl</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">3. decl -&gt; decl-const | decl-var | decl-proc | decl-func | decl-main</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">4. decl-const -&gt; CONST ID = literal ;</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">5. decl-var -&gt; VAR espec-tipo lista-var ;</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">6. espec-tipo -&gt; INT | FLOAT | CHAR | BOOL | STRING </span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">7. decl-proc -&gt; SUB espec-tipo ID ( params ) bloco END-SUB</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">8. decl-func -&gt; FUNCTION espec-tipo ID ( params ) bloco END-FUNCTION</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">9. decl-main -&gt; MAIN ( ) bloco END</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">10. params -&gt; lista-param | \u03B5 </span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">11. lista-param -&gt; lista-param , param | param</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">12. param -&gt; VAR espec-tipo lista-var BY mode</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">13. mode -&gt; VALUE | REF </span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\"> </span></p>"
                "<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:12pt; font-weight:600; text-decoration: underline; color:#00007f;\">Comandos</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">14. bloco -&gt; lista-com</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">15. lista-com -&gt; comando lista-com | \u03B5 </span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">16. comando -&gt; cham-proc | com-atrib | com-selecao | com-repeticao | com-desvio | com-leitura | com-escrita | decl-var | decl-const</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">17. com-atrib -&gt; var = exp ;</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">18. com-selecao -&gt; IF exp THEN bloco END-IF | IF exp THEN bloco ELSE bloco END-IF</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">19. com-repeticao -&gt; WHILE  exp DO bloco LOOP | DO bloco AS  exp  ; |  REPEAT bloco UNTIL exp ; | FOR ID = exp-soma TO exp-soma DO bloco NEXT</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">20. com-desvio -&gt; RETURN exp ; | BREAK ; | CONTINUE ;</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">21. com-leitura -&gt; SCAN ( lista-var ) ; | SCANLN ( lista-var ) ;</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">22. com-escrita -&gt; PRINT ( lista-exp ) ; | PRINTLN ( lista-exp ) ;</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">23. cham-proc -&gt; ID ( args ) ; </span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\"> </span></p>"
                "<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:12pt; font-weight:600; text-decoration: underline; color:#00007f;\">Expressões</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">24. lista-exp  -&gt; exp , lista-exp | exp</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">25. exp -&gt; exp-soma op-relac exp-soma | exp-soma</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">26. op-relac -&gt; &lt;= | &lt; | &gt; | &gt;= | == | &lt;&gt;</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">27. exp-soma -&gt; exp-mult op-soma exp-soma | exp-mult</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">28. op-soma -&gt; + | - | OR</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">29. exp-mult -&gt; exp-mult op-mult exp-simples | exp-simples</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">30. op-mult -&gt; * | / | DIV | MOD | AND</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">31. exp-simples -&gt; ( exp ) | var | cham-func | literal | op-unario exp</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">32. literal -&gt; NUMINT | NUMREAL | CARACTERE | STRING | valor-verdade</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">33. valor-verdade -&gt; TRUE | FALSE</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">34. cham-func -&gt; ID ( args )</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">35. args -&gt; lista-exp | \u03B5</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">36. var -&gt; ID | ID [ exp-soma ]</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">37. lista-var  -&gt; var , lista-var | var</span></p>"
                "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:\'MS Shell Dlg 2\'; font-size:8.25pt;\">38. op-unario -&gt; + | - | NOT</span></p></body></html>";
    nivel = 0;
    tree = "";
    keySintatico = 0;
}

void treeSintatico(){
    int i =0;
    while(i < nivel){
        tree += "\t";
        i++;
        if(i == nivel){
            tree += "|          ";
        }
    }
    if(treeTerminal == ""){
        tree += tokensLexemasTable[tamanho][0] + "\n";
    }else{
        tree += treeTerminal + "\n";
        treeTerminal = "";
    }
}

string analiseSintatica(){
    while(auxSintatico > tamanho){
        P();
        if(keySintatico == 1){
            string retorno = "Erro Sintático na linha: " + tokensLexemasTable[tamanho][2];
            if(tokensLexemasTable[tamanho][2] == "")
                retorno = "Erro Sintático na linha: " + tokensLexemasTable[tamanho-1][2];
            return retorno;
        }
        tamanho++;
    }
    return "Compilado, Sucesso na Análise Sintática";
}

bool testValue(string valueTest){
   if(tokensLexemasTable[tamanho][1] == valueTest){
       return true;
   }
   return false;
}

void P(){
    if(tree == ""){
        treeTerminal = "Programa";
        treeSintatico();
    }
    gramatica1 = true;
    LD();
}

void LD(){
    nivel++;
    treeTerminal = "lista-dec";
    treeSintatico();
    gramatica2 = true;
    D();
    if(keySintatico == 1) return;
    LDL();
    nivel--;
}

void LDL(){
    if(testValue("ID_CONST") || testValue("ID_VARIABLE") || testValue("ID_SUB") || testValue("ID_FUNCTION") || testValue("ID_MAIN")){
        nivel++;
        treeTerminal = "lista-dec-linha";
        treeSintatico();
        D();
        if(keySintatico == 1) return;
        LDL();
        nivel--;
    }
}

void D(){
    nivel++;
    treeTerminal = "decl";
    treeSintatico();
    gramatica3 = true;
    if(testValue("ID_CONST")){
        nivel++;
        treeTerminal = "decl-const";
        treeSintatico();
        nivel++;
        treeSintatico();
        tamanho++;
        DC();
        nivel -= 2;
    }else{
        if(testValue("ID_VARIABLE")){
            nivel++;
            treeTerminal = "decl-var";
            treeSintatico();
            nivel++;
            treeSintatico();
            tamanho++;
            DV();
            nivel -= 2;
        }else{
            if(testValue("ID_SUB")){
                nivel++;
                treeTerminal = "decl-proc";
                treeSintatico();
                nivel++;
                treeSintatico();
                tamanho++;
                DP();
                nivel -= 2;
            }else{
                if(testValue("ID_FUNCTION")){
                    nivel++;
                    treeTerminal = "decl-func";
                    treeSintatico();
                    nivel++;
                    treeSintatico();
                    tamanho++;
                    DF();
                    nivel -= 2;
                }else{
                    if(testValue("ID_MAIN")){
                        nivel++;
                        treeTerminal = "decl-main";
                        treeSintatico();
                        nivel++;
                        treeSintatico();
                        tamanho++;
                        DM();
                        nivel -= 2;
                    }else{
                        logAnaliseSintatica += "\nErro: Não encontrado o comando de abertura!";
                        keySintatico = 1;
                    }
                }
            }
        }
    }
    nivel--;
}

void DC(){
    gramatica4 = true;
    if(testValue("IDENTIFICADOR")){
        treeSintatico();
        tamanho++;
        if(testValue("OPERATOR_ATRIBUT")){
            treeSintatico();
            tamanho++;
            if(L()){
                tamanho++;
                if(testValue("SIGNAL_SEMICOLON")){
                    treeSintatico();
                    logAnaliseSintatica += "\n Sucesso na const :" + tokensLexemasTable[tamanho-1][0];
                }else{
                    logAnaliseSintatica += "\nErro: Erro na declaração de CONST, faltando ( ; )!";
                    keySintatico = 1;
                }
            }else{
                logAnaliseSintatica += "\nErro: Erro na declaração de CONST, não encontrado o VALOR!";
                keySintatico = 1;
            }
        }else{
            logAnaliseSintatica += "\nErro: Erro na declaração de CONST, não encontrado o caracter de atribuição ( = )!";
            keySintatico = 1;
        }
    }else{
        logAnaliseSintatica += "\nErro: Erro na declaração de CONST, não encontrado o identificador!";
        keySintatico = 1;
    }
}

void DV(){
    gramatica5 = true;
    ET();
    if(keySintatico == 1) return;
    LV();
    if(testValue("SIGNAL_SEMICOLON")){
        treeSintatico();
        logAnaliseSintatica += "\n Sucesso no VAR(S) :" + tokensLexemasTable[tamanho-1][0];
    }else{
        logAnaliseSintatica += "\nErro: Erro na declaração de VAR, faltando ( ; )!";
        keySintatico = 1;
    }
}

void DP(){
    gramatica7 = true;
    ET();
    if(keySintatico == 1) return;
    if(testValue("IDENTIFICADOR")){
        treeSintatico();
        tamanho++;
        if(testValue("ID_BRACKETRIGHT")){
            treeSintatico();
            tamanho++;
            PR();
            if(testValue("ID_BRACKETLEFT")){
                treeSintatico();
                tamanho++;
                B();
                if(testValue("ID_ENDSUB")){
                    treeSintatico();
                    if(keySintatico == 1) return;
                    logAnaliseSintatica += "\n Sucesso na Procedure";
                }else{
                    logAnaliseSintatica += "\nErro: Erro na declaração de PROCEDURE, não encontrado o END-SUB!";
                    keySintatico = 1;
                }
            }else{
                logAnaliseSintatica += "\nErro: Erro na declaração de PROCEDURE, fechamento de parênteses não encontrado!";
                keySintatico = 1;
            }
        }else{
            logAnaliseSintatica += "\nErro: Erro na declaração de PROCEDURE, abertura de parênteses não encontrado!";
            keySintatico = 1;
        }
    }else{
        logAnaliseSintatica += "\nErro: Erro na declaração de PROCEDURE, identificador não encontrado!";
        keySintatico = 1;
    }
}

void DF(){
    gramatica8 = true;
    ET();
    if(keySintatico == 1) return;
    if(testValue("IDENTIFICADOR")){
        treeSintatico();
        tamanho++;
        if(testValue("ID_BRACKETRIGHT")){
            treeSintatico();
            tamanho++;
            PR();
            if(testValue("ID_BRACKETLEFT")){
                treeSintatico();
                tamanho++;
                B();
                if(testValue("ID_ENDFUNTION")){
                    treeSintatico();
                    if(keySintatico == 1) return;
                    logAnaliseSintatica += "\n Sucesso na Função";
                }else{
                    logAnaliseSintatica += "\nErro: Erro na declaração de FUNÇÃO, não encontrado o END-FUNCTION!";
                    keySintatico = 1;
                }
            }else{
                logAnaliseSintatica += "\nErro: Erro na declaração de FUNÇÃO, fechamento de parênteses não encontrado!";
                keySintatico = 1;
            }
        }else{
            logAnaliseSintatica += "\nErro: Erro na declaração de FUNÇÃO, abertura de parênteses não encontrado!";
            keySintatico = 1;
        }
    }else{
        logAnaliseSintatica += "\nErro: Erro na declaração de FUNÇÃO, identificador não encontrado!";
        keySintatico = 1;
    }
}

void DM(){
    gramatica9 = true;
    if(testValue("ID_BRACKETRIGHT")){
        treeSintatico();
        tamanho++;
        if(testValue("ID_BRACKETLEFT")){
            treeSintatico();
            tamanho++;
            B();
            if(keySintatico == 1) return;
            if(testValue("ID_END")){
                treeSintatico();
                tamanho++;
                logAnaliseSintatica += "\n Função MAIN";
            }else{
                logAnaliseSintatica += "\nErro: Erro na declaração de MAIN, não encontrado o END!";
                keySintatico = 1;
            }
        }else{
            logAnaliseSintatica += "\nErro: Erro na declaração de MAIN, fechamento de parênteses não encontrado!";
            keySintatico = 1;
        }
    }else{
        logAnaliseSintatica += "\nErro: Erro na declaração de MAIN, abertura de parênteses não encontrado!";
        keySintatico = 1;
    }
}

void somaTree(){
    nivel++;
    treeSintatico();
    tamanho++;
    nivel--;
}

void ET(){
    treeTerminal = "espec-tipo";
    treeSintatico();
    gramatica6 = true;
    if(testValue("ID_INTEGER")){
        somaTree();
    }else{
        if(testValue("ID_FLOAT")){
            somaTree();
        }else{
            if(testValue("ID_CHAR")){
                somaTree();
            }else{
                if(testValue("ID_BOLEAN")){
                    somaTree();
                }else{
                    if(testValue("ID_STRING")){
                        somaTree();
                    }else{
                        if(testValue("ID_REAL")){
                            somaTree();
                        }else{
                            logAnaliseSintatica += "\nErro: Erro na declaração de TIPO, não reconhecido!";
                            keySintatico = 1;
                            return;
                        }
                    }
                }
            }
        }
    }
}

void LV(){
    treeTerminal = "lista-var";
    treeSintatico();
    gramatica37 = true;
    nivel++;
    VAR();
    if(testValue("SIGNAL_COMMA")){
        treeSintatico();
        tamanho++;
        nivel++;
        LV();
        nivel--;
    }
    nivel--;
}

void PR(){
    nivel++;
    treeTerminal = "params";
    treeSintatico();
    gramatica10 = true;
    if(testValue("ID_BRACKETLEFT")){
        nivel++;
        treeTerminal = "ε";
        treeSintatico();
        nivel -= 2;
        return;
    }
    LP();
    nivel--;
}

void LP(){
    nivel++;
    treeTerminal = "lista-param";
    treeSintatico();
    gramatica11 = true;
    PM();
    if(testValue("SIGNAL_COMMA")){
        treeSintatico();
        tamanho++;
        LP();
    }
    nivel--;
}

void PM(){
    nivel++;
    treeTerminal = "param";
    treeSintatico();
    gramatica12 = true;
    if(testValue("ID_VARIABLE")){
        nivel++;
        treeSintatico();
        tamanho++;
        ET();
        LV();
        if(testValue("ID_BY")){
            treeSintatico();
            tamanho++;
            M();
        }else{
            logAnaliseSintatica += "\nErro: Aguardando um BY!";
            keySintatico = 1;
        }
        nivel--;
    }else{
        logAnaliseSintatica += "\nErro: Aguardando um VAR!";
        keySintatico = 1;
    }
    nivel--;
}

void M(){
    nivel++;
    treeTerminal = "mode";
    treeSintatico();
    gramatica13 = true;
    if(testValue("ID_VALUE")){
         somaTree();
    }else{
        if(testValue("ID_REF")){
             somaTree();
        }else{
            logAnaliseSintatica += "\nErro: Esperado VALUE ou REF!";
            keySintatico = 1;
        }
    }
    nivel--;
}

void B(){
    nivel++;
    treeTerminal = "bloco";
    treeSintatico();
    gramatica14 = true;
    LC();
    nivel--;
}

void LC(){
    nivel++;
    treeTerminal = "lista-com";
    treeSintatico();
    gramatica15 = true;
    C();
    if(keySintatico == 1) return;
    if(stopBlock != 1) tamanho++;
    else stopBlock = 0;
    if(!conditionStopBloc()){
        LC();
    }
    nivel--;
}

bool conditionStopBloc(){
    for (int x = 0; x < 9; x++ ){
        if(stopBloc[x] == tokensLexemasTable[tamanho][1])
            return true;
    }
    if(tokensLexemasTable[tamanho][1] == "ID_WHILE" && tokensLexemasTable[tamanho+2][1] == "SIGNAL_SEMICOLON")
        return true;
    return false;
}

void C(){
    nivel++;
    treeTerminal = "comando";
    treeSintatico();
    if(conditionStopBloc()){
        nivel--;
        stopBlock = 1;
        return;
    }
    if(testValue("IDENTIFICADOR") && tokensLexemasTable[tamanho+1][1] == "ID_BRACKETRIGHT"){
        nivel++;
        treeTerminal = "cham-proc";
        treeSintatico();
        nivel++;
        treeSintatico();
        gramatica16 = true;
        tamanho++;
        CP();
        nivel -= 2;
    }else{
        if(testValue("IDENTIFICADOR")){
            gramatica16 = true;
            nivel++;
            treeTerminal = "com-atrib";
            treeSintatico();
            nivel++;
            VAR();
            nivel--;
            CA();
            nivel--;
        }else{
            if(testValue("ID_IF")){
                gramatica16 = true;
                nivel++;
                treeTerminal = "com-selecao";
                treeSintatico();
                nivel++;
                treeSintatico();
                nivel--;
                tamanho++;
                CS();
                nivel--;
            }else{
                if(testValue("ID_WHILE") || testValue("ID_DO") || testValue("ID_REPEAT") || testValue("ID_FOR")){
                    gramatica16 = true;
                    CR();
                }else{
                    if(testValue("ID_RETURN") || testValue("ID_BREAK") || testValue("ID_CONTINUE")){
                        gramatica16 = true;
                        CD();
                    }else{
                        if(testValue("ID_SCAN") || testValue("ID_SCANLN")){
                            gramatica16 = true;
                            CL();
                        }else{
                            if(testValue("ID_PRINT") || testValue("ID_PRINTLN")){
                                gramatica16 = true;
                                CE();
                            }else{
                                if(testValue("ID_VARIABLE")){
                                    gramatica16 = true;
                                    nivel++;
                                    treeTerminal = "decl-var";
                                    treeSintatico();
                                    nivel++;
                                    treeSintatico();
                                    tamanho++;
                                    DV();
                                    nivel -= 2;
                                }else{
                                    if(testValue("ID_CONST")){
                                        gramatica16 = true;
                                        nivel++;
                                        treeTerminal = "decl-const";
                                        treeSintatico();
                                        nivel++;
                                        treeSintatico();
                                        tamanho++;
                                        DC();
                                        nivel -= 2;
                                    }else{
                                        logAnaliseSintatica += "\nErro: Não reconhecido TOKEN dentro do Bloco, token: " + tokensLexemasTable[tamanho][1];
                                        keySintatico = 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    nivel--;
}

void CA(){
    gramatica17 = true;
    string teste = tokensLexemasTable[tamanho][0];
    if(testValue("OPERATOR_ATRIBUT")){
        treeSintatico();
        tamanho++;
        EXP();
        if(testValue("SIGNAL_SEMICOLON")){
            treeSintatico();
            logAnaliseSintatica += "\n Sucesso no comando de Atribuição";
        }else{
            logAnaliseSintatica += "\nErro: Erro no comando de Atribuição, faltando ( ; )!";
            keySintatico = 1;
        }
    }else{
        logAnaliseSintatica += "\nErro: Erro no comando de Atribuição, não encontrado o caracter de atribuição ( = )!";
        keySintatico = 1;
    }
}

void CS(){
    gramatica18 = true;
    EXP();
    if(testValue("ID_THEN")){
        treeSintatico();
        tamanho++;
        B();
        if(testValue("ID_ENDIF")){
            treeSintatico();
            logAnaliseSintatica += "\n Sucesso no comando de Seleção";
        }else{
            if(testValue("ID_ELSE")){
                treeSintatico();
                tamanho++;
                B();
                if(testValue("ID_ENDIF")){
                    treeSintatico();
                    logAnaliseSintatica += "\n Sucesso no comando de Seleção";
                }else{
                    logAnaliseSintatica += "\nErro: Erro comando de Seleção, não encontrado o END-IF!";
                    keySintatico = 1;
                }
            }else{
                logAnaliseSintatica += "\nErro: Erro comando de Seleção, não encontrado o END-IF!";
                keySintatico = 1;
            }
        }
    }else{
        logAnaliseSintatica += "\nErro: Erro comando de Seleção, não encontrado o THEN!";
        keySintatico = 1;
    }
}

void CR(){
    nivel++;
    treeTerminal = "com-repeticao";
    treeSintatico();
    gramatica19 = true;
    if(testValue("ID_WHILE")){
        nivel++;
        treeSintatico();
        tamanho++;
        EXP();
        if(testValue("ID_DO")){
            treeSintatico();
            tamanho++;
            B();
            if(testValue("ID_LOOP")){
                treeSintatico();
                logAnaliseSintatica += "\n Sucesso no comando de repetição WHILE DO";
            }else{
                logAnaliseSintatica += "\nErro: Erro no comando de repedição, não encontrado o LOOP!";
                keySintatico = 1;
            }
        }else{
            logAnaliseSintatica += "\nErro: Erro no comando de repedição, não encontrado o DO!";
            keySintatico = 1;
        }
        nivel--;
    }else{
        if(testValue("ID_DO")){
            nivel++;
            treeSintatico();
            tamanho++;
            B();
            if(testValue("ID_AS")){
                treeSintatico();
                tamanho++;
                EXP();
                if(testValue("SIGNAL_SEMICOLON")){
                    treeSintatico();
                    logAnaliseSintatica += "\n Sucesso no comando de repetição DO AS";
                }else{
                    logAnaliseSintatica += "\nErro: Erro no comando de repedição, faltando ( ; )!";
                    keySintatico = 1;
                }
            }else{
                logAnaliseSintatica += "\nErro: Erro no comando de repedição, não encontrado o AS";
                keySintatico = 1;
            }
            nivel--;
        }else{
            if(testValue("ID_REPEAT")){
                nivel++;
                treeSintatico();
                tamanho++;
                B();
                if(testValue("ID_UNTIL")){
                    treeSintatico();
                    tamanho++;
                    EXP();
                    if(testValue("SIGNAL_SEMICOLON")){
                        treeSintatico();
                        logAnaliseSintatica += "\n Sucesso no comando de repetição REPEAT UNTIL";
                    }else{
                        logAnaliseSintatica += "\nErro: Erro no comando de repedição, faltando ( ; )!";
                        keySintatico = 1;
                    }
                }else{
                    logAnaliseSintatica += "\nErro: Erro no comando de repedição, não encontrado o UNTIL!";
                    keySintatico = 1;
                }
                nivel--;
            }else{
                if(testValue("ID_FOR")){
                    nivel++;
                    treeSintatico();
                    tamanho++;
                    if(testValue("IDENTIFICADOR")){
                        treeSintatico();
                        tamanho++;
                        if(testValue("OPERATOR_ATRIBUT")){
                            treeSintatico();
                            tamanho++;
                            EXPS();
                            if(testValue("ID_TO")){
                                treeSintatico();
                                tamanho++;
                                EXPS();
                                if(testValue("ID_DO")){
                                    treeSintatico();
                                    tamanho++;
                                    B();
                                    if(testValue("ID_NEXT")){
                                        treeSintatico();
                                        logAnaliseSintatica += "\n Sucesso no comando de repetição FOR";
                                    }else{
                                        logAnaliseSintatica += "\nErro: Erro no comando de repedição, não encontrado o NEXT!";
                                        keySintatico = 1;
                                    }
                                }else{
                                    logAnaliseSintatica += "\nErro: Erro no comando de repedição, não ecnontrado o DO!";
                                    keySintatico = 1;
                                }
                            }else{
                                logAnaliseSintatica += "\nErro: Erro no comando de repedição, não encontrado o TO!";
                                keySintatico = 1;
                            }
                        }
                    }else{
                        logAnaliseSintatica += "\nErro: Erro no comando de repedição, não encontrado o identificador!";
                        keySintatico = 1;
                    }
                    nivel--;
                }else{
                    logAnaliseSintatica += "\nErro: Erro no comando de repedição";
                    keySintatico = 1;
                }
            }
        }
    }
    nivel--;
}

void CP(){
    gramatica23 = true;
    if(testValue("ID_BRACKETRIGHT")){
        treeSintatico();
        tamanho++;
        AR();
        if(testValue("ID_BRACKETLEFT")){
            treeSintatico();
            tamanho++;
            if(testValue("SIGNAL_SEMICOLON")){
                treeSintatico();
                logAnaliseSintatica += "\n Sucesso na chamada de procedure";
            }else{
                logAnaliseSintatica += "\nErro: Erro na chamada de PROCEDURE, faltando ( ; )!";
                keySintatico = 1;
            }
        }else{
            logAnaliseSintatica += "\nErro: Erro na chamada de PROCEDURE, fechamento de parênteses não encontrado!";
            keySintatico = 1;
        }
    }else{
        logAnaliseSintatica += "\nErro: Erro na chamada de PROCEDURE, abertura de parênteses não encontrado!";
        keySintatico = 1;
    }
}

void CD(){
    nivel++;
    treeTerminal = "com-selecao";
    treeSintatico();
    gramatica20 = true;
    if(testValue("ID_RETURN")){
        nivel++;
        treeSintatico();
        tamanho++;
        EXP();
        if(testValue("SIGNAL_SEMICOLON")){
            treeSintatico();
            logAnaliseSintatica += "\n Sucesso no comando de desvio";
        }else{
            logAnaliseSintatica += "\nErro: Erro comando de desvio, faltando ( ; )!";
            keySintatico = 1;
        }
        nivel--;
    }else{
        if(testValue("ID_BREAK")){
            nivel++;
            treeSintatico();
            tamanho++;
            if(testValue("SIGNAL_SEMICOLON")){
                treeSintatico();
                logAnaliseSintatica += "\n Sucesso no comando de desvio";
            }else{
                logAnaliseSintatica += "\nErro: Erro comando de desvio, faltando ( ; )!";
                keySintatico = 1;
            }
            nivel--;
        }else{
            if(testValue("ID_CONTINUE")){
                nivel++;
                treeSintatico();
                tamanho++;
                if(testValue("SIGNAL_SEMICOLON")){
                    treeSintatico();
                    logAnaliseSintatica += "\n Sucesso no comando de desvio";
                }else{
                    logAnaliseSintatica += "\nErro: Erro comando de desvio, faltando ( ; )!";
                    keySintatico = 1;
                }
                nivel--;
            }else{
                logAnaliseSintatica += "\nErro: Erro comando de desvio";
                keySintatico = 1;
            }
        }
    }
    nivel--;
}

void CL(){
    nivel++;
    treeTerminal = "com-leitura";
    treeSintatico();
    gramatica21 = true;
    if(testValue("ID_SCAN") || testValue("ID_SCANLN")){
        nivel++;
        treeSintatico();
        tamanho++;
        if(testValue("ID_BRACKETRIGHT")){
            treeSintatico();
            tamanho++;
            LV();
            if(keySintatico == 1) return;
            if(testValue("ID_BRACKETLEFT")){
                treeSintatico();
                tamanho++;
                if(testValue("SIGNAL_SEMICOLON")){
                    treeSintatico();
                    logAnaliseSintatica += "\n Sucesso no comando de leitura";
                }else{
                    logAnaliseSintatica += "\nErro: Erro comando de leitura, faltando ( ; )!";
                    keySintatico = 1;
                }
            }else{
                logAnaliseSintatica += "\nErro: Erro comando de leitura, fechamento de parênteses não encontrado!";
                keySintatico = 1;
            }
        }else{
            logAnaliseSintatica += "\nErro: Erro comando de leitura, abertura de parênteses não encontrado!";
            keySintatico = 1;
        }
        nivel--;
    }else{
        logAnaliseSintatica += "\nErro: Erro comando de leitura";
        keySintatico = 1;
    }
    nivel--;
}

void CE(){
    nivel++;
    treeTerminal = "com-escrita";
    treeSintatico();
    gramatica22 = true;
    if(testValue("ID_PRINT") || testValue("ID_PRINTLN")){
        nivel++;
        treeSintatico();
        tamanho++;
        if(testValue("ID_BRACKETRIGHT")){
            treeSintatico();
            tamanho++;
            LE();
            if(testValue("ID_BRACKETLEFT")){
                treeSintatico();
                tamanho++;
                if(testValue("SIGNAL_SEMICOLON")){
                    treeSintatico();
                    logAnaliseSintatica += "\n Sucesso no comando de escrita";
                }else{
                    logAnaliseSintatica += "\nErro: Erro comando de escrita, faltando ( ; )!";
                    keySintatico = 1;
                }
            }else{
                logAnaliseSintatica += "\nErro: Erro comando de escrita, fechamento de parênteses não encontrado!";
                keySintatico = 1;
            }
        }else{
            logAnaliseSintatica += "\nErro: Erro comando de escrita, abertura de parênteses não encontrado!";
            keySintatico = 1;
        }
        nivel--;
    }else{
        logAnaliseSintatica += "\nErro: Erro comando de escrita";
        keySintatico = 1;
    }
    nivel--;
}

void VAR(){
    treeTerminal = "var";
    treeSintatico();
    gramatica36 = true;
    if(testValue("IDENTIFICADOR")){
        nivel++;
        treeSintatico();
        tamanho++;
        if(testValue("SIGNAL_HOOKRIGHT")){
            treeSintatico();
            tamanho++;
            EXPS();
            if(testValue("SIGNAL_HOOKLEFT")){
                treeSintatico();
                tamanho++;
            }else{
                logAnaliseSintatica += "\nErro: Esperado o fechamento de colchetes!";
                keySintatico = 1;
            }
        }
        nivel--;
    }else{
        logAnaliseSintatica += "\nErro: Esperado um identificador!";
        keySintatico = 1;
    }
}

void EXP(){
    nivel++;
    treeTerminal = "exp";
    treeSintatico();
    gramatica25 = true;
    EXPS();
    if(OR()){
        nivel++;
        treeTerminal = "op-relac";
        treeSintatico();
        nivel++;
        treeSintatico();
        nivel -= 2;
        gramatica26 = true;
        tamanho++;
        EXPS();
    }
    nivel--;
}

bool OR(){
    for (int x = 0; x < 6; x++ ){
        if(operatorRelationTable[x] == tokensLexemasTable[tamanho][1])
            return true;
    }
    return false;
}

bool OS(){
    for (int x = 0; x < 3; x++ ){
        if(operatorSunTable[x] == tokensLexemasTable[tamanho][1])
            return true;
    }
    return false;
}

bool OM(){
    for (int x = 0; x < 5; x++ ){
        if(operatorMultTable[x] == tokensLexemasTable[tamanho][1])
            return true;
    }
    return false;
}

void LE(){
    nivel++;
    treeTerminal = "lista-exp";
    treeSintatico();
    gramatica24 = true;
    EXP();
    if(testValue("SIGNAL_COMMA")){
        treeSintatico();
        tamanho++;
        LE();
    }
    nivel--;
}

void EXPS(){
    nivel++;
    treeTerminal = "exp-soma";
    treeSintatico();
    gramatica27 = true;
    EXPM();
    if(OS()){
        nivel++;
        treeTerminal = "op-soma";
        treeSintatico();
        nivel++;
        treeSintatico();
        nivel -= 2;
        gramatica28 = true;
        tamanho++;
        EXPS();
    }
    nivel--;
}

void EXPM(){
    nivel++;
    treeTerminal = "exp-mult";
    treeSintatico();
    gramatica29 = true;
    EXPSP();
    if(OM()){
        nivel++;
        treeTerminal = "op-mult";
        treeSintatico();
        nivel++;
        treeSintatico();
        nivel -= 2;
        gramatica30 = true;
        tamanho++;
        EXPSP();
    }
    nivel--;
}

void EXPSP(){
    nivel++;
    treeTerminal = "exp-simples";
    treeSintatico();
    gramatica31 = true;
    if(testValue("ID_BRACKETRIGHT")){
        nivel++;
        treeSintatico();
        tamanho++;
        EXP();
        if(testValue("ID_BRACKETLEFT")){
            treeSintatico();
            tamanho++;
            logAnaliseSintatica += "\n Sucesso na expreção (EXP)";
        }else{
            logAnaliseSintatica += "\nErro: Erro comando de EXPREÇÃO, fechamento de parênteses não encontrado!";
            keySintatico = 1;
        }
        nivel--;
    }else{
        if(testValue("IDENTIFICADOR") && tokensLexemasTable[tamanho+1][1] != "ID_BRACKETRIGHT"){
            nivel++;
            VAR();
            nivel--;
        }else{
            if(testValue("IDENTIFICADOR")){
                nivel++;
                treeTerminal = "cham-func";
                treeSintatico();
                nivel++;
                treeSintatico();
                tamanho++;
                CF();
                nivel -=2;
            }else{
                if(L()){
                    gramatica32 = true;
                    tamanho++;
                }else{
                    if(OU()){
                        nivel++;
                        treeTerminal = "op-unario";
                        treeSintatico();
                        nivel++;
                        treeSintatico();
                        nivel -= 2;
                        gramatica38 = true;
                        tamanho++;
                        EXP();
                    }else{
                        logAnaliseSintatica += "\nErro: Erro comando de EXPREÇÃO";
                        keySintatico = 1;
                    }
                }
            }
        }
    }
    nivel--;
}

void CF(){
    gramatica34 = true;
    if(testValue("ID_BRACKETRIGHT")){
        treeSintatico();
        tamanho++;
        AR();
        if(testValue("ID_BRACKETLEFT")){
            treeSintatico();
            tamanho++;
        }else{
            logAnaliseSintatica += "\nErro: Erro na chamada de FUNÇÃO, fechamento de parênteses não encontrado!";
            keySintatico = 1;
        }
    }else{
        logAnaliseSintatica += "\nErro: Erro na chamada de FUNÇÃO, abertura de parênteses não encontrado!";
        keySintatico = 1;
    }
}

bool L(){
    for (int x = 0; x < 4; x++ ){
        if(typeValue[x] == tokensLexemasTable[tamanho][1])
            nivel++;
            treeTerminal = "literal";
            treeSintatico();
            nivel++;
            treeSintatico();
            nivel -= 2;
            return true;
    }
    if(VV()){
        nivel++;
        treeTerminal = "literal";
        treeSintatico();
        nivel++;
        treeTerminal = "valor-verdade";
        treeSintatico();
        nivel++;
        treeSintatico();
        gramatica33 = true;
        nivel -= 3;
        return true;
    }
    return false;
}

bool VV(){
    if(testValue("TRUE") || testValue("FALSE")) return true;
    return false;
}

bool OU(){
    for (int x = 0; x < 3; x++ ){
        if(operatorUnari[x] == tokensLexemasTable[tamanho][1])
            return true;
    }
    return false;
}

void AR(){
    nivel++;
    treeTerminal = "args";
    treeSintatico();
    gramatica35 = true;
    if(testValue("ID_BRACKETLEFT")){
        nivel++;
        treeTerminal = "ε";
        treeSintatico();
        nivel -= 2;
        return;
    }
    LE();
    nivel--;
}

string setSimbolTableNumber(){
    string text = "";
    for (int i = 0; simbolTable[i][0] != ""; i++){
        text += simbolTable[i][0] + "\n";
    }
    return text;
}

string setSimbolTableNome(){
    string text = "";
    for (int i = 0; simbolTable[i][0] != ""; i++){
        text += simbolTable[i][1] + "\n";
    }
    return text;
}

string setSimbolTableTipo(){
    string text = "";
    for (int i = 0; simbolTable[i][0] != ""; i++){
        text += simbolTable[i][2] + "\n";
    }
    return text;
}

string setSimbolTableCategoria(){
    string text = "";
    for (int i = 0; simbolTable[i][0] != ""; i++){
        text += simbolTable[i][3] + "\n";
    }
    return text;
}

string setSimbolTableNivel(){
    string text = "";
    for (int i = 0; simbolTable[i][0] != ""; i++){
        text += simbolTable[i][5] + "\n";
    }
    return text;
}

void clearSimbol(){
    for (int i = 0; simbolTable[i][0] != ""; i++){
        simbolTable[i][0] = "";
        simbolTable[i][1] = "";
        simbolTable[i][2] = "";
    }
    auxSimbolTable = 0;
}

bool comparType(int x){
    for(int i =0; i < 6; i++){
        if(typeID[i] == tokensLexemasTable[x][1]){
            return true;
        }
    }
    return false;
}

void setType(){
    tamanho = 0;
    int x = 0;
    while(simbolTable[x][0] != ""){
        if(simbolTable[x][2] == "CONST"){
            while(auxSintatico > tamanho){
                if(tokensLexemasTable[tamanho][0] == "CONST" && tokensLexemasTable[tamanho][2] == simbolTable[x][4]){
                    tamanho += 3;
                    if(testValue("NUMINT")){
                        simbolTable[x][2] = "INT";
                    }else{
                        if(testValue("NUMREAL")){
                            simbolTable[x][2] = "FLOAT";
                        }else{
                            if(testValue("CARACTER")){
                                simbolTable[x][2] = "CHAR";
                            }else{
                                if(testValue("STRING")){
                                    simbolTable[x][2] = "STRING";
                                }else{
                                    if(testValue("TRUE") || testValue("FALSE") || testValue("BOOL")){
                                        simbolTable[x][2] = "BOOL";
                                    }
                                }
                            }
                        }
                    }
                }
                tamanho++;
            }
            tamanho = 0;
        }
        x++;
    }
}

bool validaIdentificado(){
    if(tokensLexemasTable [auxSintatico-1][0] == "CONST" || tokensLexemasTable[auxSintatico-2][0] == "VAR" || tokensLexemasTable[auxSintatico-2][0] == "SUB" || tokensLexemasTable[auxSintatico-2][0] == "FUNCTION")
        return true;
    int i = 0;
    while(simbolTable[auxSimbolTable][5] == tokensLexemasTable[auxSintatico - i][2]){
        if(tokensLexemasTable [auxSintatico - i][0] == "VAR"){
            return true;
        }
        i++;
    }
    return false;
}

string validSemantic(){
    tamanho = 0;
    contadorMain = 0;
    keySemantico = false;
    while(auxSintatico > tamanho){
        if(tokensLexemasTable[tamanho][0] == "MAIN"){
            contadorMain++;
        }
        if(tokensLexemasTable[tamanho][1] == "IDENTIFICADOR"){
            validaDeclaIdentificador(tokensLexemasTable[tamanho][0], tokensLexemasTable[tamanho][2]);
        }
        tamanho++;
    }
    validaRepeticaoMain();
    validaRepeticaoIdentificador();
    if(!keySemantico) return "Compilado, Sucesso na Análise Sêmantica";
    return "Erro Sêmantico";
}

void validaRepeticaoMain(){
    if(contadorMain ==1){
        return;
    }
    if(contadorMain > 1) logAnaliseSemantica += "\n MAIN declarado mais de uma vez";
    else logAnaliseSemantica += "\n MAIN não declarado";
    keySemantico = true;
}

void validaRepeticaoIdentificador(){
    tamanho = 0;
    int tamanho2 = 0;
    string identificador = "";
    while(auxSimbolTable > tamanho){
        tamanho2 = tamanho;
        identificador = simbolTable[tamanho][1];
        while(tamanho2 < auxSintatico){
            tamanho2++;
            if(identificador == simbolTable[tamanho2][1]){
                keySemantico = true;
                logAnaliseSemantica += "\n Identificador declarado MAIS DE UMA vez : " + identificador;
            }
        }
        tamanho++;
    }
}

void validaDeclaIdentificador(string identificador, string number){
    int aux = 0, numberSimbol = 0, numberIden = 0;
    while(auxSimbolTable > aux){
        stringstream a(simbolTable[aux][5]);
        a >> numberSimbol;
        stringstream b(number);
        b >> numberIden;
        if(simbolTable[aux][1] == identificador && numberSimbol <= numberIden){
            return;
        }
        aux++;
    }

    logAnaliseSemantica += "\n Identificador não declarado ou utilizado antes de declara-lo : " + identificador + " linha :" + number;
    keySintatico = true;
}
