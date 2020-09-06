#include "CodigoDeProduto.h"

CodigoDeProduto::CodigoDeProduto(){
    codigo = "";
}


std::string CodigoDeProduto::getCodigoDeProduto(){
    return codigo;
}

bool CodigoDeProduto::valida(std::string codigo){
    std::regex formato = std::regex("^[0-9][0-9][0-9]$");
    if(regex_match(codigo, formato) && codigo != "000"){
          return true ;
    }
    return false;
}

bool CodigoDeProduto::setCodigoDeProduto(std::string codigo){
    if(valida(codigo)){
        this->codigo = codigo;
        return true;
    }
    return false;

}
