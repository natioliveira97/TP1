#include "Taxa.h"

Taxa::Taxa()
{
    taxa = 0;
}


Taxa::Taxa(int taxa){
    if(valida(taxa)){
        this->taxa = taxa;
    }
}


int Taxa::getTaxa(){
    return taxa;
}


bool Taxa::valida(int taxa){
    if(taxa<MIN_TAXA || taxa>MAX_TAXA){
        return false;
    }
    return true;
}


bool Taxa::setTaxa(int taxa){
    if(valida(taxa)){
        this->taxa = taxa;
        return true;
    }
    return false;
}
