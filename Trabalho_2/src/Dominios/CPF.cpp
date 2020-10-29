#include "Dominios/CPF.h"

CPF::CPF(){
    cpf = "";
}

CPF::CPF(std::string cpf){
    valida(cpf);
    this->cpf = cpf;
}

std::string CPF::getCPF(){
    return cpf;
}

void CPF::setCPF(std::string cpf){
    valida(cpf);
    this->cpf = cpf;

}

void CPF::valida(std::string cpf){
    std::regex formato = std::regex("^[0-9][0-9][0-9].[0-9][0-9][0-9].[0-9][0-9][0-9]-[0-9][0-9]$");

    if(!regex_match(cpf, formato)){
        throw std::invalid_argument("CPF com formato invalido. Formato deve ser XXX.XXX.XXX-XX.");
    }

    validaDigitoVerificador(cpf);
}

void CPF::validaDigitoVerificador(std::string cpf){

    int digito_verificador_1 = 0;
    int digito_verificador_2 = 0;
    int j = 0;


    /**
     * Retira pontuacao.
     */
    for (int i = 0; i < cpf.size(); i++) {
        if (ispunct(cpf[i])){
            cpf.erase(i--, 1);
        }
    }

    /**
     * Algoritmo digito_verificador_1.
     */
    for(int i = 10; i >= 2; --i){
        digito_verificador_1 += i*std::stoi(cpf.substr(j, 1));
        ++j;
    }
    digito_verificador_1 = digito_verificador_1%11;
    if (digito_verificador_1 < 2){
        digito_verificador_1 = 0;
    }
    else{
        digito_verificador_1 = 11-digito_verificador_1;
    }


    /**
     * Algoritmo digito_verificador_2.
     */
    j = 0;
    for(int i=11; i>=2; --i){
        digito_verificador_2 += i*std::stoi(cpf.substr(j, 1));
        ++j;
    }

    digito_verificador_2 = digito_verificador_2%11;
    if (digito_verificador_2 < 2){
        digito_verificador_2 = 0;
    }
    else{
        digito_verificador_2 = 11-digito_verificador_2;
    }


    /**
     * Verificacao.
     */
    if(digito_verificador_1 != std::stoi(cpf.substr(9, 1)) || digito_verificador_2 != std::stoi(cpf.substr(10, 1))){
        throw std::invalid_argument("CPF invalido.");
    }
}


