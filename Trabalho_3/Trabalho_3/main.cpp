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

    Usuario usuario;
    Conta conta;
    Produto produto;
    Aplicacao aplicacao, aplicacao1,aplicacao2, aplicacao3, aplicacao4, aplicacao5, aplicacao6, aplicacao7;

    Nome nome;
    Endereco endereco;
    CEP cep;
    CPF cpf;
    Senha senha;
    CodigoDeBanco banco;
    CodigoDeAgencia agencia;
    Numero numero;
    CodigoDeProduto codigo;
    Classe classe;
    Emissor emissor;
    Prazo prazo;
    Taxa taxa;
    Data vencimento;
    Horario horario;
    ValorMinimo valorminimo;
    CodigoDeAplicacao codigo_app;
    ValorDeAplicacao valor_app;


    CodigoDeAplicacao codigo_app2 = CodigoDeAplicacao("13578");
    CodigoDeAplicacao codigo_app3 = CodigoDeAplicacao("13568");
    CodigoDeAplicacao codigo_app4 = CodigoDeAplicacao("14579");
    CodigoDeAplicacao codigo_app5 = CodigoDeAplicacao("13429");
    CodigoDeAplicacao codigo_app6 = CodigoDeAplicacao("13579");
    CodigoDeAplicacao codigo_app7 = CodigoDeAplicacao("12179");


    nome.setNome("Maria");
    endereco.setEndereco("Rua 1");
    cep.setCEP(70000000);
    cpf.setCPF("035.578.911-60");
    senha.setSenha("123456");
    banco.setCodigoDeBanco("033");
    agencia.setCodigoDeAgencia("1234");
    numero.setNumero("111111-6");
    codigo.setCodigoDeProduto("123");
    classe.setClasse("CDB");
    emissor.setEmissor("Tesouro");
    prazo.setPrazo(6);
    taxa.setTaxa(1.7);
    vencimento.setData("10/10/2020");
    horario.setHorario("13:05");
    valorminimo.setValorMinimo(1000.0);
    codigo_app.setCodigoDeAplicacao("12345");
    valor_app.setValorDeAplicacao(1000.0);


    usuario.setNome(nome);
    usuario.setEndereco(endereco);
    usuario.setCEP(cep);
    usuario.setCPF(cpf);

    usuario.setSenha(senha);
    conta.setAgencia(agencia);
    conta.setBanco(banco);
    conta.setNumero(numero);

    produto.setCodigo(codigo);
    produto.setClasse(classe);
    produto.setEmissor(emissor);
    produto.setPrazo(prazo);
    produto.setTaxa(taxa);
    produto.setVencimento(vencimento);
    produto.setHorario(horario);
    produto.setValor(valorminimo);

    aplicacao.setCodigo(codigo_app);
    aplicacao.setValor(valor_app);
    aplicacao.setData(vencimento);

    aplicacao2.setCodigo(codigo_app2);
    aplicacao2.setValor(valor_app);
    aplicacao2.setData(vencimento);

    aplicacao3.setCodigo(codigo_app3);
    aplicacao3.setValor(valor_app);
    aplicacao3.setData(vencimento);

    aplicacao4.setCodigo(codigo_app4);
    aplicacao4.setValor(valor_app);
    aplicacao4.setData(vencimento);

    aplicacao5.setCodigo(codigo_app5);
    aplicacao5.setValor(valor_app);
    aplicacao5.setData(vencimento);

    aplicacao6.setCodigo(codigo_app6);
    aplicacao6.setValor(valor_app);
    aplicacao6.setData(vencimento);

    aplicacao6.setCodigo(codigo_app7);
    aplicacao6.setValor(valor_app);
    aplicacao6.setData(vencimento);

