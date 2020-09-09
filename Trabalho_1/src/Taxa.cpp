#include "Taxa.h"

Taxa::Taxa()
{
    taxa = 0;
}


Taxa::Taxa(int taxa){
    valida(taxa);
    this->taxa = taxa;
}


int Taxa::getTaxa(){
    return taxa;
}


void Taxa::valida(int taxa){
    if(taxa<MIN_TAXA || taxa>MAX_TAXA){
        throw std::invalid_argument("Taxa invalida.");
    }
}


void Taxa::setTaxa(int taxa){
    valida(taxa);
    this->taxa = taxa;
}
