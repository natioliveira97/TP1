#ifndef DATA_H
#define DATA_H

#include <string>
#include <regex>
#include <iostream>
#include <stdlib.h>

/**
* Classe de dom�nio que armazena a data em di, m�s e ano.
*/
class Data
{
    public:
        /**
        * @brief Construtor.
        * Inicializa os atributos dia/m�s/ano com 1/1/2020.
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
        * @brief Verifica se a data � v�lida.
        * Verifica se o dia, o m�s e o ano passados em data correspondem a valores existentes no per�odo
        * de 1/1/2020 a 31/12/2099.
        * @param data Data a ser verificada.
        */
        void valida(std::string);
};

#endif // DATA_H

