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

#include "Entidades/Usuario.h"
#include "Entidades/Conta.h"
#include "Entidades/Aplicacao.h"
#include "Entidades/Produto.h"

#include "Servicos/CntrServicoAutenticacao.h"
#include "Servicos/CntrServicoPessoal.h"
#include "Servicos/CntrServicoProdutosFinanceiros.h"


using namespace std;

int main(){

    Usuario usuario;
    Conta conta;
    Produto produto;
    Aplicacao aplicacao;

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


    try{

        CntrServicoPessoal csp;
        csp.cadastrarUsuario(usuario, conta);
        std::cout<<"Resultado do cadastramento " << csp.cadastrarUsuario(usuario,conta)<<std::endl;

        Usuario usu_result;
        usu_result = csp.consultarUsuario(cpf);

        std::cout<<"Nome recuperado " << usu_result.getNome().getNome()<<std::endl;
        std::cout<<"Endereco recuperado " << usu_result.getEndereco().getEndereco()<<std::endl;
        std::cout<<"CEP recuperado " << usu_result.getCEP().getCEP()<<std::endl;
        std::cout<<"CPF recuperado " << usu_result.getCPF().getCPF()<<std::endl;
        std::cout<<"Senha recuperado " << usu_result.getSenha().getSenha()<<std::endl;

        CPF cpf_inv = CPF("261.779.001-00");
        Senha senha_inv = Senha("654321");

        CntrServicoAutenticacao cntr;
        std::cout<<"Resultado da Autenticacao " << cntr.autenticar(cpf, senha_inv) <<std::endl;

        Conta conta_result;
        conta_result = csp.consultarConta(cpf);

        std::cout<<"Codigo recuperado " << conta_result.getBanco().getCodigoDeBanco()<<std::endl;
        std::cout<<"Agencia recuperado " << conta_result.getAgencia().getCodigoDeAgencia()<<std::endl;
        std::cout<<"Numero recuperado " << conta_result.getNumero().getNumero()<<std::endl;


        csp.descadastrarUsuario(cpf);
        std::cout<<"Resultado do Descadastramento " <<  csp.descadastrarUsuario(cpf) <<std::endl;

    }

    catch(std::exception &exp){
        std::cout << exp.what() << std::endl;
    }



    try{
        CntrServicoProdutosFinanceiros cspf;
        std::cout<<"Resultado do cadastramento de produto " << cspf.cadastrarProdutoInvestimento(produto) <<endl;


        vector<Produto> usu_result;
        usu_result = cspf.consultarProdutosInvestimento(classe);

        for(int i=0; i<(int)usu_result.size(); ++i){
            std::cout<<"Codigo recuperado " << usu_result[i].getCodigo().getCodigoDeProduto()<<std::endl;
            std::cout<<"Classe recuperado " << usu_result[i].getClasse().getClasse()<<std::endl;
            std::cout<<"Emissor recuperado " << usu_result[i].getEmissor().getEmissor()<<std::endl;
            std::cout<<"Prazo recuperado " << usu_result[i].getPrazo().getPrazo()<<std::endl;
            std::cout<<"Taxa recuperado " << usu_result[i].getTaxa().getTaxa()<<std::endl;
            std::cout<<"Data recuperado " << usu_result[i].getVencimento().getData()<<std::endl;
            std::cout<<"Horario recuperado " << usu_result[i].getHorario().getHorario()<<std::endl;
            std::cout<<"Valor recuperado " << usu_result[i].getValor().getValorMinimo()<<std::endl;

        }
        cspf.descadastrarProdutoInvestimento(codigo);
        std::cout<<"Resultado do Descadastramento " <<  cspf.descadastrarProdutoInvestimento(codigo) <<std::endl;

    }
    catch(EErroPersistencia &exp){
        std::cout << "Aconteceu excecao ";
        std::cout << exp.what() << std::endl;
    }

    try{

        ComandoCadastrarAplicacao cadastrar(cpf, codigo, aplicacao);
        cadastrar.executar();


        ComandoPesquisarAplicacao pesquisar(codigo);
        pesquisar.executar();

        vector<Aplicacao> usu_result;
        usu_result = pesquisar.getResultado();

        for(int i=0; i<(int)usu_result.size(); ++i){
            std::cout<<"Codigo recuperado " << usu_result[i].getCodigo().getCodigoDeAplicacao()<<std::endl;
            std::cout<<"Data recuperado " << usu_result[i].getData().getData()<<std::endl;
            std::cout<<"Valor recuperado " << usu_result[i].getValor().getValorDeAplicacao()<<std::endl;

        }

        ComandoRemoverAplicacao remover(codigo_app);
        remover.executar();
        }

    catch(EErroPersistencia &exp){
        std::cout << "Aconteceu excecao ";
        std::cout << exp.what() << std::endl;
    }




}