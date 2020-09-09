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
    if(nome.length()<MIN_CARACTERE || nome.length()>MAX_CARACTERE){
        throw std::invalid_argument("Nome com tamanho invalido.");
    }

    // O primeiro nome deve ter pelo menos 5 letras, isso até eu descobrir como faz de outra forma
    std::regex formato = std::regex("^[ ]?([[:upper:]][[:alpha:]]{4,}[ ]?)([[:upper:]][[:alpha:]]*[ ]?)*$");
    if(std::regex_match(nome, formato)){
        return;
    }
    throw std::invalid_argument("Nome em formato invalido.");
}


void Nome::setNome(std::string nome){
    valida(nome);
    this->nome = nome;
}
