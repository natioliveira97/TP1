#ifndef PRAZO_H
#define PRAZO_H

#include <vector>
#include <algorithm>
#include <stdexcept>

/**
* @file Prazo.h
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contém a implementação da classe de domínio Prazo. Essa classe armazena o atributo prazo no formato
* inteiro.
*/

/**
* @brief Armazena um prazo.
*/
class Prazo
{
    public:
        /**
        * @brief Construtor default.
        * @details Inicializa o atributo prazo com 0.
        */
        Prazo();

        /**
        * @brief Construtor que inicializa a classe com valor prazo.
        * @details Prazos válidos: 6,12,18,24,30,36,42,48,54,60,66,72.
        * @param prazo Inteiro a ser escrito no atributo prazo.
        * @throw invalid_argument se prazo não pertence a lista de prazos válidos.
        */
        Prazo(int);

        /**
        * @brief Escreve valor no atributo prazo, se o valor for válido.
        * @details Prazos válidos: 6,12,18,24,30,36,42,48,54,60,66,72.
        * @param prazo Inteiro a ser escrito no atributo prazo.
        * @throw invalid_argument se prazo não pertence a lista de prazos válidos.
        */
        void setPrazo(int);

        /**
        * @brief Lê atributo prazo.
        * @return Retorna inteiro com valor armazenado em prazo.
        */
        int getPrazo();

    private:
        int prazo;

        /**
        * @brief Verifica se o valor passado pertence aos valores permitidos.
        * @details Prazos válidos: 6,12,18,24,30,36,42,48,54,60,66,72.
        * @param prazo Inteiro a ser validado.
        * @throw invalid_argument se prazo não pertence a lista de prazos válidos.
        */
        void valida(int);
};

#endif // PRAZO_H
