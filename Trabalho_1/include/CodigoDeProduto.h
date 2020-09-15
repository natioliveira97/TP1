#ifndef CODIGODEPRODUTO_H
#define CODIGODEPRODUTO_H

#include <string>
#include <regex>

class CodigoDeProduto
{
    public:
        CodigoDeProduto();
        void setCodigoDeProduto(std::string);
        std::string getCodigoDeProduto();

    private:
        void valida(std::string);
        std::string codigo;
};

#endif // CODIGODEPRODUTO_H
