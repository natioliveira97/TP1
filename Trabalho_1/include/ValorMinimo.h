#ifndef VALORMINIMO_H
#define VALORMINIMO_H

#include <vector>
#include <algorithm>
#include <stdexcept>

class ValorMinimo
{
    public:
        ValorMinimo();
        ValorMinimo(float);
        void setValor(float);
        float getValor();

    private:
        std::vector<float> VALORES = {1000.0,5000.0,10000.0,50000.0};
        float valor;
        void valida(float);
};

#endif // VALORMINIMO_H
