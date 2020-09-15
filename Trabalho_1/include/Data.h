#ifndef DATA_H
#define DATA_H

#include <string>
#include <regex>
#include <iostream>
#include <stdlib.h>

/**
* Classe de domínio que armazena a data em di, mês e ano.
*/
class Data
{
    public:
        /**
        * @brief Construtor.
        * Inicializa os atributos dia/mês/ano com 1/1/2020.
        */
        Data();
        /**
        * @brief Escrita da data no atributo data.
        * @param data String a ser escrita nos atributos.
        */
        void setData(std::string);
        /**
        * @brief Leitura do valor armazenado em data.
        * @return data
        */
        std::string getData();

    private:
        std::string data;
        /**
        * @brief Verifica se a data é válida.
        * Verifica se o dia, o mês e o ano passados em data correspondem a valores existentes no período
        * de 1/1/2020 a 31/12/2099.
        * @param data Data a ser verificada.
        */
        void valida(std::string);
};

#endif // DATA_H

