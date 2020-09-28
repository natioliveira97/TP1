#include <iostream>

#include "TestCEP.h"
#include "TestClasse.h"
#include "TestCodigoDeAgencia.h"
#include "TestCodigoDeAplicacao.h"
#include "TestCodigoDeBanco.h"
#include "TestCodigoDeProduto.h"
#include "TestCPF.h"
#include "TestData.h"
#include "TestEmissor.h"
#include "TestEndereco.h"
#include "TestHorario.h"
#include "TestNome.h"
#include "TestNumero.h"
#include "TestPrazo.h"
#include "TestSenha.h"
#include "TestTaxa.h"
#include "TestValorDeAplicacao.h"
#include "TestValorMinimo.h"
#include "BaseTest.h"
#include <vector>


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
    test_vector.push_back(new TestCEP());
    test_vector.push_back(new TestClasse());
    test_vector.push_back(new TestCodigoDeAgencia());
    test_vector.push_back(new TestCodigoDeAplicacao());
    test_vector.push_back(new TestCodigoDeBanco());
    test_vector.push_back(new TestCodigoDeProduto());
    test_vector.push_back(new TestCPF());
    test_vector.push_back(new TestData());
    test_vector.push_back(new TestEmissor());
    test_vector.push_back(new TestEndereco());
    test_vector.push_back(new TestHorario());
    test_vector.push_back(new TestNome());
    test_vector.push_back(new TestNumero());
    test_vector.push_back(new TestPrazo());
    test_vector.push_back(new TestSenha());
    test_vector.push_back(new TestTaxa());
    test_vector.push_back(new TestValorDeAplicacao());
    test_vector.push_back(new TestValorMinimo());

    for(int i = 0; i < test_vector.size(); ++i){
        std::cout << "Teste realizado na classe " << test_vector[i]->nome_dominio << " retornou: ";
        if(test_vector[i]->run() == test_vector[i]->SUCESSO){
            std::cout << "SUCESSO." << std::endl;
        }
        else{
            std::cout << "FALHA." << std::endl;
        }

    }

    return 0;
}
