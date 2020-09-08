#ifndef VALORMINIMO_H
#define VALORMINIMO_H

#include <vector>
#include <algorithm>

class ValorMinimo
{
    public:
        ValorMinimo();
        ValorMinimo(float);
        bool setValor(float);
        float getValor();

    private:
        std::vector<float> VALORES = {0.0,1.0};
        float valor;
        bool valida(float);
};

#endif // VALORMINIMO_H
