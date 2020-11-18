#include "Dominios/Taxa.h"

const float MIN_TAXA = 0;
const float MAX_TAXA = 200;

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
