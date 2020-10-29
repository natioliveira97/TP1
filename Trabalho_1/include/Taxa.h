#ifndef TAXA_H
#define TAXA_H

#include <stdexcept>

/**
* @file Taxa.h
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contém a implementação da classe de domínio Taxa. Essa classe armazena o atributo prazo no formato
* ponto flutuante.
*/

/**
* @brief Armazena uma taxa.
*/
class Taxa
{
    public:
        /**
        * @brief Construtor default.
        * @details Inicializa o atributo taxa com 0.
        */
        Taxa();

        /**
        * @brief Construtor que inicializa a classe com valor taxa.
        * @details Para se válida, a taxa deve estar na faixa de 0 a 200 (% ao ano).
        * @param taxa Ponto flutuante a ser escrito no atributo taxa.
        * @throw invalid_argument se taxa não estiver na faixa especificada.
        */
        Taxa(float);

        /**
        * @brief Escreve valor no atributo taxa, se o valor for válido.
        * @details Para se válida, a taxa deve estar na faixa de 0 a 200 (% ao ano).
        * @param taxa Ponto flutuante a ser escrito no atributo taxa.
        * @throw invalid_argument se taxa não estiver na faixa especificada.
        */
        void setTaxa(float);

        /**
        * @brief Lê atributo taxa.
        * @return Retorna ponto flutuante com valor armazenado em taxa.
        */
        float getTaxa();

    private:
        const float MIN_TAXA = 0;
        const float MAX_TAXA = 200;
        float taxa;

        /**
        * @brief Verifica se o valor passado pertence aos valores permitidos.
        * @details Para se válida, a taxa deve estar na faixa de 0 a 200 (% ao ano).
        * @param taxa Ponto flutuante a ser validado.
        * @throw invalid_argument se taxa não estiver na faixa especificada.
        */
        void valida(float);
};

#endif // TAXA_H
