#ifndef SENHA_H
#define SENHA_H

#include <string>
#include <regex>
#include <algorithm>

class Senha
{
    public:
        Senha();
        Senha(std::string);
        bool setSenha(std::string);
        std::string getSenha();

    private:
        std::string senha;
        bool valida(std::string);
};

#endif // SENHA_H
