#include <string>
#include <vector>
#include "aluno.hpp"

using namespace std;

class Turma {
    int cod;
    string desc;
    vector<Aluno> alunos;
    // ...
public:
    float getAlunos();
    float getNotaAluno(int matricula);
};