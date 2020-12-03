#ifndef PRODUTO_H
#define PRODUTO_H

#include <Dominios/CodigoDeProduto.h>
#include <Dominios/Classe.h>
#include <Dominios/Emissor.h>
#include <Dominios/Prazo.h>
#include <Dominios/Taxa.h>
#include <Dominios/Data.h>
#include <Dominios/Horario.h>
#include <Dominios/ValorMinimo.h>



/**
* @file Conta.h
* @author Lívia Gomes Costa Fonseca
* @author Natalia Oliveira Borges
*
* Esse arquivo contém a implementação da classe de entidade Produto. Essa classe armazena as características
* de um produto, que são: codigo, classe, emissor, prazo, taxa, vencimento, horario e valor.
*/

/**
* @brief Armazena uma estrutura de um produto.
* @details Armazena as características
* de um produto, que são: codigo, classe, emissor, prazo, taxa, vencimento, horario e valor.
*/

class Produto
{
    public:
        /**
        * @brief Construtor default.
        */
        Produto();

        /**
        * @brief Destrutor default.
        */
        ~Produto();

        /**
        * @brief Escrita do valor em codigo.
        * @param codigo Referência para instância de CodigoDeProduto.
        */
        void setCodigo(CodigoDeProduto&);

        /**
        * @brief Leitura do valor armazenado em codigo.
        * @return Instância de CodigoDeProduto.
        */
        CodigoDeProduto getCodigo();


        /**
        * @brief Escrita do valor em classe.
        * @param classe Referência para instância de Classe.
        */
        void setClasse(Classe&);

        /**
        * @brief Leitura do valor armazenado em classe.
        * @return Instância de Classe.
        */
        Classe getClasse();

        /**
        * @brief Escrita do valor em emissor.
        * @param emissor Referência para instância de Emissor.
        */
        void setEmissor(Emissor&);

        /**
        * @brief Leitura do valor armazenado em emissor.
        * @return Instância de Emissor.
        */
        Emissor getEmissor();

        /**
        * @brief Escrita do valor em prazo.
        * @param prazo Referência para instância de Prazo.
        */
        void setPrazo(Prazo&);

        /**
        * @brief Leitura do valor armazenado em prazo.
        * @return Instância de Prazo.
        */
        Prazo getPrazo();

        /**
        * @brief Escrita do valor em taxa.
        * @param taxa Referência para instância de Taxa.
        */
        void setTaxa(Taxa&);

        /**
        * @brief Leitura do valor armazenado em taxa.
        * @return Instância de Taxa.
        */
        Taxa getTaxa();

        /**
        * @brief Escrita do valor em vencimento.
        * @param vencimento Referência para instância de Data.
        */
        void setVencimento(Data&);

        /**
        * @brief Leitura do valor armazenado em vencimento.
        * @return Instância de Data.
        */
        Data getVencimento();

        /**
        * @brief Escrita do valor em horario.
        * @param horario Referência para instância de Horario.
        */
        void setHorario(Horario&);

        /**
        * @brief Leitura do valor armazenado em horario.
        * @return Instância de Horario.
        */
        Horario getHorario();

        /**
        * @brief Escrita do valor em valor.
        * @param valor Referência para instância de ValorMinimo.
        */
        void setValor(ValorMinimo&);

        /**
        * @brief Leitura do valor armazenado em valor.
        * @return Instância de ValorMinimo.
        */
        ValorMinimo getValor();

    private:
        CodigoDeProduto codigo;
        Classe classe;
        Emissor emissor;
        Prazo prazo;
        Taxa taxa;
        Data vencimento;
        Horario horario;
        ValorMinimo valor;

};

inline void Produto::setCodigo(CodigoDeProduto &codigo){
    this->codigo = codigo;
}
inline CodigoDeProduto Produto::getCodigo(){
    return codigo;
}

inline void Produto::setClasse(Classe &classe){
    this->classe = classe;
}
inline Classe Produto::getClasse(){
    return classe;
}

inline void Produto::setEmissor(Emissor &emissor){
    this->emissor = emissor;
}
inline Emissor Produto::getEmissor(){
    return emissor;
}

inline void Produto::setPrazo(Prazo &prazo){
    this->prazo = prazo;
}
inline Prazo Produto::getPrazo(){
    return prazo;
}

inline void Produto::setTaxa(Taxa &taxa){
    this->taxa = taxa;
}
inline Taxa Produto::getTaxa(){
    return taxa;
}

inline void Produto::setVencimento(Data &vencimento){
    this->vencimento = vencimento;
}
inline Data Produto::getVencimento(){
    return vencimento;
}

inline void Produto::setHorario(Horario &horario){
    this->horario = horario;
}
inline Horario Produto::getHorario(){
    return horario;
}

inline void Produto::setValor(ValorMinimo &valor){
    this->valor = valor;
}
inline ValorMinimo Produto::getValor(){
    return valor;
}

#endif // PRODUTO_H
