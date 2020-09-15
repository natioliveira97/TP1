#ifndef CEP_H
#define CEP_H

#include <string>
#include <array>
#include <vector>

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
        * @brief Verifica se o cep � v�lido.
        * Verifica se o cep est� nas faixas pertencentes �s cidades poss�veis.
        * @param cep Cep a ser verificado.
        * @return true Se o valor � v�lido.
        * @return false Se o valor n�o � v�lido.
        */
        void valida(int);
};

#endif // CEP_H
