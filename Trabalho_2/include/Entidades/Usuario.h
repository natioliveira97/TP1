#ifndef USUARIO_H
#define USUARIO_H

#include <Dominios/Nome.h>
#include <Dominios/Endereco.h>
#include <Dominios/CEP.h>
#include <Dominios/CPF.h>
#include <Dominios/Senha.h>

/**
* @file Usuario.h
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contém a implementação da classe de entidade Usuario. Essa classe armazena as características
* de um usuário, que são: nome, endereço, cep, cpf e senha.
*/

/**
* @brief Armazena uma estrutura de um Usuário.
* @details Armazena as características de um usuário, que são: nome, endereço, cep, cpf e senha.
*/

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
        * @param codigo Referência para instância de Nome.
        */
        void setNome(Nome&);

        /**
        * @brief Leitura do valor armazenado em nome.
        * @return Instância de Nome.
        */
        Nome getNome();

        /**
        * @brief Escrita do valor em endereco.
        * @param endereco Referência para instância de Endereco
        */
        void setEndereco(Endereco&);

        /**
        * @brief Leitura do valor armazenado em endereco.
        * @return Instância de Endereco.
        */
        Endereco getEndereco();

        /**
        * @brief Escrita do valor em cep.
        * @param cep Referência para instância de CEP.
        */
        void setCEP(CEP&);
        /**
        * @brief Leitura do valor armazenado em cep.
        * @return Instância de CEP.
        */
        CEP getCEP();

        /**
        * @brief Escrita do valor em cpf.
        * @param cpf Referência para instância de CPF.
        */
        void setCPF(CPF&);

        /**
        * @brief Leitura do valor armazenado em cpf.
        * @return Instância de CPF.
        */
        CPF getCPF();

        /**
        * @brief Escrita do valor em senha.
        * @param senha Referência para instância de Senha.
        */
        void setSenha(Senha&);

        /**
        * @brief Leitura do valor armazenado em senha.
        * @return Instância de Senha.
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
