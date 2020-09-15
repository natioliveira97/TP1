#include <iostream>

#include <TestHorario.h>
#include <TestPrazo.h>



/**
* @author Lívia Gomes Costa Fonseca <br>
* @author Natalia Oliveira Borges - 16/0015863
*/

using namespace std;

int main()
{
    TestHorario test = TestHorario();
    //TestPrazo test = TestPrazo();
    test.run();

    return 0;
}
