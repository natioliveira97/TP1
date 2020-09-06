#include "Classe.h"

Classe::Classe(){
    classe = "";
}

std::string Classe::getClasse(){
    return classe;
}

bool Classe::valida(std::string classe){
    if(classe == "CDB" || classe == "LCA" || classe == "LCI" || classe == "FI" || classe == "LC"){
        return true;
    }
    return false;
}

bool Classe::setClasse(std::string classe){
    if(valida(classe)){
        this->classe = classe;
        return true;
    }
    return false;
}

