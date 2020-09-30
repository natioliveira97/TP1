#ifndef BASETEST_H
#define BASETEST_H

#include <string>

class BaseTest
{
    public:

        BaseTest(){};
        ~BaseTest(){};
        int run(){
            return 0;
        };


        static int const SUCESSO = 0;
        static int const FALHA = 1;

        std::string nome_dominio;
};

#endif
