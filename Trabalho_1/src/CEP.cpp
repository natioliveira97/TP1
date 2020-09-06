#include "CEP.h"

CEP::CEP(){
    cep = 0;
    cidade = "";
}

int CEP::getCEP(){
    return cep;
}

std::string CEP::getCidade(){
    return cidade;
}


bool CEP::valida(int cep){

    if((cep >= 1000000 && cep <= 5999999) || (cep >= 8000000 && cep <= 8499999)){
        cidade = "Sao Paulo";
    }
    else if((cep >= 20000000 && cep <= 26600999)){
        cidade = "Rio de Janeiro";
    }
    else if((cep >= 70000000 && cep <= 70999999)){
        cidade = "Brasilia";
    }
    else if((cep >= 40000000 && cep <= 41999999)){
        cidade = "Salvador";
    }
    else if((cep >= 60000000 && cep <= 60999999)){
        cidade = "Fortaleza";
    }
    else{
        return false;
    }
    return true;
}


bool CEP::setCEP(int cep){
    if(valida(cep)){
        this->cep = cep;
        return true;
    }
    return false;
}
