#ifndef CPF_H
#define CPF_H

#include <string>
#include <regex>
#include <iostream>
#include <stdlib.h>

class CPF
{
    public:

        CPF();
        bool setCPF(std::string);
        std::string getCPF();

    private:
        bool validaDigitoVerificador(std::string);
        bool valida(std::string);
        std::string cpf;
};

#endif // CPF_H
