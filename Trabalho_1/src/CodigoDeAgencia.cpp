#include "CodigoDeAgencia.h"

CodigoDeAgencia::CodigoDeAgencia(){
    codigo = "";
}


std::string CodigoDeAgencia::getCodigoDeAgencia(){
    return codigo;
}

bool CodigoDeAgencia::valida(std::string codigo){
    std::regex formato = std::regex("^[0-9][0-9][0-9][0-9]$");
    if(regex_match(codigo, formato) && codigo != "0000"){
          return true;
    }
    return false;
}

bool CodigoDeAgencia::setCodigoDeAgencia(std::string codigo){
    if(valida(codigo)){
        this->codigo = codigo;
        return true;
    }
    return false;

}
