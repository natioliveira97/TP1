#ifndef APLICACAO_H
#define APLICACAO_H

#include "Dominios/CodigoDeAplicacao.h"
#include "Dominios/ValorDeAplicacao.h"
#include "Dominios/Data.h"


class Aplicacao
{
    public:
        Aplicacao();
        ~Aplicacao();

        void setCodigo(CodigoDeAplicacao&);
        CodigoDeAplicacao getCodigo();

        void setValor(ValorDeAplicacao&);
        ValorDeAplicacao getValor();

        void setData(Data&);
        Data getData();


    private:
        CodigoDeAplicacao codigo;
        ValorDeAplicacao valor;
        Data data;

};



inline void Aplicacao::setCodigo(CodigoDeAplicacao &codigo){
    this->codigo = codigo;
}
inline CodigoDeAplicacao Aplicacao::getCodigo(){
    return codigo;
}


inline void Aplicacao::setValor(ValorDeAplicacao &valor){
    this->valor = valor;
}
inline ValorDeAplicacao Aplicacao::getValor(){
    return valor;
}


inline void Aplicacao::setData(Data &data){
    this->data = data;
}
inline Data Aplicacao::getData(){
    return data;
}

#endif // APLICACAO_H