/*
    try{

        CntrServicoPessoal csp;
        CntrServicoAutenticacao csa;
        CntrServicoProdutosFinanceiros cspf;

        std::cout<<"Saida de cadastrar um usuario " << csp.cadastrarUsuario(usuario,conta)<<std::endl;
        std::cout<<"Saida de tentar dacastrar o mesmo usuario " << csp.cadastrarUsuario(usuario,conta)<<std::endl<<std::endl;

        std::cout<<"Consulta ao banco de dados"<<std::endl;
        Usuario usu_result;
        usu_result = csp.consultarUsuario(cpf);

        std::cout<<"Nome recuperado " << usu_result.getNome().getNome()<<std::endl;
        std::cout<<"Endereco recuperado " << usu_result.getEndereco().getEndereco()<<std::endl;
        std::cout<<"CEP recuperado " << usu_result.getCEP().getCEP()<<std::endl;
        std::cout<<"CPF recuperado " << usu_result.getCPF().getCPF()<<std::endl;
        std::cout<<"Senha recuperada " << usu_result.getSenha().getSenha()<<std::endl;

        Conta conta_result;

        try{
            conta_result = csp.consultarConta(cpf);
        }
        catch(ENaoExisteNoBanco &exp){
            cout<<" Falha!! Nao existe esse usuario";
        }

        std::cout<<"Codigo recuperado " << conta_result.getBanco().getCodigoDeBanco()<<std::endl;
        std::cout<<"Agencia recuperada " << conta_result.getAgencia().getCodigoDeAgencia()<<std::endl;
        std::cout<<"Numero recuperado " << conta_result.getNumero().getNumero()<<std::endl<<std::endl;

        std::cout<<"Tentativa de consultar um cpf nao cadastrado" <<std::endl;

        CPF cpf_inv = CPF("261.779.001-00");

        try{
            usu_result = csp.consultarUsuario(cpf_inv);
            std::cout<<"Nome recuperado " << usu_result.getNome().getNome()<<std::endl;
            std::cout<<"Endereco recuperado " << usu_result.getEndereco().getEndereco()<<std::endl;
            std::cout<<"CEP recuperado " << usu_result.getCEP().getCEP()<<std::endl;
            std::cout<<"CPF recuperado " << usu_result.getCPF().getCPF()<<std::endl;
            std::cout<<"Senha recuperada " << usu_result.getSenha().getSenha()<<std::endl;

        }
        catch(ENaoExisteNoBanco &exp){
            cout<<" Sucesso!! Nao existe esse usuario"<<endl;
        }


        std::cout<<"Testes de autenticacao"<<std::endl;
        std::cout<<"Saida de autenticacao valida " <<csa.autenticar(cpf, senha) <<std::endl;

        Senha senha_inv = Senha("654321");
        std::cout<<"Saida de senha invalida " <<csa.autenticar(cpf, senha_inv) <<std::endl;

        std::cout<<"Saida de cpf invalida " <<csa.autenticar(cpf_inv, senha_inv) <<std::endl<<std::endl;



        std::cout<<"Saida do cadastramento de produto " << cspf.cadastrarProdutoInvestimento(produto) <<endl;
        std::cout<<"Saida do recadastramento do mesmo produto " << cspf.cadastrarProdutoInvestimento(produto) <<endl<<endl;

        cout<<"Consulta de produto"<<endl;
        vector<Produto> pro_result;
        pro_result = cspf.consultarProdutosInvestimento(classe);

        for(int i=0; i<(int)pro_result.size(); ++i){
            std::cout<<"Codigo recuperado " << pro_result[i].getCodigo().getCodigoDeProduto()<<std::endl;
            std::cout<<"Classe recuperado " << pro_result[i].getClasse().getClasse()<<std::endl;
            std::cout<<"Emissor recuperado " << pro_result[i].getEmissor().getEmissor()<<std::endl;
            std::cout<<"Prazo recuperado " << pro_result[i].getPrazo().getPrazo()<<std::endl;
            std::cout<<"Taxa recuperado " << pro_result[i].getTaxa().getTaxa()<<std::endl;
            std::cout<<"Data recuperado " << pro_result[i].getVencimento().getData()<<std::endl;
            std::cout<<"Horario recuperado " << pro_result[i].getHorario().getHorario()<<std::endl;
            std::cout<<"Valor recuperado " << pro_result[i].getValor().getValorMinimo()<<std::endl<<endl;

        }


        std::cout<<"Saida do Descadastramento de produto sem aplicacao " <<  cspf.descadastrarProdutoInvestimento(codigo) <<std::endl;

        CodigoDeProduto codigo_inv = CodigoDeProduto("555");
        std::cout<<"Saida do Descadastramento de produto invalida " <<  cspf.descadastrarProdutoInvestimento(codigo) <<std::endl;


        cspf.cadastrarProdutoInvestimento(produto);

        Classe classe_inv = Classe("LCI");
        pro_result = cspf.consultarProdutosInvestimento(classe_inv);

        if(pro_result.size()==0){
            std::cout<<"Sucesso! Vetor vazio" <<std::endl;
        }
        else{
            std::cout<<"falha!Vetor não vazio" <<std::endl<<std::endl;
        }

        std::cout<<"Saida do cadastramento de aplicacao " << cspf.realizarAplicacao(cpf, codigo,aplicacao) <<endl;
        std::cout<<"Saida do recadastramento da mesma aplicacao " << cspf.realizarAplicacao(cpf, codigo, aplicacao) <<endl;
        std::cout<<"Saida do cadastramento de aplicacao2 " << cspf.realizarAplicacao(cpf, codigo, aplicacao2) <<endl;
        std::cout<<"Saida do cadastramento de aplicacao com valor invalido " << cspf.realizarAplicacao(cpf, codigo, aplicacao7) <<endl;
        std::cout<<"Saida do cadastramento de aplicacao3 " << cspf.realizarAplicacao(cpf, codigo, aplicacao3) <<endl;
        std::cout<<"Saida do cadastramento de aplicacao4 " << cspf.realizarAplicacao(cpf, codigo, aplicacao4) <<endl;
        std::cout<<"Saida do cadastramento de aplicacao5 " << cspf.realizarAplicacao(cpf, codigo, aplicacao5) <<endl;
        std::cout<<"Saida do cadastramento de aplicacao6 " << cspf.realizarAplicacao(cpf, codigo, aplicacao6) <<endl<<endl;


        vector<Aplicacao> app_result;
        app_result = cspf.consultarAplicacao(cpf);

        cout<<"Recuperando dados das aplicacoes"<<endl;

        for(int i=0; i<(int)app_result.size(); ++i){
            std::cout<<"Codigo recuperado " << app_result[i].getCodigo().getCodigoDeAplicacao()<<std::endl;
            //std::cout<<"Data recuperado " << app_result[i].getData().getData()<<std::endl;
            //std::cout<<"Valor recuperado " << app_result[i].getValor().getValorDeAplicacao()<<std::endl;
        }


        std::cout<<"Saida do descadastramento de produto com aplicacao " <<  cspf.descadastrarProdutoInvestimento(codigo) <<std::endl;

        csp.descadastrarUsuario(cpf);
        std::cout<<"Saida do descadastramento de usuario " <<  csp.descadastrarUsuario(cpf) <<std::endl;
        std::cout<<"Saida do Descadastramento de produto depois de excluir usuario " <<  cspf.descadastrarProdutoInvestimento(codigo) <<std::endl;

    }


    catch(std::exception &exp){
        std::cout << exp.what() << std::endl;
    }

*/

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
    cntrApresentacaoPessoal->setCntrServicoProdutosFinanceiros(cntrServicoProdutosFinanceiros);
    cntrApresentacaoProdutosFinanceiros->setCntrServicoProdutosFinanceiros(cntrServicoProdutosFinanceiros);

    initscr();                                                      // Inicia curses.
    //cntrApresentacaoPessoal->executar(cpf);
    cntrApresentacaoControle->executar();                           // Solicita serviço apresentacao.
    endwin();
                                                                    // Finaliza curses.

    return 0;


}
