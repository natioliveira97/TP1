#ifndef CODIGODEAGENCIA_H
#define CODIGODEAGENCIA_H

#include <string>
#include <regex>

class CodigoDeAgencia
{
    public:
        CodigoDeAgencia();
        bool setCodigoDeAgencia(std::string);
        std::string getCodigoDeAgencia();

    private:
        bool valida(std::string);
        std::string codigo;
};

#endif // CODIGODEAGENCIA_H
