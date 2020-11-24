#include "Servicos/CntrServicos.h"


int CntrServicoAutenticacao::autenticar(CPF cpf, Senha senha){
    try{
        Usuario usuario;
        ComandoPesquisarDadosUsuario pesquisar(cpf);
        pesquisar.executar();
        usuario = pesquisar.getResultado();

        if(usuario.getSenha().getSenha() == senha.getSenha()){
            return 0;
        }
        else{
            return 1;
        }
    }
    catch(ENaoExisteNoBanco &exp){
        return 2;
    }
}


int CntrServicoPessoal::cadastrarUsuario(Usuario usuario){


}
in
