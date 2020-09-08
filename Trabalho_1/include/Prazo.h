#ifndef PRAZO_H
#define PRAZO_H

#include <vector>
#include <algorithm>

class Prazo
{
    public:
        Prazo();
        Prazo(int);
        bool setPrazo(int);
        int getPrazo();

    private:
        std::vector<int> PRAZOS = {6,12,18,24,30,36,42,48,54,60,66,72};
        int prazo;
        bool valida(int);
};

#endif // PRAZO_H
