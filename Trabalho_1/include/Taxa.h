#ifndef TAXA_H
#define TAXA_H

#include <stdexcept>

class Taxa
{
    public:
        Taxa();
        Taxa(int);
        void setTaxa(int);
        int getTaxa();

    private:
        static const int MIN_TAXA = 0;
        static const int MAX_TAXA = 200;
        int taxa;
        void valida(int);
};

#endif // TAXA_H
