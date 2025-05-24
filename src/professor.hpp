#include <string>
#include <vector>
#include "materia.hpp"
#include "turma.hpp"

using namespace std;

class Professor {
    int cod;
    string nome;
    vector<Turma> turmasLecionadas;
    // ...
public:
    string getNomeAlunoMaiorNota(){
        string nome = "";
        float maiorNota;
        for(Turma turma : turmasLecionadas){
            if(turma.getMaiorNota() > maiorNota){
                nome = turma.getNomeAlunoMaiorNota;
            }
        }
        return nome;
    }
};