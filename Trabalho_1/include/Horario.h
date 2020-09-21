#ifndef HORARIO_H
#define HORARIO_H

#include <string>
#include <regex>

/**
* @file Horario.h
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contém a implementação da classe de domínio Horario. Essa classe armazena o atributo horario no formato
* string e possui métodos para leitura, escrita e validação.
*/
class Horario
{
    public:
        /**
        * @brief Construtor default.
        * @details Inicializa o atributo horario como 00:00.
        */
        Horario();

        /**
        * @brief Construtor que inicializa a classe com valor horario.
        * @details Para ser válido o valor horário deve estar entre 13:00 e 17:00
        * @param horario String a ser escrita no atributo horario.
        * @throw invalid_argument se horário estiver fora do intervalo 13:00 e 17:00.
        */
        Horario(std::string);

        /**
        * @brief Escreve valor no atributo horario, se o valor for válido.
        * @details Para ser válido o valor horário deve estar entre 13:00 e 17:00
        * @param horario String a ser escrita no atributo horario.
        * @throw invalid_argument se horário estiver fora do intervalo 13:00 e 17:00.
        */
        void setHorario(std::string);

        /**
        * @brief Lê atributo horario.
        * @return Retorna string com valor armazenado em horario.
        */
        std::string getHorario();

    private:
        std::string horario;

        /**
        * @brief Valida string horario, verificando se esta no formato correto e no range permitido.
        * @details Para ser válido o valor horário deve estar entre 13:00 e 17:00
        * @param horario String a ser validada.
        * @throw invalid_argument se horário estiver fora do intervalo 13:00 e 17:00.
        */
        void valida(std::string);
};

#endif // HORARIO_H
