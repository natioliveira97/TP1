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

        void setCodigoDeProduto(CodigoDeProduto&);
        CodigoDeProduto getCodigoDeProduto();

        void setClasse(Classe&);
        Classe getClasse();

        void setEmissor(Emissor&);
        Emissor getEmissor();

        void setPrazo(Prazo&);
        Prazo getPrazo();

        void setTaxa(Taxa&);
        Taxa getTaxa();

        void setData(Data&);
        Data getData();

        void setHorario(Horario&);
        Horario getHorario();

        void setValorMinimo(ValorMinimo&);
        ValorMinimo getValorMinimo();

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

inline void Produto::setCodigoDeProduto(CodigoDeProduto &codigo){
    this->codigo = codigo;
}
inline CodigoDeProduto Produto::getCodigoDeProduto(){
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

inline void Produto::setData(Data &vencimento){
    this->vencimento = vencimento;
}
inline Data Produto::getData(){
    return vencimento;
}

inline void Produto::setHorario(Horario &horario){
    this->horario = horario;
}
inline Horario Produto::getHorario(){
    return horario;
}

inline void Produto::setValorMinimo(ValorMinimo &valor){
    this->valor = valor;
}
inline ValorMinimo Produto::getValorMinimo(){
    return valor;
}

#endif // PRODUTO_H
