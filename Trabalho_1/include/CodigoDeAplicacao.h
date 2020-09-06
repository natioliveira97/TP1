#ifndef CODIGODEAPLICACAO_H
#define CODIGODEAPLICACAO_H

#include <string>
#include <regex>

class CodigoDeAplicacao
{
    public:
        CodigoDeAplicacao();
        bool setCodigoDeAplicacao(std::string);
        std::string getCodigoDeAplicacao();

    private:
        bool valida(std::string);
        std::string codigo;
};

#endif // CODIGODEAPLICACAO_H
