#ifndef TESTHORARIO_H
#define TESTHORARIO_H

#include <string>
#include "BaseTest.h"
#include "Horario.h"


class TestHorario: public BaseTest
{
    public:
        TestHorario();
        ~TestHorario();

        int run();

    private:
        std::string VALOR_VALIDO = "13:03";
        std::string VALOR_INVALIDO = "17:01";
        int estado;

        Horario *horario;

        void testHorarioValido();
        void testHorarioInvalido();
};

#endif // TESTHORARIO_H
