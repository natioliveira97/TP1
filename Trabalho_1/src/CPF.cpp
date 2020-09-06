#include "CPF.h"

CPF::CPF(){
    cpf = "000.000.000-00";
}

std::string CPF::getCPF(){
    return cpf;
}

bool CPF::setCPF(std::string cpf){
    if (valida(cpf)){
        this->cpf = cpf;
        return true;
    }
    return false;
}

bool CPF::validaDigitoVerificador(std::string cpf){

    int digito1 = 0;
    int digito2 = 0;
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
     * Algoritmo digito 10.
     */
    for(int i = 10; i>=2; --i){
        digito1 += i*std::stoi(cpf.substr(j, 1));
        ++j;
    }

    digito1 = digito1%11;
    if (digito1<2){
        digito1 = 0;
    }
    else{
        digito1 = 11-digito1;
    }

    /**
     * Algoritmo digito 11.
     */
    j = 0;
    for(int i=11; i>=2; --i){
        digito2 += i*std::stoi(cpf.substr(j, 1));
        ++j;
    }

    digito2 = digito2%11;
    if (digito2<2){
        digito2 = 0;
    }
    else{
        digito2 = 11-digito2;
    }


    /**
     * Verificacao.
     */
    if(digito1 == std::stoi(cpf.substr(9, 1)) && digito2 == std::stoi(cpf.substr(10, 1))){
         return true;
    }

    return false;
}

bool CPF::valida(std::string cpf){
    std::regex formato = std::regex("^[0-9][0-9][0-9].[0-9][0-9][0-9].[0-9][0-9][0-9]-[0-9][0-9]$");

    if(regex_match(cpf, formato)){
            return validaDigitoVerificador(cpf);
    }

    return false;

}


