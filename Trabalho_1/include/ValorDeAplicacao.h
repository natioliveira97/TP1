#ifndef VALORDEAPLICACAO_H
#define VALORDEAPLICACAO_H

#include <stdexcept>

/**
* @file ValorDeAplicacao.h
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contém a implementação da classe de domínio ValorDeAplicacao. Essa classe armazena o atributo valor no formato
* ponto flutuante.
*/
class ValorDeAplicacao
{
    public:
        /**
        * @brief Construtor default.
        * @details Inicializa o atributo valor com 0.
        */
        ValorDeAplicacao();

        /**
        * @brief Construtor que inicializa a classe com valor.
        * @details Para ser válido o valor passado de estar na faixa de 0 a 1.000.000,00 (reais).
        * @param valor Ponto flutuante a ser escrito no atributo valor.
        * @throw invalid_argument se valor passado não estiver na faixa permitida.
        */
        ValorDeAplicacao(float);

        /**
        * @brief Escreve valor no atributo, se for válido.
        * @details Para ser válido o valor passado de estar na faixa de 0 a 1.000.000,00 (reais).
        * @param valor Ponto flutuante a ser escrito no atributo valor.
        * @throw invalid_argument se valor passado não estiver na faixa permitida.
        */
        void setValorDeAplicacao(float);

        /**
        * @brief Lê atributo valor.
        * @return Retorna ponto flutuante com valor armazenado.
        */
        float getValorDeAplicacao();

    private:
        float MIN_VALOR = 0.0;
        float MAX_VALOR = 1000000.0;
        float valor;

        /**
        * @brief Verifica se o valor passado está dentro da faixa especificada.
        * @details Para ser válido o valor passado de estar na faixa de 0 a 1.000.000,00 (reais).
        * @param valor Ponto flutuante a ser validado.
        * @throw invalid_argument se valor passado não estiver na faixa permitida.
        */
        void valida(float);
};

#endif // VALORDEAPLICACAO_H
