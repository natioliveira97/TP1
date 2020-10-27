#ifndef USUARIO_H
#define USUARIO_H

#include "Entidades/BaseTest.h"
#include "Entidades/Usuario.h"
#include <Dominios/Nome.h>
#include <Dominios/Endereco.h>
#include <Dominios/CEP.h>
#include <Dominios/CPF.h>
#include <Dominios/Senha.h>



class TestUsuario : public BaseTest{
    public:
        TestUsuario();
        ~TestUsuario();

        int run();

    private:
        int estado;
        //Usuario *usuario;

};



#endif // USUARIO_H
