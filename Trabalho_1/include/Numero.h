#ifndef NUMERO_H
#define NUMERO_H

#include <string>
#include <regex>
#include <stdexcept>

class Numero
{
    public:
        Numero();
        Numero(std::string);
        void setNumero(std::string);
        std::string getNumero();

    private:
        std::string numero;
        void valida(std::string);
};

#endif // NUMERO_H
