#include "Dominios/CEP.h"

/**
* CEPs válidos.
*/
const std::vector<std::array<int, 2>> INTERVALOS = {{1000000, 5999999},
                                                    {8000000, 8499999},
                                                    {20000000, 26600999},
                                                    {70000000, 70999999},
                                                    {40000000, 41999999},
                                                    {60000000, 60999999}};

/**
* Cidades correspondentes aos CEPs válidos.
*/
const std::vector<std::string> CIDADES = {"Sao Paulo",
                                          "Sao Paulo",
                                          "Rio de Janeiro",
                                          "Brasilia",
                                          "Salvador",
                                          "Fortaleza"};

CEP::CEP(){}

int CEP::getCEP(){
    return cep;
}

CEP::CEP(int cep){
    valida(cep);
    this->cep = cep;
}


std::string CEP::getCidade(){
    for(int i = 0; i < (int)INTERVALOS.size(); ++i){
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

    for(int i = 0; i < (int)INTERVALOS.size(); ++i){
        if(cep >= INTERVALOS[i][0] && cep <= INTERVALOS[i][1]){
            return;
        }
    }
    throw std::invalid_argument("CEP invalido.");
}
