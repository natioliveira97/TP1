#include "Apresentacao/CntrApresentacaoPessoal.h"

bool CntrApresentacaoPessoal::executar(CPF cpf){

    // Mensagens a serem apresentadas na tela de seleção de serviço..

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Consultar dados pessoais.";
    char texto3[]="2 - Consultar conta.";
    char texto4[]="3 - Descadastrar.";
    char texto5[]="4 - Retornar.";

    int campo;                                                                                  // Campo de entrada.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    bool apresentar = true;
    bool descadastrado = false;                                                                    // Controle de laço.

    echo();                                                                                     // Habilita eco.

    while(apresentar){

        // Apresenta tela de selação de serviço.

        clear();                                                                                // Limpa janela.
        mvprintw(linha/4,coluna/4,"%s",texto1);                                                 // Imprime nome do campo.
        mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 6,coluna/4,"%s",texto4);
        mvprintw(linha/4 + 8,coluna/4,"%s",texto5);
        noecho();
        campo = getch() - 48;                                                                   // Leitura do campo de entrada e conversão de ASCII.
        echo();

        switch(campo){
            case 1: consultarDadosPessoais(cpf);
                    break;
            case 2: consultarConta(cpf);
                    break;
            case 3: descadastrado = descadastrar(cpf);
                    if(descadastrado)
                        apresentar = false;
                    break;
            case 4: apresentar = false;
                    break;
        }
    }
    return descadastrado;
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoPessoal::cadastrar(){

    // Mensagens a serem apresentadas na tela de cadastramento.

    char texto1[] ="Preencha os seguintes campos: ";
    char texto2[] ="Nome            :";
    char texto3[] ="Endereco        :";
    char texto4[] ="CEP             :";
    char texto5[] ="CPF             :";
    char texto6[] ="Senha           :";
    char texto7[] ="Numero de conta :";
    char texto8[] ="Agencia         :";
    char texto9[] ="Banco           :";
    char texto10[]="Dado em formato incorreto. Preencha o campo novamente";
    char texto11[]="Sucesso no cadastramento. Digite algo.";
    char texto12[]="Falha no cadastramento. Digite algo.";
    char texto13[]="Falha no cadastramento, o usuario existente. Digite algo.";


    char campo1[80], campo2[80], campo3[80], campo4[80], campo5[80];                            // Cria campos para entrada dos dados.
    char campo6[80], campo7[80], campo8[80];                                                    // Cria campos para entrada dos dados.

    // Instancia os domínios.

    Nome nome;
    Endereco endereco;
    CEP cep;
    CPF cpf;
    Senha senha;
    Numero numero;
    CodigoDeAgencia agencia;
    CodigoDeBanco banco;

    int linha,coluna;                                                          // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);                                             // Armazena quantidade de linhas e colunas.

    // Apresenta tela de cadastramento.

    clear();                                                                   // Limpa janela.
    mvprintw(linha/4,coluna/4,"%s",texto1);
    while(true){
        try{
            mvprintw(linha/4 + 2,coluna/4,"%s",texto2);
            clrtoeol();
            getstr(campo1);
            nome.setNome(string(campo1));
            break;
        }
        catch(invalid_argument &exp){
            mvprintw(linha/4 + 4,coluna/4,"%s",texto10);                      // Informa formato incorreto.
        }
    }
    while(true){
        try{
            mvprintw(linha/4 + 4,coluna/4,"%s",texto3);
            clrtoeol();
            getstr(campo2);
            endereco.setEndereco(string(campo2));
            break;
        }
        catch(invalid_argument &exp){
            mvprintw(linha/4 + 6,coluna/4,"%s",texto10);                    // Informa formato incorreto.
        }
    }
    while(true){
        try{
            mvprintw(linha/4 + 6,coluna/4,"%s",texto4);
            clrtoeol();
            getstr(campo3);
            cep.setCEP(stoi(campo3));
            break;
        }
        catch(invalid_argument &exp){
            mvprintw(linha/4 + 8,coluna/4,"%s",texto10);                    // Informa formato incorreto.
        }
    }
    while(true){
        try{
            mvprintw(linha/4 + 8,coluna/4,"%s",texto5);
            clrtoeol();
            getstr(campo4);
            cpf.setCPF(string(campo4));
            break;
        }
        catch(invalid_argument &exp){
            mvprintw(linha/4 + 10,coluna/4,"%s",texto10);                   // Informa formato incorreto.
        }
    }
    while(true){
        try{
            mvprintw(linha/4 + 10,coluna/4,"%s",texto6);
            clrtoeol();
            getstr(campo5);
            senha.setSenha(string(campo5));
            break;
        }
        catch(invalid_argument &exp){
            mvprintw(linha/4 + 12,coluna/4,"%s",texto10);                   // Informa formato incorreto.
        }
    }
    while(true){
        try{
            mvprintw(linha/4 + 12,coluna/4,"%s",texto7);
            clrtoeol();
            getstr(campo6);
            numero.setNumero(string(campo6));
            break;
        }
        catch(invalid_argument &exp){
            mvprintw(linha/4 + 14,coluna/4,"%s",texto10);                   // Informa formato incorreto.
        }
    }
    while(true){
        try{
            mvprintw(linha/4 + 14,coluna/4,"%s",texto8);
            clrtoeol();
            getstr(campo7);
            agencia.setCodigoDeAgencia(string(campo7));
            break;
        }
        catch(invalid_argument &exp){
            mvprintw(linha/4 + 16,coluna/4,"%s",texto10);                   // Informa formato incorreto.
        }
    }
    while(true){
        try{
            mvprintw(linha/4 + 16,coluna/4,"%s",texto9);
            clrtobot();
            getstr(campo8);
            banco.setCodigoDeBanco(string(campo8));
            break;
        }
        catch(invalid_argument &exp){
            mvprintw(linha/4 + 18,coluna/4,"%s",texto10);                   // Informa formato incorreto.
        }
    }


    // Instancia e inicializa entidades.

    Usuario usuario;

    usuario.setNome(nome);
    usuario.setEndereco(endereco);
    usuario.setCEP(cep);
    usuario.setCPF(cpf);
    usuario.setSenha(senha);

    Conta conta;

    conta.setNumero(numero);
    conta.setAgencia(agencia);
    conta.setBanco(banco);

    // Cadastra usuário e conta.

    try{
        switch(cntrServicoPessoal->cadastrarUsuario(usuario, conta)){
            case 0:
                mvprintw(linha/4 + 18,coluna/4,"%s",texto11);                               // Informa sucesso.
                noecho();
                getch();
                echo();
                return;
            case 1:
                mvprintw(linha/4 + 18,coluna/4,"%s",texto13);                               // Informa falha.
                noecho();
                getch();
                echo();
                return;
            case 2:
                mvprintw(linha/4 + 18,coluna/4,"%s",texto12);                               // Informa falha.
                noecho();
                getch();
                echo();
                return;
        }
    }
    catch(EErroPersistencia &exp){
        mvprintw(linha/4 + 18,coluna/4,"%s",texto12);
        mvprintw(linha/4 + 19,coluna/4,"%s",exp.what());
        noecho();
        getch();
        echo();
        return;
    }
    catch(EErroDeQuery &exp){
        mvprintw(linha/4 + 18,coluna/4,"%s",texto12);                                               // Informa sucesso.
        mvprintw(linha/4 + 19,coluna/4,"%s",exp.what());
        noecho();
        getch();
        echo();
        return;
    }

    return;
}

