#ifndef USUARIO_H
#define USUARIO_H

#include <Dominios/Nome.h>
#include <Dominios/Endereco.h>
#include <Dominios/CEP.h>
#include <Dominios/CPF.h>
#include <Dominios/Senha.h>

class Usuario{
    public:
        /**
        * @brief Construtor default.
        */
        Usuario();

        /**
        * @brief Destrutor default.
        */
        virtual ~Usuario();


        /**
        * @brief Escrita do valor em nome.
        * @param codigo Referncia para inst‰ncia de Nome.
        */
        void setNome(Nome&);

        /**
        * @brief Leitura do valor armazenado em nome.
        * @return Inst‰ncia de Nome.
        */
        Nome getNome();

        /**
        * @brief Escrita do valor em endereco.
        * @param codigo Referncia para inst‰ncia de Endereco
        */
        void setEndereco(Endereco&);

        /**
        * @brief Leitura do valor armazenado em endereco.
        * @return Inst‰ncia de Endereco.
        */
        Endereco getEndereco();

        /**
        * @brief Escrita do valor em cep.
        * @param codigo Referncia para inst‰ncia de CEP.
        */
        void setCEP(CEP&);
        /**
        * @brief Leitura do valor armazenado em cep.
        * @return Inst‰ncia de CEP.
        */
        CEP getCEP();

        /**
        * @brief Escrita do valor em cpf.
        * @param codigo Referncia para inst‰ncia de CPF.
        */
        void setCPF(CPF&);

        /**
        * @brief Leitura do valor armazenado em cpf.
        * @return Inst‰ncia de CPF.
        */
        CPF getCPF();

        /**
        * @brief Escrita do valor em senha.
        * @param codigo Referncia para inst‰ncia de Senha.
        */
        void setSenha(Senha&);

        /**
        * @brief Leitura do valor armazenado em senha.
        * @return Inst‰ncia de Senha.
        */
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
