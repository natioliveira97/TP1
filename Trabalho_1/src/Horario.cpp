#include "Horario.h"

/**
* @file Horario.cpp
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*/

Horario::Horario(){
    horario = "";
}


Horario::Horario(std::string horario){
    valida(horario);
    this->horario = horario;
}


std::string Horario::getHorario(){
    return horario;
}


void Horario::valida(std::string horario){
    std::regex formato = std::regex("^1[3-7]:[0-5][0-9]$");
    if(!std::regex_match(horario, formato)){
        throw std::invalid_argument("Horario invalido.");
    }
    if(horario.substr(0, 2) == "17" && horario.substr(3, 2) != "00"){
        throw std::invalid_argument("Horario invalido.");
    }
}


void Horario::setHorario(std::string horario){
    valida(horario);
    this->horario = horario;
}
