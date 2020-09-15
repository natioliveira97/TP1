#include "CEP.h"

CEP::CEP(){}

int CEP::getCEP(){
    return cep;
}

std::string CEP::getCidade(){
    for(int i = 0; i < INTERVALOS.size(); ++i){
        if(cep >= INTERVALOS[i][0] && cep <= INTERVALOS[i][1]){
            return CIDADES[i];
        }
    }
    return "";
}


void CEP::setCEP(int cep){
    valida(cep);
    this->cep = cep;
}

void CEP::valida(int cep){

    for(int i = 0; i < INTERVALOS.size(); ++i){
        if(cep >= INTERVALOS[i][0] && cep <= INTERVALOS[i][1]){
            return;
        }
    }
    throw std::invalid_argument("CEP fora de intervalo aceito.");
}
