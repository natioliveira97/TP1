#include "Senha.h"

Senha::Senha()
{
    senha = "";
}


Senha::Senha(std::string senha){
    if(valida(senha)){
        this->senha = senha;
    }
}


std::string Senha::getSenha(){
    return senha;
}


bool Senha::valida(std::string senha){
    std::regex formato = std::regex("^[0-9]{6}$");  // para verificar se há seis dígitos
    std::regex invalida = std::regex("(.).*\\1.*"); // para verificar se eles se repetem

    if(!std::regex_match(senha, formato)){
        return false;
    }
    if(std::regex_search(senha, invalida)){
        return false;
    }
    return true;
}


bool Senha::setSenha(std::string senha){
    if(valida(senha)){
        this->senha = senha;
        return true;
    }
    return false;
}
