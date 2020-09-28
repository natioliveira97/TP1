#ifndef CLASSE_H
#define CLASSE_H

#include <string>
#include <vector>
#include <stdexcept>

/**
* @file Classe.h
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contém a implementação da classe de domínio Classe. Essa classe armazena o atributo classe no formato
* de uma string que corresponde à classe do produto de investimento.
*/

/**
* @brief Armazena a classe do produto de investimento.
*/
class Classe
{
    public:
        /**
        * @brief Construtor default.
        * @details Inicializa o atributo classe como string vazia.
        */
        Classe();

        /**
        * @brief Construtor que inicializa classe com um valor.
        * @details Para ser válida, a classe fornecida deve corresponder a uma das classes de investimento
        *          existentes. As classes existentes são "CDB", "LCA", "LCI", "FI" e "LC".
        * @param classe String a ser escrita no atributo.
        * @throw invalid_argument Se valor passado não for válido.
        */
        Classe(std::string);

        /**
        * @brief Escrita do valor em classe, se válido.
        * @details Para ser válida, a classe fornecida deve corresponder a uma das classes de investimento
        *          existentes. As classes existentes são "CDB", "LCA", "LCI", "FI" e "LC".
        * @param classe String a ser escrita no atributo.
        * @throw invalid_argument Se valor passado não for válido.
        */
        void setClasse(std::string);

        /**
        * @brief Leitura do valor armazenado em classe.
        * @return classe Retorna string com valor armazenado em classe.
        */
        std::string getClasse();

    private:
        std::string classe;

        /**
        * Classes válidas.
        */
        const std::vector<std::string> CLASSES = {"CDB", "LCA", "LCI", "FI", "LC"};

        /**
        * @brief Verifica se a classe é válida.
        * @details Verifica se a classe fornecida corresponde a uma das classes de investimento existentes.
        * @param classe Classe a ser verificada.
        * @throw invalid_argument Se valor passado não for válido.
        */
        void valida(std::string);
};

#endif // CLASSE_H
