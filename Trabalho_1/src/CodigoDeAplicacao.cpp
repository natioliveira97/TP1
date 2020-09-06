#include "CodigoDeAplicacao.h"

CodigoDeAplicacao::CodigoDeAplicacao(){
    codigo = "";
}


std::string CodigoDeAplicacao::getCodigoDeAplicacao(){
    return codigo;
}

bool CodigoDeAplicacao::valida(std::string codigo){
    std::regex formato = std::regex("^[0-9][0-9][0-9][0-9][0-9]$");
    if(regex_match(codigo, formato) && codigo != "00000"){
          return true;
    }
    return false;
}

bool CodigoDeAplicacao::setCodigoDeAplicacao(std::string codigo){
    if(valida(codigo)){
        this->codigo = codigo;
        return true;
    }
    return false;

}
