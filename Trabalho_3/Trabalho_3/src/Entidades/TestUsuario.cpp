#include "Entidades/TestUsuario.h"

TestUsuario::TestUsuario(){
    usuario = new Usuario();
    estado = SUCESSO;
    nome_entidade = "Usuario";
}

TestUsuario::~TestUsuario(){
    testNomeValido();
    testEnderecoValido();
    testCEPValido();
    testCPFValido();
    testSenhaValida();
    delete usuario;
}


int TestUsuario::run(){
    return estado;
}

void TestUsuario::testNomeValido(){
    try{
        Nome nome = Nome(nome_valido);
        usuario->setNome(nome);
        if(usuario->getNome().getNome() != nome_valido){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestUsuario::testEnderecoValido(){
    try{
        Endereco endereco = Endereco(endereco_valido);
        usuario->setEndereco(endereco);
        if(usuario->getEndereco().getEndereco() != endereco_valido){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestUsuario::testCEPValido(){
    try{
        CEP cep = CEP(cep_valido);
        usuario->setCEP(cep);
        if(usuario->getCEP().getCEP() != cep_valido){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestUsuario::testCPFValido(){
    try{
        CPF cpf = CPF(cpf_valido);
        usuario->setCPF(cpf);
        if(usuario->getCPF().getCPF() != cpf_valido){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}

void TestUsuario::testSenhaValida(){
    try{
        Senha senha = Senha(senha_valida);
        usuario->setSenha(senha);
        if(usuario->getSenha().getSenha() != senha_valida){
            estado = FALHA;
        }
    }
    catch(std::invalid_argument &exp){
        estado = FALHA;
    }
}
