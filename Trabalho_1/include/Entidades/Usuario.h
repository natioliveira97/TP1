#ifndef USUARIO_H
#define USUARIO_H

#include <Dominios/Nome.h>
#include <Dominios/Endereco.h>
#include <Dominios/CEP.h>
#include <Dominios/CPF.h>
#include <Dominios/Senha.h>

class Usuario
{
    public:
        Usuario();
        virtual ~Usuario();

        void setNome(Nome&);
        Nome getNome();

        void setEndereco(Endereco&);
        Endereco getEndereco();

        void setCEP(CEP&);
        CEP getCEP();

        void setCPF(CPF&);
        CPF getCPF();

        void setSenha(Senha&);
        Senha getSenha();

    private:
        Nome nome;
        Endereco endereco;
        CEP cep;
        CPF cpf;
        Senha senha;
};


inline void Usuario::setNome(Nome& nome){
    this->nome = nome;
}
inline Nome Usuario::getNome(){
    return nome;
}

inline void Usuario::setEndereco(Endereco& endereco){
    this->endereco = endereco;
}
inline Endereco Usuario::getEndereco(){
    return endereco;
}

inline void Usuario::setCEP(CEP& cep){
    this->cep = cep;
}
inline CEP Usuario::getCEP(){
    return cep;
}

inline void Usuario::setCPF(CPF& cpf){
    this->cpf = cpf;
}
inline CPF Usuario::getCPF(){
    return cpf;
}

inline void Usuario::setSenha(Senha& senha){
    this->senha = senha;
}
inline Senha Usuario::getSenha(){
    return senha;
}

#endif // USUARIO_H
