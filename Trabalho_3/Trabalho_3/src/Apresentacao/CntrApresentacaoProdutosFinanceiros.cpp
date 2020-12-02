#include "Apresentacao/CntrApresentacaoProdutosFinanceiros.h"

void CntrApresentacaoProdutosFinanceiros::executar(){

    // Mensagens a serem apresentadas na tela simplificada de produtos financeiros.

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Consultar produto de investimento.";
    char texto3[]="2 - Retornar.";

    int campo;                                                                                  // Campo de entrada.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    echo();                                                                                     // Habilita eco.

    bool apresentar = true;                                                                     // Controle de laço.

    while(apresentar){

        // Apresenta tela simplificada de produtos financeiros.

        clear();                                                                                // Limpa janela.
        mvprintw(linha/4,coluna/4,"%s",texto1);                                                 // Imprime nome do campo.
        mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                             // Imprime nome do campo.
        noecho();
        campo = getch() - 48;                                                                   // Leitura do campo de entrada e conversão de ASCII.
        echo();

        switch(campo){
            case 1: consultarProdutoInvestimento();
                    break;
            case 2: apresentar = false;
                    break;
        }
    }
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::executar(CPF cpf){

    // Mensagens a serem apresentadas tela completa de produtos financeiros.

    char texto1[] ="Selecione um dos servicos : ";
    char texto2[] ="1 - Cadastrar produto de investimento.";
    char texto3[] ="2 - Descadastrar produto de investimento.";
    char texto4[] ="3 - Consultar produto de investimento.";
    char texto5[] ="4 - Realizar aplicacao em produto de investimento.";
    char texto6[] ="5 - Listar aplicacoes em produto de investimento.";
    char texto7[] ="6 - Retornar.";

    int campo;                                                                                  // Campo de entrada.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    echo();                                                                                     // Habilita eco.

    bool apresentar = true;                                                                     // Controle de laço.

    echo();                                                                                     // Habilita eco.

    while(apresentar){

        // Apresenta tela completa de produtos financeiros.

        clear();                                                                                // Limpa janela.
        mvprintw(linha/4,coluna/4,"%s",texto1);                                                 // Imprime nome do campo.
        mvprintw(linha/4 + 4,coluna/4,"%s",texto2);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 6,coluna/4,"%s",texto3);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 8,coluna/4,"%s",texto4);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 10,coluna/4,"%s",texto5);                                            // Imprime nome do campo.
        mvprintw(linha/4 + 12,coluna/4,"%s",texto6);                                            // Imprime nome do campo.
        mvprintw(linha/4 + 14,coluna/4,"%s",texto7);                                            // Imprime nome do campo.
        noecho();
        campo = getch() - 48;                                                                   // Leitura do campo de entrada e conversão de ASCII.
        echo();

        switch(campo){
            case 1: cadastrarProdutoInvestimento();
                    break;
            case 2: descadastrarProdutoInvestimento();
                    break;
            case 3: consultarProdutoInvestimento();
                    break;
            case 4: realizarAplicacao(cpf);
                    break;
            case 5: listarAplicacoes(cpf);
                    break;
            case 6: apresentar = false;
                    break;
        }
    }
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::cadastrarProdutoInvestimento(){

    // Mensagens a serem apresentadas.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);

    char texto1[] ="Dados do produto de investimento: ";
    char texto2[] ="Codigo de produto :";
    char texto3[] ="Classe            :";
    char texto4[] ="Emissor           :";
    char texto5[] ="Prazo             :";
    char texto6[] ="Taxa              :";
    char texto7[] ="Vencimento        :";
    char texto8[] ="Horario           :";
    char texto9[] ="Valor minimo      :";
    char texto10[]="Dado em formato incorreto. Preencha o campo novamente";
    char texto11[]="Sucesso no cadastramento. Digite algo.";
    char texto12[]="Falha no cadastramento, produto financeiro ja existente. Digite algo.";

    char campo1[80], campo2[80], campo3[80], campo4[80], campo5[80];                            // Cria campos para entrada dos dados.
    char campo6[80], campo7[80], campo8[80];

    CodigoDeProduto codigo_produto;
    Classe classe;
    Emissor emissor;
    Prazo prazo;
    Taxa taxa;
    Data vencimento;
    Horario horario;
    ValorMinimo valor;

    // Apresenta tela de cadastramento.

    clear();                                                                   // Limpa janela.
    mvprintw(linha/4,coluna/4,"%s",texto1);
    while(true){
        try{
            mvprintw(linha/4 + 2,coluna/4,"%s",texto2);
            clrtoeol();
            getstr(campo1);
            codigo_produto.setCodigoDeProduto(string(campo1));
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
            classe.setClasse(string(campo2));
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
            emissor.setEmissor(string(campo3));
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
            prazo.setPrazo(stoi(campo4));
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
            taxa.setTaxa(stof(campo5));
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
            vencimento.setData(string(campo6));
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
            horario.setHorario(string(campo7));
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
            valor.setValorMinimo(stof(campo8));
            break;
        }
        catch(invalid_argument &exp){
            mvprintw(linha/4 + 18,coluna/4,"%s",texto10);                   // Informa formato incorreto.
        }
    }


    Produto produto;

    produto.setCodigo(codigo_produto);
    produto.setClasse(classe);
    produto.setEmissor(emissor);
    produto.setHorario(horario);
    produto.setPrazo(prazo);
    produto.setTaxa(taxa);
    produto.setValor(valor);
    produto.setVencimento(vencimento);

    try{
        switch(cntr->cadastrarProdutoInvestimento(produto)){
            case 0:
                mvprintw(linha/4 + 18,coluna/4,"%s",texto11);                               // Informa sucesso.
                noecho();
                getch();
                echo();
                return;
            case 1:
                mvprintw(linha/4 + 18,coluna/4,"%s",texto12);                               // Informa falha.
                noecho();
                getch();
                echo();
                return;
        }
    }
    catch(EErroPersistencia &exp){
        mvprintw(linha/4 + 18,coluna/4,"%s",exp.what());                                               // Informa falha.
        noecho();
        getch();
        echo();
        return;
    }
    catch(EErroDeQuery &exp){
        mvprintw(linha/4 + 18,coluna/4,"%s",exp.what());                                               // Informa sucesso.
        noecho();
        getch();
        echo();
        return;
    }

}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::descadastrarProdutoInvestimento(){

    // Mensagens a serem apresentadas.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);
    CodigoDeProduto produto;
    char campo1[80];

    char texto1[] ="Preencha o seguinte campo: ";
    char texto2[] ="Codigo do produto de investimento:";
    char texto3[] ="Dado em formato incorreto. Preencha o campo novamente";

    char texto4[] ="Produto descadastrado com sucesso. Pressione qualquer tecla para sair.";
    char texto5[] ="Falha no descadrastamento, produto inexistente no banco.";
    char texto6[] ="Falha no descadrastamento, produto possui aplicacoes vinculadas.";
    char texto7[] ="Pressione qualquer tecla para sair.";

    clear();
    mvprintw(linha/4,coluna/4,"%s",texto1);

    while(true){
        try{
            mvprintw(linha/4 + 2,coluna/4,"%s",texto2);
            clrtoeol();
            getstr(campo1);
            produto.setCodigoDeProduto(string(campo1));
            break;
        }
        catch(invalid_argument &exp){
            mvprintw(linha/4 + 4,coluna/4,"%s",texto3);
        }
    }

    try{
        switch(cntr->descadastrarProdutoInvestimento(produto)){
            case 0:
                mvprintw(linha/4 + 4,coluna/4,"%s",texto4);
                clrtoeol();
                noecho();
                getch();
                echo();
                return;
            case 1:
                mvprintw(linha/4 + 4,coluna/4,"%s",texto5);
                clrtoeol();
                mvprintw(linha/4 + 5,coluna/4,"%s",texto7);
                clrtoeol();
                noecho();
                getch();
                echo();
                return;
            case 2:
                mvprintw(linha/4 + 4,coluna/4,"%s",texto6);
                clrtoeol();
                mvprintw(linha/4 + 5,coluna/4,"%s",texto7);
                clrtoeol();
                noecho();
                getch();
                echo();
                return;
        }
    }
    catch(EErroPersistencia &exp){
        mvprintw(linha/4 + 4,coluna/4,"%s",exp.what());
        noecho();
        getch();
        echo();
        return;
    }
    catch(EErroDeQuery &exp){
        mvprintw(linha/4 + 4,coluna/4,"%s",exp.what());
        noecho();
        getch();
        echo();
        return;
    }
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::consultarProdutoInvestimento(){

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.
    Classe classe;
    char campo1[80];
    std::vector<Produto> produtos_financeiros;

    char texto1[] ="Preencha o seguinte campo: ";
    char texto2[] ="Classe do produto de investimento:";
    char texto3[] ="Dado em formato incorreto. Preencha o campo novamente";

    char texto4[] ="Produtos financeiros";
    char texto5[] ="Codigo de produto:";
    char texto6[] ="Emissor          :";
    char texto7[] ="Prazo            :";
    char texto8[] ="Taxa             :";
    char texto9[] ="Vencimento       :";
    char texto10[]="Horario          :";
    char texto11[]="Valor minimo     :";
    char texto12[]="Pressione qualquer tecla para sair.";
    char texto13[]="Nao existem produtos cadastrados. Pressione qualquer tecla para sair.";
    char texto14[]="Pressione qualquer tecla para continuar.";

    clear();
    mvprintw(linha/4,coluna/4,"%s",texto1);

    while(true){
        try{
            mvprintw(linha/4 + 2,coluna/4,"%s",texto2);
            clrtoeol();
            getstr(campo1);
            classe.setClasse(string(campo1));
            break;
        }
        catch(invalid_argument &exp){
            mvprintw(linha/4 + 4,coluna/4,"%s",texto3);
        }
    }

    try{
        produtos_financeiros = cntr->consultarProdutosInvestimento(classe);
    }
    catch(...){
        std::cout << "Exceção" << std::endl;
        return;
    }

    if(produtos_financeiros.empty()){
        clear();
        mvprintw(linha/4,coluna/4-4,"%s",texto13);
        noecho();
        getch();
        echo();
        return;
    }

    for(std::vector<Produto>::iterator produto = produtos_financeiros.begin(); produto != produtos_financeiros.end(); produto++){

        clear();                                                                                    // Limpa janela.
        mvprintw(linha/4,coluna/4,"%s",texto4);                                                      // Imprime nome do campo.

        mvprintw(linha/4 + 2,coluna/4,"%s",texto5);
        printw(produto->getCodigo().getCodigoDeProduto().c_str());

        mvprintw(linha/4 + 4,coluna/4,"%s",texto6);
        printw(produto->getEmissor().getEmissor().c_str());

        mvprintw(linha/4 + 6,coluna/4,"%s",texto7);
        printw(std::to_string(produto->getPrazo().getPrazo()).c_str());

        mvprintw(linha/4 + 8,coluna/4,"%s",texto8);
        printw(std::to_string(produto->getTaxa().getTaxa()).c_str());

        mvprintw(linha/4 + 10,coluna/4,"%s",texto9);
        printw(produto->getVencimento().getData().c_str());

        mvprintw(linha/4 + 12,coluna/4,"%s",texto10);
        printw(produto->getHorario().getHorario().c_str());

        mvprintw(linha/4 + 14,coluna/4,"%s",texto11);
        printw(std::to_string(produto->getValor().getValorMinimo()).c_str());

        if(produto+1 == produtos_financeiros.end()){
            mvprintw(linha/4 + 18,coluna/4,"%s",texto12);
        }
        else{
            mvprintw(linha/4 + 18,coluna/4,"%s",texto14);
        }

        noecho();
        getch();
        echo();
    }



}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::realizarAplicacao(CPF cpf){

    // Mensagens a serem apresentadas.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.
    Aplicacao aplicacao;
    CodigoDeProduto produto;
    CodigoDeAplicacao codigo_aplicacao;
    ValorDeAplicacao valor;
    Data data;

    char texto1[] ="Dados da aplicação:";
    char texto2[] ="Codigo de produto  :";
    char texto3[] ="Codigo de aplicacao:";
    char texto4[] ="Valor da aplicacao :";
    char texto5[] ="Data               :";
    char texto6[] ="Dado em formato incorreto. Preencha o campo novamente";

    char texto7[] ="Aplicacao realizada com sucesso. Pressione qualquer tecla para sair.";
    char texto8[] ="Falha no cadastramento, aplicacao ja cadastrada.";
    char texto9[] ="Falha na aplicacao, produto de invetimento inexistente.";
    char texto10[]="Falha na aplicacao, valor menor que valor minimo de investimento.";
    char texto11[]="Falha na aplicacao, ja existem 5 aplicacoes neste CPF.";
    char texto12[]="Pressione qualquer tecla para sair.";

    char campo1[80], campo2[80], campo3[80], campo4[80];

    clear();                                                                   // Limpa janela.
    mvprintw(linha/4,coluna/4,"%s",texto1);
    while(true){
        try{
            mvprintw(linha/4 + 2,coluna/4,"%s",texto2);
            clrtoeol();
            getstr(campo1);
            produto.setCodigoDeProduto(string(campo1));
            break;
        }
        catch(invalid_argument &exp){
            mvprintw(linha/4 + 4,coluna/4,"%s",texto6);                      // Informa formato incorreto.
        }
    }
    while(true){
        try{
            mvprintw(linha/4 + 4,coluna/4,"%s",texto3);
            clrtoeol();
            getstr(campo2);
            codigo_aplicacao.setCodigoDeAplicacao(string(campo2));
            break;
        }
        catch(invalid_argument &exp){
            mvprintw(linha/4 + 6,coluna/4,"%s",texto6);                    // Informa formato incorreto.
        }
    }
    while(true){
        try{
            mvprintw(linha/4 + 6,coluna/4,"%s",texto4);
            clrtoeol();
            getstr(campo3);
            valor.setValorDeAplicacao(stof(campo3));
            break;
        }
        catch(invalid_argument &exp){
            mvprintw(linha/4 + 8,coluna/4,"%s",texto6);                    // Informa formato incorreto.
        }
    }
    while(true){
        try{
            mvprintw(linha/4 + 8,coluna/4,"%s",texto5);
            clrtoeol();
            getstr(campo4);
            data.setData(string(campo4));
            break;
        }
        catch(invalid_argument &exp){
            mvprintw(linha/4 + 10,coluna/4,"%s",texto6);                   // Informa formato incorreto.
        }
    }

    aplicacao.setCodigo(codigo_aplicacao);
    aplicacao.setValor(valor);
    aplicacao.setData(data);

    try{
        switch(cntr->realizarAplicacao(cpf, produto, aplicacao)){
            case 0:
                mvprintw(linha/4 + 12,coluna/4,"%s",texto7);                               // Informa sucesso.
                noecho();
                getch();
                echo();
                return;
            case 1:
                mvprintw(linha/4 + 12,coluna/4,"%s",texto8);
                clrtoeol();
                mvprintw(linha/4 + 13,coluna/4,"%s",texto12);
                clrtoeol();
                noecho();
                getch();
                echo();
                return;
            case 2:
                mvprintw(linha/4 + 12,coluna/4,"%s",texto9);
                clrtoeol();
                mvprintw(linha/4 + 13,coluna/4,"%s",texto12);
                clrtoeol();
                noecho();
                getch();
                echo();
                return;
            case 3:
                mvprintw(linha/4 + 12,coluna/4,"%s",texto10);
                clrtoeol();
                mvprintw(linha/4 + 13,coluna/4,"%s",texto12);
                clrtoeol();
                noecho();
                getch();
                echo();
                return;
            case 4:
                mvprintw(linha/4 + 12,coluna/4,"%s",texto11);
                clrtoeol();
                mvprintw(linha/4 + 13,coluna/4,"%s",texto12);
                clrtoeol();
                noecho();
                getch();
                echo();
                return;
        }
    }
    catch(EErroPersistencia &exp){
        mvprintw(linha/4 + 18,coluna/4,"%s",exp.what());                                               // Informa falha.
        noecho();
        getch();
        echo();
        return;
    }
    catch(EErroDeQuery &exp){
        mvprintw(linha/4 + 18,coluna/4,"%s",exp.what());                                               // Informa sucesso.
        noecho();
        getch();
        echo();
        return;
    }

}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::listarAplicacoes(CPF cpf){

    // Mensagens a serem apresentadas.

    int linha,coluna;
    getmaxyx(stdscr,linha,coluna);
    std::vector<Aplicacao> aplicacoes;

    char texto1[] ="Aplicacoes";
    char texto2[] ="Codigo de aplicacao:";
    char texto3[] ="Valor da aplicacao :";
    char texto4[] ="Data               :";
    char texto5[] ="Pressione qualquer tecla para continuar.";
    char texto6[] ="Pressione qualquer tecla para sair.";
    char texto7[] ="Ainda não ha aplicacoes cadstradas. Pressiona qualquer tecla para sair.";

    try{
        aplicacoes = cntr->consultarAplicacao(cpf);
    }
    catch(...){
        std::cout << "Exceção" << std::endl;
        return;
    }

    if(aplicacoes.empty()){
        clear();
        mvprintw(linha/4,coluna/4-4,"%s",texto7);
        noecho();
        getch();
        echo();
        return;
    }

    for(std::vector<Aplicacao>::iterator aplicacao = aplicacoes.begin(); aplicacao != aplicacoes.end(); aplicacao++){

        clear();
        mvprintw(linha/4,coluna/4,"%s",texto1);

        mvprintw(linha/4 + 2,coluna/4,"%s",texto2);
        printw(aplicacao->getCodigo().getCodigoDeAplicacao().c_str());

        mvprintw(linha/4 + 4,coluna/4,"%s",texto3);
        printw(std::to_string(aplicacao->getValor().getValorDeAplicacao()).c_str());

        mvprintw(linha/4 + 6,coluna/4,"%s",texto4);
        printw(aplicacao->getData().getData().c_str());

        if(aplicacao+1 == aplicacoes.end()){
            mvprintw(linha/4 + 10,coluna/4,"%s",texto6);
        }
        else{
           mvprintw(linha/4 + 10,coluna/4,"%s",texto5);
        }

        noecho();
        getch();
        echo();
    }




}

