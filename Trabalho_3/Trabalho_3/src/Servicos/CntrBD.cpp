#include "Servicos/CntrBD.h"

list<ElementoResultado> ComandoSQL::listaResultado;

//--------------------------
// Exceções personalizadas.
//--------------------------

EErroPersistencia::EErroPersistencia(string mensagem){
        this->mensagem = mensagem;
}

string EErroPersistencia::what() {
        return mensagem;
}

ENaoExisteNoBanco::ENaoExisteNoBanco(string mensagem){
        this->mensagem = mensagem;
}

string ENaoExisteNoBanco::what() {
        return mensagem;
}

EErroDeQuery::EErroDeQuery(string mensagem){
        this->mensagem = mensagem;
}

string EErroDeQuery::what() {
        return mensagem;
}



//-------------------------------
// Interação com banco de dados.
//-------------------------------
void ElementoResultado::setNomeColuna(const string& nomeColuna) {
        this->nomeColuna = nomeColuna;
}

void ElementoResultado::setValorColuna(const string& valorColuna){
        this->valorColuna = valorColuna;
}

string ElementoResultado::getNomeColuna() const {
        return nomeColuna;
}

string ElementoResultado::getValorColuna() const {
        return valorColuna;
}


void ComandoSQL::conectar() {
      rc = sqlite3_open(nomeBancoDados, &bd);
      if( rc != SQLITE_OK )
        throw EErroPersistencia("Erro na conexao ao banco de dados");
}

void ComandoSQL::desconectar() {
      rc =  sqlite3_close(bd);
      if( rc != SQLITE_OK )
        throw EErroPersistencia("Erro na desconexao ao banco de dados");
}

void ComandoSQL::executar() {
        conectar();
        rc = sqlite3_exec(bd, comandoSQL.c_str(), callback, 0, &mensagem);
        if(rc != SQLITE_OK){
                sqlite3_free(mensagem);
                desconectar();
                throw EErroPersistencia("Erro na execucao do comando SQL");
        }
        desconectar();
}

int ComandoSQL::callback(void *NotUsed, int argc, char **valorColuna, char **nomeColuna){

      NotUsed=0;
      ElementoResultado elemento;
      int i;
      for(i=0; i<argc; i++){
        elemento.setNomeColuna(nomeColuna[i]);
        elemento.setValorColuna(valorColuna[i] ? valorColuna[i]: "NULL");
        listaResultado.push_front(elemento);
      }
      return 0;
}



//----------------------------------------
//Classes que interagem com tabela usuario
//----------------------------------------

ComandoPesquisarDadosUsuario::ComandoPesquisarDadosUsuario(CPF cpf) {
        comandoSQL = "SELECT * FROM usuario WHERE CPF = '";
        comandoSQL += cpf.getCPF()+"'";
}

Usuario ComandoPesquisarDadosUsuario::getResultado() {
        ElementoResultado resultado;
        Usuario usuario;

        if (listaResultado.empty()){
            throw ENaoExisteNoBanco("Nao usuario com esse CPF.");
        }
        if (listaResultado.size()>5){
            listaResultado.clear();
            throw EErroDeQuery("Mais de um usuario com esse CPF.");
        }

        resultado = listaResultado.back();
        listaResultado.pop_back();
        Nome nome(resultado.getValorColuna());
        usuario.setNome(nome);

        resultado = listaResultado.back();
        listaResultado.pop_back();
        Endereco endereco(resultado.getValorColuna());
        usuario.setEndereco(endereco);

        resultado = listaResultado.back();
        listaResultado.pop_back();
        CEP cep(std::stoi(resultado.getValorColuna()));
        usuario.setCEP(cep);

        resultado = listaResultado.back();
        listaResultado.pop_back();
        CPF cpf(resultado.getValorColuna());
        usuario.setCPF(cpf);

        resultado = listaResultado.back();
        listaResultado.pop_back();
        Senha senha(resultado.getValorColuna());
        usuario.setSenha(senha);

        return usuario;

}

ComandoCadastrarUsuario::ComandoCadastrarUsuario(Usuario usuario) {
        comandoSQL = "INSERT INTO usuario (Nome, Endereco, CEP, CPF, Senha) VALUES (";
        comandoSQL += "'" + usuario.getNome().getNome() + "', ";
        comandoSQL += "'" + usuario.getEndereco().getEndereco() + "', ";
        comandoSQL += std::to_string(usuario.getCEP().getCEP()) + ", ";
        comandoSQL += "'" + usuario.getCPF().getCPF() + "', ";
        comandoSQL += "'" + usuario.getSenha().getSenha() + "')";
}

ComandoRemoverUsuario::ComandoRemoverUsuario(CPF cpf) {
        comandoSQL = "DELETE FROM usuario WHERE CPF = '";
        comandoSQL += cpf.getCPF()+"'";
}



