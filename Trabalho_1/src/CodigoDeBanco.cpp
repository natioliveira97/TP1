#include "CodigoDeBanco.h"

CodigoDeBanco::CodigoDeBanco(){
    codigo = "";
}


std::string CodigoDeBanco::getCodigoDeBanco(){
    return codigo;
}

bool CodigoDeBanco::valida(std::string codigo){
    if(codigo == "341"){
        banco = "Banco Itau Unibanco";
    }
    else if(codigo == "001"){
        banco = "Banco do Brasil";
    }
    else if(codigo == "237"){
        banco = "Banco Bradesco";
    }
    else if(codigo == "104"){
        banco = "Caixa Economica Federal";
    }
    else if(codigo == "033"){
        banco = "Banco Santander";
    }
    else{
        return false;
    }

    return true;
}

bool CodigoDeBanco::setCodigoDeBanco(std::string codigo){
    if(valida(codigo)){
        this->codigo = codigo;
        return true;
    }
    return false;

}
