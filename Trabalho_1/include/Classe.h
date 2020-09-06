#ifndef CLASSE_H
#define CLASSE_H

#include <string>

class Classe
{
    public:
        Classe();

        std::string getClasse();
        bool setClasse(std::string);

    private:
        std::string classe;
        bool valida(std::string);
};

#endif // CLASSE_H
