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
        void setData(std::string);
        std::string getData();

    private:
        void valida(std::string);
        std::string data;
};

#endif // DATA_H
