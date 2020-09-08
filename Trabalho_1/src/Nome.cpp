#include "Nome.h"

Nome::Nome()
{
    nome = "";
}


Nome::Nome(std::string nome){
    if(valida(nome)){
        this->nome = nome;
    }
}


std::string Nome::getNome(){
    return nome;
}


bool Nome::valida(std::string nome){
    if(nome.length()<MIN_CARACTERE || nome.length()>MAX_CARACTERE){
        return false;
    }

    // Perguntar se o nome como um todo tem pelo menos cinco letras ou o primeiro nome
    std::regex formato = std::regex("^[ ]?([[:upper:]][[:alpha:]]{4,}[ ]?)([[:upper:]][[:alpha:]]*[ ]?)*$");
    if(std::regex_match(nome, formato)){
        return true;
    }
    return false;
}


bool Nome::setNome(std::string nome){
    if(valida(nome)){
        this->nome = nome;
        return true;
    }
    return false;
}