//----------------------------------------
//Classes que interagem com tabela conta
//----------------------------------------

ComandoPesquisarDadosConta::ComandoPesquisarDadosConta(CPF cpf) {
        comandoSQL = "SELECT * FROM conta WHERE CPF = '";
        comandoSQL += cpf.getCPF()+"'";
}

Conta ComandoPesquisarDadosConta::getResultado() {
        ElementoResultado resultado;
        Conta conta;

        if (listaResultado.empty()){
            throw ENaoExisteNoBanco("Nao usuario com esse CPF.");
        }
        if (listaResultado.size()>4){
            listaResultado.clear();
            throw EErroDeQuery("Mais de uma conta com esse CPF.");
        }

        resultado = listaResultado.back();
        listaResultado.pop_back();
        CPF cpf(resultado.getValorColuna());


        resultado = listaResultado.back();
        listaResultado.pop_back();
        CodigoDeBanco banco(resultado.getValorColuna());
        conta.setBanco(banco);

        resultado = listaResultado.back();
        listaResultado.pop_back();
        CodigoDeAgencia agencia(resultado.getValorColuna());
        conta.setAgencia(agencia);

        resultado = listaResultado.back();
        listaResultado.pop_back();
        Numero numero(resultado.getValorColuna());
        conta.setNumero(numero);

        return conta;
}

ComandoCadastrarConta::ComandoCadastrarConta(CPF cpf, Conta conta) {
        comandoSQL = "INSERT INTO conta (CPF, CodigoDeBanco, CodigoDeAgencia, Numero) VALUES (";
        comandoSQL += "'" + cpf.getCPF() + "', ";
        comandoSQL += "'" + conta.getBanco().getCodigoDeBanco() + "', ";
        comandoSQL += "'" + conta.getAgencia().getCodigoDeAgencia() + "', ";
        comandoSQL += "'" + conta.getNumero().getNumero() + "')";
}

ComandoRemoverConta::ComandoRemoverConta(CPF cpf) {
        comandoSQL = "DELETE FROM conta WHERE CPF = '";
        comandoSQL += cpf.getCPF()+"'";
}



//----------------------------------------
//Classes que interagem com tabela produto
//----------------------------------------

ComandoPesquisarProdutos::ComandoPesquisarProdutos(Classe classe) {
        comandoSQL = "SELECT * FROM produto WHERE Classe = '";
        comandoSQL += classe.getClasse()+"'";
}

ComandoPesquisarProdutos::ComandoPesquisarProdutos(CodigoDeProduto codigo) {
        comandoSQL = "SELECT * FROM produto WHERE CodigoDeProduto = '";
        comandoSQL += codigo.getCodigoDeProduto()+"'";
}

vector<Produto> ComandoPesquisarProdutos::getResultado() {
        ElementoResultado resultado;
        vector<Produto> prod_list;
        Produto produto;

        if (listaResultado.empty()){
            throw ENaoExisteNoBanco("Nao há produtos cadastrados.");
        }
        if (listaResultado.size()%8 != 0){
            listaResultado.clear();
            throw EErroDeQuery("Dados de produtos no banco incorretos.");
        }

        while(!listaResultado.empty()){

            resultado = listaResultado.back();
            listaResultado.pop_back();
            CodigoDeProduto codigo(resultado.getValorColuna());
            produto.setCodigo(codigo);

            resultado = listaResultado.back();
            listaResultado.pop_back();
            Classe classe(resultado.getValorColuna());
            produto.setClasse(classe);

            resultado = listaResultado.back();
            listaResultado.pop_back();
            Emissor emissor(resultado.getValorColuna());
            produto.setEmissor(emissor);

            resultado = listaResultado.back();
            listaResultado.pop_back();
            Prazo prazo(std::stoi(resultado.getValorColuna()));
            produto.setPrazo(prazo);

            resultado = listaResultado.back();
            listaResultado.pop_back();
            Taxa taxa(std::stof(resultado.getValorColuna()));
            produto.setTaxa(taxa);

            resultado = listaResultado.back();
            listaResultado.pop_back();
            Data data(resultado.getValorColuna());
            produto.setVencimento(data);

            resultado = listaResultado.back();
            listaResultado.pop_back();
            Horario horario(resultado.getValorColuna());
            produto.setHorario(horario);

            resultado = listaResultado.back();
            listaResultado.pop_back();
            ValorMinimo valor(std::stof(resultado.getValorColuna()));
            produto.setValor(valor);

            prod_list.push_back(produto);

        }

        return prod_list;
}

