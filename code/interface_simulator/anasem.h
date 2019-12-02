#ifndef ANASEM_H
#define ANASEM_H

#endif // ANASEM_H

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <regex>
#include <string>

using namespace std;

string setSimbolTableNumber();
string setSimbolTableNome();
string setSimbolTableTipo();
string setSimbolTableCategoria();
string setSimbolTableNivel();
string validSemantic();
bool validaIdentificado();
void clearSimbol();
const string typeID [6] ={
    "ID_INTEGER",
    "ID_FLOAT",
    "ID_CHAR",
    "ID_BOLEAN",
    "ID_STRING",
    "ID_REAL"
};
bool comparType(int x);
void setType();
void validaRepeticaoMain();
void validaRepeticaoIdentificador();
void validaDeclaIdentificador(string identificador, string number);
