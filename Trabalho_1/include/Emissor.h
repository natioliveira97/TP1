#ifndef EMISSOR_H
#define EMISSOR_H

#include <string>
#include <regex>
#include <iostream>


class Emissor
{
    public:
        Emissor();
        bool setEmissor(std::string);
        std::string getEmissor();

    private:
        bool valida(std::string);
        std::string emissor;
};

#endif // EMISSOR_H
