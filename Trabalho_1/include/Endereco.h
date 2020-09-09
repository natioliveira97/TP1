#ifndef ENDERECO_H
#define ENDERECO_H

#include <string>
#include <regex>
#include <stdexcept>

class Endereco
{
    public:
        Endereco();
        Endereco(std::string);
        void setEndereco(std::string);
        std::string getEndereco();

    private:
        static const int MIN_CARACTERE = 5;
        static const int MAX_CARACTERE = 20;
        std::string endereco;
        void valida(std::string);

};

#endif // ENDERECO_H
