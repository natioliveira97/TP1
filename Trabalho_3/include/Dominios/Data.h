#ifndef DATA_H
#define DATA_H

#include <string>
#include <regex>
#include <iostream>
#include <stdlib.h>

/**
* @file Data.h
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contém a implementação da classe de domínio Data. Essa classe armazena o atributo data no formato
* de uma string que corresponde à data de vencimento na qual os valores estarão disponíveis.
*/

/**
* @brief Armazena a data em dia, mês e ano.
* @details Data de vencimento na qual os valores estarão disponíveis.
*/
class Data
{
    public:
        /**
        * @brief Construtor default.
        */
        Data();


        /**
        * @brief Construtor que inicializa data com valor
        * @details A data está no formato dia/mês/ano e para ser válida precisa estar
        *          no período de 01/01/2020 a 31/12/2099. E as indicações de dia e mês
        *          devem possuir sempre dois algarismos.
        * @param data String a ser escrita no atributo.
        * @throw invalid_argument Se valor passado não estiver no período de 01/01/2020 a 31/12/2099.
        */
        Data(std::string);

        /**
        * @brief Escrita do valor em data, se válido.
        * @details A data está no formato dia/mês/ano e para ser válida precisa estar
        *          no período de 01/01/2020 a 31/12/2099. E as indicações de dia e mês
        *          devem possuir sempre dois algarismos.
        * @param data String a ser escrita no atributo.
        * @throw invalid_argument Se valor passado não estiver no período de 01/01/2020 a 31/12/2099.
        */
        void setData(std::string);

        /**
        * @brief Leitura do valor armazenado em data.
        * @return data Retorna string com valor armazenado em data no formato dia/mês/ano.
        */
        std::string getData();

    private:
        std::string data;

        /**
        * @brief Verifica se a data é válida.
        * @details Verifica se o dia, o mês e o ano passados em data correspondem a valores existentes no
        *          período de 01/01/2020 a 31/12/2099.
        * @param data Data a ser verificada.
        */
        void valida(std::string);
};

#endif // DATA_H

