#include <iostream>

#include <CEP.h>
#include <Classe.h>
#include <CodigoDeAgencia.h>
#include <CodigoDeAplicacao.h>
#include <CodigoDeBanco.h>
#include <CodigoDeProduto.h>
#include <CPF.h>
#include <Data.h>


using namespace std;

int main()
{
     /*Data inst = Data();

     std::cout<< "set " << inst.setData("29/02/2020") <<std::endl;
     std::cout<< "get " << inst.getData() <<std::endl;
        */

    Data inst = Data ();

    try{
        inst.setData ("29/02/20200");
        std::cout<< "get " << inst.getData() <<std::endl;
        std::cout<< "banco " << inst.getData() <<std::endl;
    }
    catch (invalid_argument &exp){
        std::cout<< exp.what() <<std::endl;
    }

    return 0;
}
