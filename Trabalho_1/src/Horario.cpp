#include "Horario.h"

Horario::Horario()
{
    horario = "00:00";
}


Horario::Horario(std::string horario){
    if(valida(horario)){
        this->horario = horario;
    }
}


std::string Horario::getHorario(){
    return horario;
}


bool Horario::valida(std::string horario){
    std::regex formato = std::regex("^1[3-7]:[0-5][0-9]$");
    if(std::regex_match(horario, formato)){
        return true;
    }
    return false;
}


bool Horario::setHorario(std::string horario){
    if(valida(horario)){
        this->horario = horario;
        return true;
    }
    return false;
}