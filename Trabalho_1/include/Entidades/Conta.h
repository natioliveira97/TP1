#ifndef CONTA_H
#define CONTA_H

#include "Dominios/CodigoDeBanco.h"
#include "Dominios/CodigoDeAgencia.h"
#include "Dominios/Numero.h"


/**
* @file Conta.h
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contém a implementação da classe de entidade Conta. Essa classe armazena as características
* de uma conta, que são: banco, agência e número da conta.
*/

/**
* @brief Armazena o banco, a agência e o número da conta.
* @details Armazena as características de uma conta,
* que são: banco, agência e número da conta.
*/
class Conta
{
    public:
        /**
        * @brief Construtor default.
        */
        Conta();
        /**
        * @brief Destrutor default.
        */
        ~Conta();

        /**
        * @brief Escrita do valor em banco.
        * @param horario Referência para instância de CodigoDeBanco.
        */
        void setBanco(CodigoDeBanco&);
        /**
        * @brief Leitura do valor armazenado em banco.
        * @return Instância de CodigoDeBanco.
        */
        CodigoDeBanco getBanco();

        /**
        * @brief Escrita do valor em agencia.
        * @param horario Referência para instância de CodigoDeAgencia.
        */
        void setAgencia(CodigoDeAgencia&);
        /**
        * @brief Leitura do valor armazenado em agencia.
        * @return Instância de CodigoDeAgencia.
        */
        CodigoDeAgencia getAgencia();

        /**
        * @brief Escrita do valor em numero.
        * @param horario Referência para instância de Número.
        */
        void setNumero(Numero&);

        /**
        * @brief Leitura do valor armazenado em numero.
        * @return Instância de Numero.
        */
        Numero getNumero();


    private:

        CodigoDeBanco banco;
        CodigoDeAgencia agencia;
        Numero numero;
};


inline void Conta::setBanco(CodigoDeBanco& banco){
    this->banco = banco;
}
inline CodigoDeBanco Conta::getBanco(){
    return banco;
}

inline void Conta::setAgencia(CodigoDeAgencia& agencia){
    this->agencia = agencia;
}
inline CodigoDeAgencia Conta::getAgencia(){
    return agencia;
}

inline void Conta::setNumero(Numero& numero){
    this->numero = numero;
}
inline Numero Conta::getNumero(){
    return numero;
}

#endif // CONTA_H
