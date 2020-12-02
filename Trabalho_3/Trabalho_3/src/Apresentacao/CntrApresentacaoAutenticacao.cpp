#include "Apresentacao/CntrApresentacaoAutenticacao.h"

bool CntrApresentacaoAutenticacao::autenticar(CPF *cpf){

    // Mensagens a serem apresentadas na tela de autentica��o.

    char texto1[]="Digite o CPF  : ";
    char texto2[]="Digite a senha: ";
    char texto3[]="Dado em formato incorreto. Pressione qualquer tecla para tentar novamente.";
    char texto4[]="Senha incorreta. Pressione qualquer tecla para sair.";
    char texto5[]="Usuario nao cadastrado. Pressione qualquer tecla para sair.";

    // Campos de entrada.

    char campo1[80];
    char campo2[80];

    int linha,coluna;                                   // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);                      // Armazena quantidade de linhas e colunas.

    Senha senha;                                        // Instancia a classe Senha.

    echo();                                             // Habilita eco.

    while(true){

        // Apresenta tela de autentica��o.

        clear();                                        // Limpa janela.
        mvprintw(linha/4,coluna/4,"%s",texto1);         // Imprime nome do campo.
        getstr(campo1);                                 // L� valor do campo.
        mvprintw(linha/4 + 2,coluna/4,"%s",texto2);     // Imprime nome do campo.
        getstr(campo2);                                 // L� valor do campo.

        try{
            cpf->setCPF(string(campo1));                // Atribui valor ao CPF.
            senha.setSenha(string(campo2));             // Atribui Valor � senha.
            break;                                      // Abandona la�o em caso de formatos corretos.
        }
        catch(invalid_argument &exp){                   // Captura exce��o devido a formato incorreto.
            clear();                                    // Limpa janela.
            mvprintw(linha/4,coluna/4 - 6,"%s",texto3); // Informa formato incorreto.
            noecho();
            getch();                                    // L� caracter digitado.
            echo();
        }
    }
    try{
        switch(cntr->autenticar(*cpf, senha)){
            case 0:
                return true;
            case 1:
                clear();                                    // Limpa janela.
                mvprintw(linha/4,coluna/4+2,"%s",texto4);   // Informa senha incorreta.
                noecho();
                getch();                                    // L� caracter digitado.
                echo();
                return false;
            case 2:
                clear();                                    // Limpa janela.
                mvprintw(linha/4,coluna/4,"%s",texto5);     // Informa usu�rio n�o cadastrado.
                noecho();
                getch();                                    // L� caracter digitado.
                echo();
                return false;
        }
    }
    catch(...){
    }
    return false;
}

