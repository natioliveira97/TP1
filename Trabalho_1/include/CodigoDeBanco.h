#ifndef CODIGODEBANCO_H
#define CODIGODEBANCO_H

#include <string>

class CodigoDeBanco
{
    public:
        CodigoDeBanco();
        bool setCodigoDeBanco(std::string);
        std::string getCodigoDeBanco();
        std::string getBanco();

    private:
        std::string banco;
        std::string codigo;
        bool valida(std::string);
};

#endif // CODIGODEBANCO_H
