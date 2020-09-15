#include "Senha.h"

Senha::Senha()
{
    senha = "";
}


Senha::Senha(std::string senha){
    valida(senha);
    this->senha = senha;
}


std::string Senha::getSenha(){
    return senha;
}


void Senha::valida(std::string senha){
    std::regex formato = std::regex("^[0-9]{6}$");  // para verificar se h� seis d�gitos
    std::regex invalida = std::regex("(.).*\\1.*"); // para verificar se os d�gitos se repetem

    if(!std::regex_match(senha, formato)){
        throw std::invalid_argument("Senha nao possui seis digitos.");
    }
    if(std::regex_search(senha, invalida)){
        throw std::invalid_argument("Senha possui digitos repetidos.");
    }
}


void Senha::setSenha(std::string senha){
    valida(senha);
    this->senha = senha;
}