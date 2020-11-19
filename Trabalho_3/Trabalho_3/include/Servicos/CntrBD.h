#ifndef CNTRBD_H
#define CNTRBD_H

#include "Servicos/sqlite3.h"
#include <string>
#include <list>
#include <vector>
#include <exception>

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

using namespace std;
class EErroPersistencia: public exception {
private:
        string mensagem;
public:
        EErroPersistencia(string);
        string what();
};

class ENaoExisteNoBanco: public exception {
private:
        string mensagem;
public:
        ENaoExisteNoBanco(string);
        string what();
};

class EErroDeQuery: exception{
private:
        string mensagem;
public:
        EErroDeQuery(string);
        string what();
};

class ElementoResultado{
private:
        string nomeColuna;
        string valorColuna;
public:
        void setNomeColuna(const string&);
        string getNomeColuna() const;
        void setValorColuna(const string&);
        string getValorColuna() const;
};

class ComandoSQL {
private:
        const char *nomeBancoDados;
        sqlite3 *bd;
        char *mensagem;
        int rc;
        void conectar();
        void desconectar();
        static int callback(void *, int, char **, char **);

protected:
        static list<ElementoResultado> listaResultado;
        string comandoSQL;
public:
        ComandoSQL() {
             nomeBancoDados = "data.db";                             //Informa o nome do banco de dados.
        }
        void executar();
};

//---------------------------------------------------------------------------
//Classe ComandoLerSenha.

class ComandoLerSenha:public ComandoSQL {
public:
        ComandoLerSenha(CPF);
        string getResultado();
};


//---------------------------------------------------------------------------
//Classe ComandoPesquisarDadosUsuario.

class ComandoPesquisarDadosUsuario:public ComandoSQL {
public:
        ComandoPesquisarDadosUsuario(CPF);
        Usuario getResultado();
};


//---------------------------------------------------------------------------
//Classe ComandoCadastrarAluno.

class ComandoCadastrarUsuario:public ComandoSQL {
public:
        ComandoCadastrarUsuario(Usuario);
};

/*
//---------------------------------------------------------------------------
//Classe ComandoAtualizarAluno.

class ComandoAtualizarAluno:public ComandoSQL {
public:
        ComandoAtualizarAluno(Aluno);
};
*/

//---------------------------------------------------------------------------
//Classe ComandoRemoverAluno.

class ComandoRemoverUsuario:public ComandoSQL {
public:
        ComandoRemoverUsuario(CPF);
};


//---------------------------------------------------------------------------
//Classe ComandoCadastrarDisciplina.

class ComandoPesquisarDadosConta:public ComandoSQL {
public:
        ComandoPesquisarDadosConta(CPF);
        Conta getResultado();
};

class ComandoCadastrarConta:public ComandoSQL {
public:
        ComandoCadastrarConta(CPF, Conta);
};

class ComandoRemoverConta:public ComandoSQL {
public:
        ComandoRemoverConta(CPF);
};


class ComandoPesquisarProdutos:public ComandoSQL {
public:
        ComandoPesquisarProdutos(CPF);
        ComandoPesquisarProdutos(Classe);
        ComandoPesquisarProdutos(CodigoDeProduto);
        vector<Produto> getResultado();
};



class ComandoCadastrarProduto:public ComandoSQL {
public:
        ComandoCadastrarProduto(Produto);
};

class ComandoRemoverProduto:public ComandoSQL {
public:
        ComandoRemoverProduto(CodigoDeProduto);
};

class ComandoPesquisarAplicacao:public ComandoSQL {
public:
        ComandoPesquisarAplicacao(CodigoDeAplicacao);
        vector<Aplicacao> getResultado();
};



class ComandoCadastrarAplicacao:public ComandoSQL {
public:
        ComandoCadastrarAplicacao(CPF, Aplicacao);
};

class ComandoRemoverAplicacao:public ComandoSQL {
public:
        ComandoRemoverAplicacao(CodigoDeAplicacao);
};





#endif // CNTRBD_H
