#include <iostream>
#include <vector>

#include "Entidades/TestProduto.h"
#include "Entidades/BaseTest.h"



/**
* @file main.c
*/

/** @mainpage Documentação de Plataforma de Investimentos (Parte 1)
 *
 *  @author Lívia Gomes Costa Fonseca - 16/0034078
 *  @author Natalia Oliveira Borges - 16/0015863
 *
 *  Essa documentação é referente à primeira parte de um projeto de plataforma de investimentos que engloba implementação,
 *  teste e documentação das classes de domínios:
 *  - CEP
 *  - Classe
 *  - CodigoDeAgencia
 *  - CodigoDeAplicacao
 *  - CodigoDeBanco
 *  - CodigoDeProduto
 *  - CPF
 *  - Data
 *  - Emissor
 *  - Endereco
 *  - Horario
 *  - Nome
 *  - Numero
 *  - Prazo
 *  - Senha
 *  - Taxa
 *  - ValorDeAplicacao
 *  - ValorMinimo
 *
 *
 */

using namespace std;

int main()
{

    std::vector<BaseTest*> test_vector;
    test_vector.push_back(new TestProduto());

    for(int i = 0; i < test_vector.size(); ++i){
        std::cout << "Teste realizado na classe " << test_vector[i]->nome_entidade << " retornou: ";
        if(test_vector[i]->run() == test_vector[i]->SUCESSO){
            std::cout << "SUCESSO." << std::endl;
        }
        else{
            std::cout << "FALHA." << std::endl;
        }
    }

    while(test_vector.size() > 0){
        delete(test_vector[test_vector.size()-1]);
        test_vector.pop_back();
    }

    return 0;
}
