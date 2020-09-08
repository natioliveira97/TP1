#ifndef CEP_H
#define CEP_H

#include <string>

/**
* Classe de domínio que aramzena o CEP.
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
        * @brief Escrita do valor em cep, se válido.
        * @param cep Valor a ser escrito no atributo cep.
        * @return true Se foi possível escrever no atributo.
        * @return false Se não foi possível escrever no atributo.
        */
        bool setCEP(int);

    private:
        int cep;
        std::string cidade;
        /**
        * @brief Verifica se o cep é válido.
        * Verifica se o cep está nas faixas pertencentes às cidades possíveis.
        * @param cep Cep a ser verificado.
        * @return true Se o valor é válido.
        * @return false Se o valor não é válido.
        */
        bool valida(int);
};

#endif // CEP_H
