#ifndef CODIGODEBANCO_H
#define CODIGODEBANCO_H

#include <regex>
#include <string>
#include <vector>

class CodigoDeBanco
{
    public:
        CodigoDeBanco();
        void setCodigoDeBanco(std::string);
        std::string getCodigoDeBanco();
        std::string getBanco();

    private:
        const std::vector<std::string> CODIGOS = {"341", "001", "237", "104", "033"};
        const std::vector<std::string> BANCOS = {"Banco Itau Unibanco",
                                                 "Banco do Brasil",
                                                 "Banco Bradesco",
                                                 "Caixa Economica Federal",
                                                 "Banco Santander"};
        std::string codigo;
        void valida(std::string);
};

#endif // CODIGODEBANCO_H
