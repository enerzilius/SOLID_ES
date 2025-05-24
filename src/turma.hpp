#include <string>
#include <vector>
#include "materia.hpp"
#include "aluno.hpp"
#include "professor.hpp"

using namespace std;

class Turma {
    Materia materia;
    professor professor;
    vector<Aluno> alunos;
    // ...
public:
    float getMediaNotas(){
        float media;
        // calcula média de notas da turma;
        return media
    }
    float getMaiorNota(){
        float maiorNota;
        //pega a maior nota da turma;
        return maiorNota;
    }
    Aluno getAlunoMaiorNota(){
        Aluno aluno;
        // pega o aluno com maior nota;
        return aluno;
    }
    string getNomeAlunoMaiorNota(){
        string nome = getAlunoMaiorNota().getNome();
        return nome;
    }
};