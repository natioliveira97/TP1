#ifndef PRAZO_H
#define PRAZO_H

#include <vector>
#include <algorithm>
#include <stdexcept>

class Prazo
{
    public:
        Prazo();
        Prazo(int);
        void setPrazo(int);
        int getPrazo();

    private:
        std::vector<int> PRAZOS = {6,12,18,24,30,36,42,48,54,60,66,72};
        int prazo;
        void valida(int);
};

#endif // PRAZO_H
