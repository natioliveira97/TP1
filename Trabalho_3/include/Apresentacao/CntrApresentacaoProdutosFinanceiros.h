#ifndef CNTRAPRESENTACAOPRODUTOSFINANCEIROS_H
#define CNTRAPRESENTACAOPRODUTOSFINANCEIROS_H

#include <vector>
#include <string>

#include "Dominios/CodigoDeProduto.h"
#include "Dominios/Classe.h"
#include "Dominios/Emissor.h"
#include "Dominios/Prazo.h"
#include "Dominios/Taxa.h"
#include "Dominios/Data.h"
#include "Dominios/Horario.h"
#include "Dominios/ValorMinimo.h"

#include "Entidades/Aplicacao.h"
#include "Entidades/Conta.h"
#include "Entidades/Produto.h"

#include "Interfaces/IServico.h"
#include "Interfaces/IApresentacao.h"
#include "Servicos/CntrBD.h"
#include "curses.h"

class CntrApresentacaoProdutosFinanceiros:public IApresentacaoProdutosFinanceiros{
    private:
        IServicoProdutosFinanceiros *cntr;
        void cadastrarProdutoInvestimento();
        void descadastrarProdutoInvestimento();
        void consultarProdutoInvestimento();
        void realizarAplicacao(CPF);
        void listarAplicacoes(CPF);
    public:
        void executar();
        void executar(CPF);
        void setCntrServicoProdutosFinanceiros(IServicoProdutosFinanceiros*);
};

inline void CntrApresentacaoProdutosFinanceiros::setCntrServicoProdutosFinanceiros(IServicoProdutosFinanceiros *cntr){
    this->cntr = cntr;
}

#endif // CNTRAPRESENTACAOPRODUTOSFINANCEIROS_H