ComandoCadastrarProduto::ComandoCadastrarProduto(Produto produto) {
        comandoSQL = "INSERT INTO produto (CodigoDeProduto, Classe, Emissor, Prazo, Taxa, Data, Horario, ValorMinimo) VALUES (";
        comandoSQL += "'" + produto.getCodigo().getCodigoDeProduto() + "', ";
        comandoSQL += "'" + produto.getClasse().getClasse() + "', ";
        comandoSQL += "'" + produto.getEmissor().getEmissor() + "', ";
        comandoSQL +=  std::to_string(produto.getPrazo().getPrazo()) + ", ";
        comandoSQL +=  std::to_string(produto.getTaxa().getTaxa()) + ", ";
        comandoSQL += "'" + produto.getVencimento().getData() + "', ";
        comandoSQL += "'" + produto.getHorario().getHorario() + "', ";
        comandoSQL +=  std::to_string(produto.getValor().getValorMinimo()) + ")";
}

ComandoRemoverProduto::ComandoRemoverProduto(CodigoDeProduto codigo) {
        comandoSQL = "DELETE FROM produto WHERE CodigoDeProduto = '";
        comandoSQL += codigo.getCodigoDeProduto()+"'";
}


//------------------------------------------
//Classes que interagem com tabela aplicacao
//------------------------------------------


ComandoPesquisarAplicacao::ComandoPesquisarAplicacao(CodigoDeProduto codigo) {
        comandoSQL = "SELECT * FROM aplicacao WHERE CodigoDeProduto = '";
        comandoSQL += codigo.getCodigoDeProduto()+"'";
}

ComandoPesquisarAplicacao::ComandoPesquisarAplicacao(CPF cpf) {
        comandoSQL = "SELECT * FROM aplicacao WHERE CPF = '";
        comandoSQL += cpf.getCPF()+"'";
}


ComandoPesquisarAplicacao::ComandoPesquisarAplicacao(Aplicacao aplicacao) {
        comandoSQL = "SELECT * FROM aplicacao WHERE CodigoDeAplicacao = '";
        comandoSQL += aplicacao.getCodigo().getCodigoDeAplicacao()+"'";
}

vector<Aplicacao> ComandoPesquisarAplicacao::getResultado() {
        ElementoResultado resultado;
        vector<Aplicacao> apli_list;
        Aplicacao aplicacao;

        if (listaResultado.empty()){
            throw ENaoExisteNoBanco("Nao há produtos cadastrados.");
        }
        if (listaResultado.size()%5 != 0){
            listaResultado.clear();
            throw EErroDeQuery("Dados de produtos no banco incorretos.");
        }

        while(!listaResultado.empty()){
            resultado = listaResultado.back();
            listaResultado.pop_back();
            CPF cpf(resultado.getValorColuna());

            resultado = listaResultado.back();
            listaResultado.pop_back();
            CodigoDeProduto codigo_prod(resultado.getValorColuna());

            resultado = listaResultado.back();
            listaResultado.pop_back();
            CodigoDeAplicacao codigo(resultado.getValorColuna());
            aplicacao.setCodigo(codigo);

            resultado = listaResultado.back();
            listaResultado.pop_back();
            ValorDeAplicacao valor(std::stof(resultado.getValorColuna()));
            aplicacao.setValor(valor);

            resultado = listaResultado.back();
            listaResultado.pop_back();
            Data data(resultado.getValorColuna());
            aplicacao.setData(data);

            apli_list.push_back(aplicacao);

        }

        return apli_list;
}

ComandoCadastrarAplicacao::ComandoCadastrarAplicacao(CPF cpf, CodigoDeProduto codigo, Aplicacao aplicacao) {
        comandoSQL = "INSERT INTO aplicacao (CPF, CodigoDeProduto, CodigoDeAplicacao, ValorDeAplicacao, Data) VALUES (";
        comandoSQL += "'" + cpf.getCPF() + "', ";
        comandoSQL += "'" + codigo.getCodigoDeProduto() + "', ";
        comandoSQL += "'" + aplicacao.getCodigo().getCodigoDeAplicacao() + "', ";
        comandoSQL +=  std::to_string(aplicacao.getValor().getValorDeAplicacao()) + ", ";
        comandoSQL += "'" + aplicacao.getData().getData() + "') ";
}

ComandoRemoverAplicacao::ComandoRemoverAplicacao(CodigoDeAplicacao codigo) {
        comandoSQL = "DELETE FROM aplicacao WHERE CodigoDeAplicacao = '";
        comandoSQL += codigo.getCodigoDeAplicacao()+"'";
}

ComandoRemoverAplicacao::ComandoRemoverAplicacao(CPF cpf) {
        comandoSQL = "DELETE FROM aplicacao WHERE CPF = '";
        comandoSQL += cpf.getCPF()+"'";
}


