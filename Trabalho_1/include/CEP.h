#ifndef CEP_H
#define CEP_H

#include <string>

/**
* Classe de dom�nio que aramzena o CEP.
*/
class CEP
{
    public:
        /**
        * @brief Construtor.
        * Inicializa os atributos cep com valor zero e cidade como string vazia.
        */
        CEP();
        /**
        * @brief Leitura do valor armazenado em cep.
        * @return cep
        */
        int getCEP();
        /**
        * @brief Leitura da string armazenado em cidade.
        * @return cidade
        */
        std::string getCidade();
        /**
        * @brief Escrita do valor em cep, se v�lido.
        * @param cep Valor a ser escrito no atributo cep.
        * @return true Se foi poss�vel escrever no atributo.
        * @return false Se n�o foi poss�vel escrever no atributo.
        */
        bool setCEP(int);

    private:
        int cep;
        std::string cidade;
        /**
        * @brief Verifica se o cep � v�lido.
        * Verifica se o cep est� nas faixas pertencentes �s cidades poss�veis.
        * @param cep Cep a ser verificado.
        * @return true Se o valor � v�lido.
        * @return false Se o valor n�o � v�lido.
        */
        bool valida(int);
};

#endif // CEP_H
