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
        void setCPF(std::string);
        std::string getCPF();

    private:
        void valida(std::string);
        void validaDigitoVerificador(std::string);
        std::string cpf;
};

#endif // CPF_H
