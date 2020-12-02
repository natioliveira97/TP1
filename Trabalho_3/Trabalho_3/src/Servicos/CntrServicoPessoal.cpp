#include "Servicos/CntrServicoPessoal.h"

int CntrServicoPessoal::cadastrarUsuario(Usuario usuario, Conta conta){

    try{
        ComandoPesquisarDadosUsuario pesquisar(usuario.getCPF());
        pesquisar.executar();

        Usuario usu_retornado;
        usu_retornado = pesquisar.getResultado();

        return 1;
    }
    catch(ENaoExisteNoBanco &exp){
    }

    if(cadastrarConta(usuario.getCPF(), conta)==0){
        ComandoCadastrarUsuario cadastrar(usuario);
        cadastrar.executar();
    }
    else{
        return 2;
    }
    return 0;
}

int CntrServicoPessoal::descadastrarUsuario(CPF cpf){

    try{
        ComandoPesquisarDadosUsuario pesquisar(cpf);
        pesquisar.executar();

        Usuario usu_retornado;
        usu_retornado = pesquisar.getResultado();

        if(descadastrarConta(cpf)!=0){
            throw EErroPersistencia("Erro ao descadastrar conta");
        }

        ComandoRemoverAplicacao remove_apli(cpf);
        remove_apli.executar();

        ComandoRemoverUsuario remover(cpf);
        remover.executar();
    }
    catch(ENaoExisteNoBanco &exp){
        return 1;
    }
    return 0;
}

Usuario CntrServicoPessoal::consultarUsuario(CPF cpf){

    ComandoPesquisarDadosUsuario pesquisar(cpf);
    pesquisar.executar();
    return pesquisar.getResultado();
}

int CntrServicoPessoal::cadastrarConta(CPF cpf, Conta conta){

    try{
        ComandoPesquisarDadosConta pesquisar(cpf);
        pesquisar.executar();

        Conta conta_retornada;
        conta_retornada = pesquisar.getResultado();
        return 1;
    }
    catch(ENaoExisteNoBanco &exp){
    }
    ComandoCadastrarConta cadastrar(cpf, conta);
    cadastrar.executar();
    return 0;
}

int CntrServicoPessoal::descadastrarConta(CPF cpf){

    try{
        ComandoPesquisarDadosConta pesquisar(cpf);
        pesquisar.executar();

        Conta conta_retornada;

        conta_retornada = pesquisar.getResultado();

        ComandoRemoverConta remover(cpf);
        remover.executar();
    }
    catch(ENaoExisteNoBanco &exp){
        return 1;
    }

    return 0;
}

Conta CntrServicoPessoal::consultarConta(CPF cpf){

    ComandoPesquisarDadosConta pesquisar(cpf);
    pesquisar.executar();
    return pesquisar.getResultado();

}
