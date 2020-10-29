#include "Taxa.h"

Taxa::Taxa()
{
    taxa = 0;
}


Taxa::Taxa(float taxa){
    valida(taxa);
    this->taxa = taxa;
}


float Taxa::getTaxa(){
    return taxa;
}


void Taxa::valida(float taxa){
    if(taxa<MIN_TAXA || taxa>MAX_TAXA){
        throw std::invalid_argument("Taxa invalida.");
    }
}


void Taxa::setTaxa(float taxa){
    valida(taxa);
    this->taxa = taxa;
}
