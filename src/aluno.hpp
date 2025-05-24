#include <string>
#include <vector>
#include "materia.hpp"

using namespace std;

class Aluno {
    int matricula;
    string nome;
    vector<Materia> materias;
    // ...
public:
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


};