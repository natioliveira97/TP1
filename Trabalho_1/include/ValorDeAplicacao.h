#ifndef VALORDEAPLICACAO_H
#define VALORDEAPLICACAO_H

#include <stdexcept>

class ValorDeAplicacao
{
    public:
        ValorDeAplicacao();
        ValorDeAplicacao(float);
        void setValor(float);
        float getValor();

    private:
        float MIN_VALOR = 0.0;
        float MAX_VALOR = 1000000.0;
        float valor;
        void valida(float);
};

#endif // VALORDEAPLICACAO_H
