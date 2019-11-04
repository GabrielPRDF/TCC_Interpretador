#ifndef ANASIN_H
#define ANASIN_H

#endif // ANASIN_H

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <regex>
#include <string>

using namespace std;

string analiseSintatica();
void limpaSintatico();
bool testValue(string valueTest);
void gramaticaOn();
void setGramatica();
void gramaticaClear();
void P();
void LD();
void LDL();
void D();
void DC();
void DV();
void DP();
void DF();
void DM();
void PR();
void LP();
void PM();
void somaTree();
void ET();
void LV();
void M();
void B();
void LC();
void C();
void CP();
void CA();
void CS();
void CR();
void CD();
void CL();
void CE();
void EXP();
void EXPS();
void AR();
void LE();
void VAR();
void EXPM();
void EXPSP();
void treeSintatico();
void CF();
bool VV();
bool OU();
bool OM();
bool OR();
bool OS();
bool L();
bool conditionStopBloc();
const string stopBloc [9] {
    "ID_END",
    "ID_ENDSUB",
    "ID_ENDFUNTION",
    "ID_ENDIF",
    "ID_ELSE",
    "ID_LOOP",
    "ID_UNTIL",
    "ID_NEXT",
    "ID_AS"
};
const string operatorRelationTable [6] = {
    "OPERATOR_SMALLEREQUAL",
    "OPERATOR_SMALLER",
    "OPERATOR_BIGGER",
    "OPERATOR_BIGGEREQUAL",
    "OPERATOR_COMPARATION",
    "OPERATOR_DIFERENT"
};
const string operatorSunTable[3] = {
    "OPERATOR_PLUS",
    "OPERATOR_SUBTRACTION",
    "OPERATOR_OR"
};
const string operatorMultTable[5] = {
    "OPERATOR_MULTIPLICATION",
    "OPERATOR_DIVISION",
    "OPERATOR_DIVISIONTWO",
    "OPERATOR_MOD",
    "OPERATOR_AND"
};
const string typeValue[4] = {
    "NUMINT",
    "NUMREAL",
    "CARACTER",
    "STRING"
};
const string operatorUnari[3] = {
    "OPERATOR_PLUS",
    "OPERATOR_SUBTRACTION",
    "OPERATOR_NOT"
};
