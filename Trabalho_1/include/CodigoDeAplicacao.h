#ifndef CODIGODEAPLICACAO_H
#define CODIGODEAPLICACAO_H

#include <string>
#include <regex>

class CodigoDeAplicacao
{
    public:
        CodigoDeAplicacao();
        void setCodigoDeAplicacao(std::string);
        std::string getCodigoDeAplicacao();

    private:
        void valida(std::string);
        std::string codigo;
};

#endif // CODIGODEAPLICACAO_H
