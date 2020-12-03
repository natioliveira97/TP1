#include <iostream>
#include "Servicos/CntrBD.h"

#include "Dominios/CEP.h"
#include "Dominios/Classe.h"
#include "Dominios/CodigoDeAgencia.h"
#include "Dominios/CodigoDeAplicacao.h"
#include "Dominios/CodigoDeBanco.h"
#include "Dominios/CodigoDeProduto.h"
#include "Dominios/CPF.h"
#include "Dominios/Data.h"
#include "Dominios/Emissor.h"
#include "Dominios/Endereco.h"
#include "Dominios/Horario.h"
#include "Dominios/Nome.h"
#include "Dominios/Numero.h"
#include "Dominios/Prazo.h"
#include "Dominios/Senha.h"
#include "Dominios/Taxa.h"
#include "Dominios/ValorDeAplicacao.h"
#include "Dominios/ValorMinimo.h"

#include "Dominios/BaseTest.h"
#include "Dominios/TestPrazo.h"

#include "Entidades/Usuario.h"
#include "Entidades/Conta.h"
#include "Entidades/Aplicacao.h"
#include "Entidades/Produto.h"

#include "Apresentacao/CntrApresentacaoControle.h"
#include "Apresentacao/CntrApresentacaoAutenticacao.h"
#include "Apresentacao/CntrApresentacaoPessoal.h"
#include "Apresentacao/CntrApresentacaoProdutosFinanceiros.h"

#include "Servicos/CntrServicoAutenticacao.h"
#include "Servicos/CntrServicoPessoal.h"
#include "Servicos/CntrServicoProdutosFinanceiros.h"


//using namespace std;

int main(){

    // Instancia as controladoras de apresentação.

    CntrApresentacaoControle *cntrApresentacaoControle;
    IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
    IApresentacaoPessoal *cntrApresentacaoPessoal;
    IApresentacaoProdutosFinanceiros *cntrApresentacaoProdutosFinanceiros;

    cntrApresentacaoControle = new CntrApresentacaoControle();
    cntrApresentacaoAutenticacao = new CntrApresentacaoAutenticacao();
    cntrApresentacaoPessoal = new CntrApresentacaoPessoal();
    cntrApresentacaoProdutosFinanceiros = new CntrApresentacaoProdutosFinanceiros();

    // Instancia os stubs de serviço.

    IServicoAutenticacao *cntrServicoAutenticacao;
    IServicoPessoal *cntrServicoPessoal;
    IServicoProdutosFinanceiros *cntrServicoProdutosFinanceiros;

    cntrServicoAutenticacao = new CntrServicoAutenticacao();
    cntrServicoPessoal = new CntrServicoPessoal();
    cntrServicoProdutosFinanceiros = new CntrServicoProdutosFinanceiros();

    // Interliga as controladoras aos serviços.

    cntrApresentacaoControle->setCntrApresentacaoAutenticacao(cntrApresentacaoAutenticacao);
    cntrApresentacaoControle->setCntrApresentacaoPessoal(cntrApresentacaoPessoal);
    cntrApresentacaoControle->setCntrApresentacaoProdutosFinanceiros(cntrApresentacaoProdutosFinanceiros);

    cntrApresentacaoAutenticacao->setCntrServicoAutenticacao(cntrServicoAutenticacao);
    cntrApresentacaoPessoal->setCntrServicoPessoal(cntrServicoPessoal);
    cntrApresentacaoProdutosFinanceiros->setCntrServicoProdutosFinanceiros(cntrServicoProdutosFinanceiros);

    initscr();                                                      // Inicia curses.
    cntrApresentacaoControle->executar();                           // Solicita serviço apresentacao.
    endwin();
                                                                    // Finaliza curses.

    return 0;


}
