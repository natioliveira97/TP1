#ifndef NOME_H
#define NOME_H

#include <string>
#include <regex>

class Nome
{
    public:
        Nome();
        Nome(std::string);
        bool setNome(std::string);
        std::string getNome();

    private:
        static const int MIN_CARACTERE = 5;
        static const int MAX_CARACTERE = 30;
        std::string nome;
        bool valida(std::string);
};

#endif // NOME_H
