#ifndef CLASSE_H
#define CLASSE_H

#include <string>

/**
* Classe de dom�nio que armazena a classe de investimento.
*/
class Classe
{
    public:
        /**
        * @brief Construtor.
        * Inicializa o atributo classe como string vazia.
        */
        Classe();
        /**
        * @brief Escrita do valor em classe, se v�lido.
        * @param classe String a ser escrita no atributo.
        * @return true Se foi poss�vel escrever no atributo.
        * @return false Se n�o foi poss�vel escrever no atributo.
        */
        bool setClasse(std::string);
        /**
        * @brief Leitura do valor armazenado em classe.
        * @return classe
        */
        std::string getClasse();

    private:
        std::string classe;
        /**
        * @brief Verifica se a classe � v�lida.
        * Verifica se a classe fornecida corresponde a uma das classes de investimento existentes.
        * @param classe Classe a ser verificada.
        * @return true Se o valor � v�lido.
        * @return false Se o valor n�o � v�lido.
        */
        bool valida(std::string);
};

#endif // CLASSE_H
