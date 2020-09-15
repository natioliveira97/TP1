#ifndef HORARIO_H
#define HORARIO_H

#include <string>
#include <regex>

class Horario
{
    public:
        /**
        * @brief Construtor default.
        * Inicializa o atributo horario como 00:00.
        */
        Horario();

        /**
        * @brief Construtor que inicializa a classe com valor horario.
        * @param horario String a ser escrita no atributo horario.
        */
        Horario(std::string);

        /**
        * @brief Escreve valor no atributo horario, se o valor for v‡lido.
        * @param horario String a ser escrita no atributo horario.
        */
        void setHorario(std::string);

        /**
        * @brief Le atributo horario.
        * @return Retorna string com valor armazenado em horario.
        * @throws invalid_argument exception.
        */
        std::string getHorario();

    private:
        std::string horario;

        /**
        * @brief Valida string horario, verificando se esta no formato correto e no range permitido.
        * @param horario String a ser validada.
        * @throws invalid_argument exception.
        */
        void valida(std::string);
};

#endif // HORARIO_H
