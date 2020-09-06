#include "Data.h"

Data::Data(){
    mes = 1;
    dia = 1;
    ano = 2020;

}

std::string Data::getData(){
    return data;
}

bool Data::valida(std::string data){

    std::regex formato = std::regex("^[0-3][0-9]/[0-1][0-9]/20[2-9][0-9]$");
    bool bisexto = false;
    int n_dias = 30;

    if(regex_match(data, formato)){

        int dia = std::stoi(data.substr(0, 2));
        int mes = std::stoi(data.substr(3, 2));
        int ano = std::stoi(data.substr(6, 4));

        /**
        * Verifica ano
        */
        if(ano < 2020 || ano > 2099){
            return false;
        }
        else if (ano%4 == 0){
            bisexto = true;
        }

        /**
        * Verifica mes
        */
        if(mes < 1 || mes > 12){
            return false;
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
            return false;
        }


        this->dia = dia;
        this->mes = mes;
        this->ano = ano;
        return true;

    }
    return false;
}


bool Data::setData(std::string data){
    if (valida(data)){
        this->data = data;
        return true;
    }
    return false;
}
