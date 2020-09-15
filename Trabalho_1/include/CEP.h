#ifndef CEP_H
#define CEP_H

#include <string>
#include <array>
#include <vector>

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
        void setCEP(int);

    private:
        int cep;

        const std::vector<std::array<int, 2>> INTERVALOS = {{1000000, 5999999},
                                                            {8000000, 8499999},
                                                            {20000000, 26600999},
                                                            {70000000, 70999999},
                                                            {40000000, 41999999},
                                                            {60000000, 60999999}};


        const std::vector<std::string> CIDADES = {"Sao Paulo",
                                                  "Sao Paulo",
                                                  "Rio de Janeiro",
                                                  "Brasilia",
                                                  "Salvador",
                                                  "Fortaleza"};

        /**
        * @brief Verifica se o cep é válido.
        * Verifica se o cep está nas faixas pertencentes às cidades possíveis.
        * @param cep Cep a ser verificado.
        * @return true Se o valor é válido.
        * @return false Se o valor não é válido.
        */
        void valida(int);
};

#endif // CEP_H
