#ifndef DATA_H
#define DATA_H

#include <string>
#include <regex>
#include <iostream>
#include <stdlib.h>

class Data
{
    public:
        Data();
        bool setData(std::string);
        std::string getData();

    private:
        bool valida(std::string);
        int dia;
        int mes;
        int ano;
        std::string data;
};

#endif // DATA_H