//--------------------------------------------------------------------------------------------

bool CntrApresentacaoPessoal::descadastrar(CPF cpf){

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);

    char texto1[] ="Usuario descadastrado com sucesso. Pressione qualquer tecla para sair.";
    char texto2[] ="Falha no descadrastamento, usuario possui aplicacoes vinculadas.";
    char texto3[] ="Pressione qualquer tecla para sair.";


    try{
        switch(cntrServicoPessoal->descadastrarUsuario(cpf)){
            case 0:
                clear();
                mvprintw(linha/4 + 4,coluna/4,"%s",texto1);
                clrtoeol();
                noecho();
                getch();
                echo();
                return true;
            case 2:
                clear();
                mvprintw(linha/4 + 4,coluna/4,"%s",texto2);
                clrtoeol();
                mvprintw(linha/4 + 5,coluna/4,"%s",texto3);
                clrtoeol();
                noecho();
                getch();
                echo();
                return false;
        }
    }
    catch(EErroPersistencia &exp){
        mvprintw(linha/4 + 4,coluna/4,"%s",exp.what());
        noecho();
        getch();
        echo();
        return false;
    }
    catch(EErroDeQuery &exp){
        mvprintw(linha/4 + 4,coluna/4,"%s",exp.what());
        noecho();
        getch();
        echo();
        return false;
    }
    return false;
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoPessoal::consultarDadosPessoais(CPF cpf){

    // Mensagens a serem apresentadas na tela de apresentação de dados pessoais.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    char texto1[] ="Dados Pessoais:";
    char texto2[] ="Nome            :";
    char texto3[] ="Endereco        :";
    char texto4[] ="CEP             :";
    char texto5[] ="CPF             :";
    char texto6[] ="Senha           :";
    char texto7[] ="Pressione qualquer tecla para sair.";

    Usuario usuario;
    Conta conta;

    usuario = cntrServicoPessoal->consultarUsuario(cpf);
    conta   = cntrServicoPessoal->consultarConta(cpf);

    clear();                                                                                    // Limpa janela.
    mvprintw(linha/4,coluna/4,"%s",texto1);                                                      // Imprime nome do campo.

    mvprintw(linha/4 + 2,coluna/4,"%s",texto2);
    printw(usuario.getNome().getNome().c_str());

    mvprintw(linha/4 + 4,coluna/4,"%s",texto3);
    printw(usuario.getEndereco().getEndereco().c_str());

    mvprintw(linha/4 + 6,coluna/4,"%s",texto4);
    printw(std::to_string(usuario.getCEP().getCEP()).c_str());

    mvprintw(linha/4 + 8,coluna/4,"%s",texto5);
    printw(usuario.getCPF().getCPF().c_str());

    mvprintw(linha/4 + 10,coluna/4,"%s",texto6);
    printw(usuario.getSenha().getSenha().c_str());

    mvprintw(linha/4 + 14,coluna/4,"%s",texto7);
    noecho();
    getch();
    echo();
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoPessoal::consultarConta(CPF cpf){

    // Mensagens a serem apresentadas.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    char texto1[] ="Dados da conta";
    char texto2[] ="Numero de conta :";
    char texto3[] ="Agencia         :";
    char texto4[] ="Banco           :";
    char texto5[] ="Pressione qualquer tecla para sair.";

    Conta conta;
    conta = cntrServicoPessoal->consultarConta(cpf);

    clear();
    mvprintw(linha/4,coluna/4,"%s",texto1);

    mvprintw(linha/4 + 2,coluna/4,"%s",texto2);
    printw(conta.getNumero().getNumero().c_str());

    mvprintw(linha/4 + 4,coluna/4,"%s",texto3);
    printw(conta.getAgencia().getCodigoDeAgencia().c_str());

    mvprintw(linha/4 + 6,coluna/4,"%s",texto4);
    printw(conta.getBanco().getBanco().c_str());

    mvprintw(linha/4 + 10,coluna/4,"%s",texto5);
    noecho();
    getch();
    echo();
}
