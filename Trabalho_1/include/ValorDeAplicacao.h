#ifndef VALORDEAPLICACAO_H
#define VALORDEAPLICACAO_H


class ValorDeAplicacao
{
    public:
        ValorDeAplicacao();
        ValorDeAplicacao(float);
        bool setValor(float);
        float getValor();

    private:
        float MIN_VALOR = 0.0;
        float MAX_VALOR = 1000000.0;
        float valor;
        bool valida(float);
};

#endif // VALORDEAPLICACAO_H
