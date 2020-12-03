#include "Dominios/Classe.h"

static const std::vector<std::string> CLASSES = {"CDB", "LCA", "LCI", "FI", "LC"};

Classe::Classe(){
    classe = "";
}

Classe::Classe(std::string classe){
    valida(classe);
    this->classe = classe;
}

std::string Classe::getClasse(){
    return classe;
}

void Classe::setClasse(std::string classe){
    valida(classe);
    this->classe = classe;
}

void Classe::valida(std::string classe){
    for(int i = 0; i < (int)CLASSES.size(); ++i){
        if(classe == CLASSES[i])
            return;
    }
    throw std::invalid_argument("Classe invalida.");
}

