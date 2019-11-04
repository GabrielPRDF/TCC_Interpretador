#ifndef ANALEX_H
#define ANALEX_H

#endif // ANALEX_H

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <regex>
#include <string>

using namespace std;

// Funcoes
bool caracterValidation();
bool caracterValidationFirst();
bool numberValidation();
void lexemaMaiusculo();
void setAutomaton();
void analiseLexica();
void nextChar();
void clear();
void clearQueue();
void printValue();
void validaString();
void validaCaracter();
void state00();
void state01();
void state02();
void state03();
void state04();
void state05();
void state06();
void state07();
void state08();
void state09();
void state10();
void state11();
void state12();
void state13();
void state14();
void state15();
void state16();
void state17();
void state18();
void state19();
void state20();
const string tableReservWorks [45][2] = {
        {"MAIN", "ID_MAIN"},
        {"END", "ID_END"},
        {"VAR", "ID_VARIABLE"},
        {"INT", "ID_INTEGER"},
        {"REAL", "ID_REAL"},
        {"CHAR", "ID_CHAR"},
        {"SCAN", "ID_SCAN"},
        {"SCANLN", "ID_SCANLN"},
        {"PRINT", "ID_PRINT"},
        {"PRINTLN", "ID_PRINTLN"},
        {"IF", "ID_IF"},
        {"THEN", "ID_THEN"},
        {"END-IF", "ID_ENDIF"},
        {"ELSE", "ID_ELSE"},
        {"WHILE", "ID_WHILE"},
        {"DO", "ID_DO"},
        {"LOOP", "ID_LOOP"},
        {"DIV", "OPERATOR_DIVISIONTWO"},
        {"MOD", "OPERATOR_MOD"},
        {"STRING", "ID_STRING"},
        {"CONST", "ID_CONST"},
        {"FLOAT", "ID_FLOAT"},
        {"BOOL", "ID_BOLEAN"},
        {"STRING", "ID_STRING"},
        {"SUB", "ID_SUB"},
        {"END-SUB", "ID_ENDSUB"},
        {"FUNCTION", "ID_FUNCTION"},
        {"END-FUNCTION", "ID_ENDFUNTION"},
        {"BY", "ID_BY"},
        {"VALUE", "ID_VALUE"},
        {"REF", "ID_REF"},
        {"REPEAT", "ID_REPEAT"},
        {"UNTIL", "ID_UNTIL"},
        {"FOR","ID_FOR"},
        {"TO", "ID_TO"},
        {"NEXT", "ID_NEXT"},
        {"RETURN", "ID_RETURN"},
        {"BREAK", "ID_BREAK"},
        {"CONTINUE", "ID_CONTINUE"},
        {"OR", "OPERATOR_OR"},
        {"AND", "OPERATOR_AND"},
        {"TRUE", "TRUE"},
        {"FALSE", "FALSE"},
        {"NOT", "OPERATOR_NOT"},
        {"AS", "ID_AS"}
    };

