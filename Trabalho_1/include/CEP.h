#ifndef CEP_H
#define CEP_H

#include <string>

class CEP
{
    public:
        CEP();
        int getCEP();
        std::string getCidade();
        bool setCEP(int);

    private:
        int cep;
        std::string cidade;
        bool valida(int);
};

#endif // CEP_H
