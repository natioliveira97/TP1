#ifndef HORARIO_H
#define HORARIO_H

#include <string>
#include <regex>

class Horario
{
    public:
        Horario();
        Horario(std::string);
        void setHorario(std::string);
        std::string getHorario();

    private:
        std::string horario;
        void valida(std::string);
};

#endif // HORARIO_H
