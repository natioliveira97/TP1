#ifndef TAXA_H
#define TAXA_H


class Taxa
{
    public:
        Taxa();
        Taxa(int);
        bool setTaxa(int);
        int getTaxa();

    private:
        static const int MIN_TAXA = 0;
        static const int MAX_TAXA = 200;
        int taxa;
        bool valida(int);
};

#endif // TAXA_H
