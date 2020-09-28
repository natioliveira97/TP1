#include "Data.h"

Data::Data(){
    data = "";
}

Data::Data(std::string data){
    valida(data);
    this->data = data;
}

std::string Data::getData(){
    return data;
}


void Data::setData(std::string data){
    valida(data);
    this->data = data;
}

void Data::valida(std::string data){

    std::regex formato = std::regex("^[0-3][0-9]/[0-1][0-9]/20[2-9][0-9]$");
    bool bisexto = false;
    int n_dias = 30;

    if(!regex_match(data, formato)){
        throw std::invalid_argument("Data com formato invalido. Formato deve ser DD/MM/AAAA.");
    }

    int dia = std::stoi(data.substr(0, 2));
    int mes = std::stoi(data.substr(3, 2));
    int ano = std::stoi(data.substr(6, 4));

    /**
    * Verifica ano
    */
    if(ano < 2020 || ano > 2099){
        throw std::invalid_argument("O ano deve estar entre 2020 e 2099.");
    }
    else if (ano%4 == 0){
        bisexto = true;
    }

    /**
    * Verifica mes
    */
    if(mes < 1 || mes > 12){
        throw std::invalid_argument("O mes deve estar entre 01 e 12.");
    }
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 9 || mes == 10 || mes == 12){
        n_dias = 31;
    }
    if(mes == 2){
        if(bisexto){
            n_dias = 29;
        }
        else{
            n_dias = 28;
        }
    }

    /**
    * Verifica dia
    */
    if(dia < 1 || dia > n_dias){
        throw std::invalid_argument("O dia do mes " + std::to_string(mes) + " deve estar entre 01 e " + std::to_string(n_dias) + ".");
    }
}
