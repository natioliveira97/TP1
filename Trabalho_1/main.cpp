#include <iostream>

#include <TestHorario.h>
#include <TestPrazo.h>
#include <BaseTest.h>
#include <vector>



/**
* @author Lívia Gomes Costa Fonseca <br>
* @author Natalia Oliveira Borges - 16/0015863
*/

using namespace std;

int main()
{

    std::vector<BaseTest*> v;
    v.push_back(new TestPrazo());
    v.push_back(new TestHorario());

    for(int i = 0; i < v.size(); ++i){
        std::cout << v[i]->run() << std::endl;
    }

    return 0;
}
