#include "Nome.h"

Nome::Nome()
{
    nome = "";
}


Nome::Nome(std::string nome){
    valida(nome);
    this->nome = nome;
}


std::string Nome::getNome(){
    return nome;
}


void Nome::valida(std::string nome){
    int nome_l = nome.length();
    int num = 0;

    // verifica se possui o número correto de caracteres
    if(nome_l<MIN_CARACTERE || nome_l>MAX_CARACTERE){
        throw std::invalid_argument("Nome com tamanho invalido.");
    }

    // verifica se possui 5 letras, não necessariamente em sequência
    for(char c:nome){
        if(std::isalpha(c)){
            num++;
        }
    }
    if(num<5)
        throw std::invalid_argument("Nome com tamanho invalido.");


    // verifica o formato do nome
    std::regex formato = std::regex("^[ ]?([[:upper:]][[:alpha:]]*[ ]?)*$");
    if(!std::regex_match(nome, formato)){
        throw std::invalid_argument("Nome em formato invalido.");
    }
}


void Nome::setNome(std::string nome){
    valida(nome);
    this->nome = nome;
}
