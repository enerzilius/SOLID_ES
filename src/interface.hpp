#include "aluno.hpp"

class Bolsista{
public:
    virtual getValorBolsa();
}

class Aluno
{
public:
    virtual ~Aluno();
};

class Monitor : public Aluno, public Bolsista
{
    public:
        virtual void helloWorld()
        {
            // funcionalidades
        }
};