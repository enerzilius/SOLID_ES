#include <string>
#include <vector>
#include "materia.hpp"
#include "turma.hpp"

using namespace std;

class Aluno {
    int matricula;
    string nome;
    // ...
public:
    string getNome(){
        return nome;
    }

    float getMediaGeral(int matricula){
        vector<Materia> materias = getMateriasMatriculadas(matricula);
        float media = 0;
        int numMaterias = materias.size();
        for (Materia materia : materias){
            media = materia.getNotaAluno(matricula) * (1/numMaterias);
        }
        return media;
    }

    vector<Materia> getMateriasMatriculadas(int matricula){
        vector<Materia> materiasMatriculadas;
        // pega todas as materias associadas com a matrícula do aluno
        return materiasMatriculadas;
    };

    vector<Turma> getTurmasMatriculadas(){
        vector<Turma> turmas;
        //pega todas as turmas aonde o aluno está presente
        return turmas;
    }




};