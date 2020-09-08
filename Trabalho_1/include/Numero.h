#ifndef NUMERO_H
#define NUMERO_H

#include <string>
#include <regex>

class Numero
{
    public:
        Numero();
        Numero(std::string);
        bool setNumero(std::string);
        std::string getNumero();

    private:
        std::string numero;
        bool valida(std::string);
};

#endif // NUMERO_H
