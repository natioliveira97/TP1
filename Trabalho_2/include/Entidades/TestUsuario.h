#ifndef TESTUSUARIO_H
#define TESTUSUARIO_H

#include "Entidades/BaseTest.h"
#include "Entidades/Usuario.h"
#include <Dominios/Nome.h>
#include <Dominios/Endereco.h>
#include <Dominios/CEP.h>
#include <Dominios/CPF.h>
#include <Dominios/Senha.h>
#include <string.h>


class TestUsuario : public BaseTest{
    public:
        TestUsuario();
        ~TestUsuario();

        int run();

    private:
        std::string nome_valido = "Maria Souza";
        std::string endereco_valido = "Rua 5 Bl.A Apto 503.";
        int cep_valido = 70999950;
        std::string cpf_valido = "035.578.911-60";
        std::string senha_valida = "123456";


        int estado;
        Usuario *usuario;

        void testNomeValido();
        void testEnderecoValido();
        void testCEPValido();
        void testCPFValido();
        void testSenhaValida();



};



#endif // TESTUSUARIO_H
