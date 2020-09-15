#ifndef TESTHORARIO_H
#define TESTHORARIO_H

#include <string>
#include <Horario.h>
#include <iostream>

class TestHorario
{
    public:
        TestHorario();
        void run();

    private:
        std::string VALOR_VALIDO = "13:03";
        std::string VALOR_INVALIDO = "18:000";

        Horario *horario;

        void testHorarioValido();
        void testHorarioInvalido();
};

#endif // TESTHORARIO_H
