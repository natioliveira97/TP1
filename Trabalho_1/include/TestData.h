#ifndef TESTDATA_H
#define TESTDATA_H

#include <string>
#include "BaseTest.h"
#include "Data.h"

class TestData: public BaseTest
{
    public:
        TestData();
        ~TestData();

        int run();

    private:
        std::string VALOR_VALIDO = "31/12/2099";
        std::string VALOR_INVALIDO = "30/2/2030";
        int estado;

        Data *data;

        void testDataValida();
        void testDataInvalida();
};

#endif // TESTDATA_H
