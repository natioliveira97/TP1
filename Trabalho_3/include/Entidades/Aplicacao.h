#ifndef APLICACAO_H
#define APLICACAO_H

#include "Dominios/CodigoDeAplicacao.h"
#include "Dominios/ValorDeAplicacao.h"
#include "Dominios/Data.h"


/**
* @file Aplicacao.h
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contém a implementação da classe de entidade Aplicacao. Essa classe contém os dados
* que caracterizam uma aplicação em um produto de investimento, que são: código de aplicação,
* valor de aplicação e a data da aplicação.
*/

/**
* @brief Armazena o código de aplicação, o valor da aplicação e a data.
* @details Contém os dados que caracterizam uma aplicação em um produto de investimento,
* que são: código de aplicação, valor de aplicação e a data da aplicação.
*/
class Aplicacao
{
    public:
        /**
        * @brief Construtor default.
        */
        Aplicacao();
        /**
        * @brief Destrutor default.
        */
        ~Aplicacao();

        /**
        * @brief Escrita do valor em codigo.
        * @param codigo Referência para instância de CodigoDeAplicacao.
        */
        void setCodigo(CodigoDeAplicacao&);
        /**
        * @brief Leitura do valor armazenado em codigo.
        * @return Instância de CodigoDeAplicacao.
        */
        CodigoDeAplicacao getCodigo();

        /**
        * @brief Escrita do valor em valor.
        * @param valor Referência para instância de ValorDeAplicacao.
        */
        void setValor(ValorDeAplicacao&);
        /**
        * @brief Leitura do valor armazenado em valor.
        * @return Instância de ValorDeAplicacao.
        */
        ValorDeAplicacao getValor();

        /**
        * @brief Escrita do valor em data.
        * @param data Referência para instância de Data.
        */
        void setData(Data&);
        /**
        * @brief Leitura do valor armazenado em data.
        * @return Instância de Data.
        */
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
