#ifndef CONTA_H
#define CONTA_H


#include "Dominios/CodigoDeBanco.h"
#include "Dominios/CodigoDeAgencia.h"
#include "Dominios/Numero.h"

class Conta
{
    public:
        Conta();
        ~Conta();


        void setBanco(CodigoDeBanco&);
        CodigoDeBanco getBanco();

        void setAgencia(CodigoDeAgencia&);
        CodigoDeAgencia getAgencia();

        void setNumero(Numero&);
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
