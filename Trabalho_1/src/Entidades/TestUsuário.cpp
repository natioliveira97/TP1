#include "Entidades/TestUsuario.h"

TestUsuario::TestUsuario(){
    //usuario = new Usuario();
    estado = SUCESSO;
    nome_entidade = "Usuario";

}

TestUsuario::~TestUsuario() {}


int TestUsuario::run(){
    return estado;
}
