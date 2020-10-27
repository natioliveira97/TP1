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

class Produto
{
    public:
        Produto();
        virtual ~Produto();

        void setCodigo(CodigoDeProduto&);
        CodigoDeProduto getCodigo();

        void setClasse(Classe&);
        Classe getClasse();

        void setEmissor(Emissor&);
        Emissor getEmissor();

        void setPrazo(Prazo&);
        Prazo getPrazo();

        void setTaxa(Taxa&);
        Taxa getTaxa();

        void setVencimento(Data&);
        Data getVencimento();

        void setHorario(Horario&);
        Horario getHorario();

        void setValor(ValorMinimo&);
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
