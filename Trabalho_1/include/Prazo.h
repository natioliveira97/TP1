#ifndef PRAZO_H
#define PRAZO_H

#include <vector>

/**
* @file Prazo.h
* @author L’via Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contŽm a implementa‹o da classe de dom’nio Prazo. Essa classe armazena o atributo prazo no formato
* inteiro.
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
        * @details Prazos v‡lidos: 6,12,18,24,30,36,42,48,54,60,66,72.
        * @param prazo Inteiro a ser escrito no atributo prazo.
        * @throw invalid_argument se prazo n‹o pertence a lista de prazos v‡lidos.
        */
        Prazo(int);

        /**
        * @brief Escreve valor no atributo prazo, se o valor for v‡lido.
        * @details Prazos v‡lidos: 6,12,18,24,30,36,42,48,54,60,66,72.
        * @param prazo Inteiro a ser escrito no atributo prazo.
        * @throw invalid_argument se prazo n‹o pertence a lista de prazos v‡lidos.
        */
        void setPrazo(int);

        /**
        * @brief L atributo prazo.
        * @return Retorna inteiro com valor armazenado em prazo.
        */
        int getPrazo();

    private:
        /**
        * Prazos aceitos.
        */
        const std::vector<int> PRAZOS = {6,12,18,24,30,36,42,48,54,60,66,72};

        int prazo;

        /**
        * @brief Verifica se o valor passado pertence aos valores permitidos.
        * @details Prazos v‡lidos: 6,12,18,24,30,36,42,48,54,60,66,72.
        * @param prazo Inteiro a ser validado.
        * @throw invalid_argument se prazo n‹o pertence a lista de prazos v‡lidos.
        */
        void valida(int);
};

#endif // PRAZO_H
