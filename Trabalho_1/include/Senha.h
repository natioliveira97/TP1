#ifndef SENHA_H
#define SENHA_H

#include <string>
#include <regex>
#include <algorithm>
#include <stdexcept>

class Senha
{
    public:
        Senha();
        Senha(std::string);
        void setSenha(std::string);
        std::string getSenha();

    private:
        std::string senha;
        void valida(std::string);
};

#endif // SENHA_H
