#ifndef VALORMINIMO_H
#define VALORMINIMO_H

#include <vector>
#include <algorithm>
#include <stdexcept>

/**
* @file ValorDeAplicacao.h
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contém a implementação da classe de domínio ValorMinimo. Essa classe armazena o atributo valor no formato
* ponto flutuante.
*/

/**
* @brief Armazena um valor mínimo de aplicação.
*/
class ValorMinimo
{
    public:
        /**
        * @brief Construtor default.
        * @details Inicializa o atributo valor com 0.
        */
        ValorMinimo();

        /**
        * @brief Construtor que inicializa a classe com valor.
        * @details Para ser válido o valor passado de ser 1.000,00, 5.000,00, 10.000 ou 50.000,00 (reais).
        * @param valor Ponto flutuante a ser escrito no atributo valor.
        * @throw invalid_argument se valor passado não for um dos valores especificados.
        */
        ValorMinimo(float);

        /**
        * @brief Escreve valor no atributo, se o valor for válido.
        * @details Para ser válido o valor passado de ser 1.000,00, 5.000,00, 10.000 ou 50.000,00 (reais).
        * @param valor Ponto flutuante a ser escrito no atributo valor.
        * @throw invalid_argument se valor passado não for um dos valores especificados.
        */
        void setValorMinimo(float);

        /**
        * @brief Lê atributo valor.
        * @return Retorna ponto flutuante com valor armazenado.
        */
        float getValorMinimo();

    private:
        std::vector<float> VALORES = {1000.0,5000.0,10000.0,50000.0};
        float valor;

        /**
        * @brief Verifica se o valor passado é um valor permitido.
        * @details Para ser válido o valor passado de ser 1.000,00, 5.000,00, 10.000 ou 50.000,00 (reais).
        * @param valor Ponto flutuante a ser validado.
        * @throw invalid_argument se valor passado não for um dos valores especificados.
        */
        void valida(float);
};

#endif // VALORMINIMO_H
