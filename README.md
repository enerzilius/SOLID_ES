# Princípios de Projeto
  O objetivo da atividadade é utilizar de códigos de exemplo para demonstrar os alguns dos Princípios de Projeto. Os princípios 
escolhidos foram:
- Princípio da Responsabilidade Única
- Prefira Composição a Herança
- Princípio de Segregação de Interfaces
- Princípio de Demeter 
  O tema geral dos exemplos será gerenciamento escolar. 

# Exemplos
## Princípio da Responsabilidade Única
  O Princípio de Responsabilidade única consiste em garantir que um método não faça nada além do que lhe é suposto, tendo apenas 
um motivo para modificar uma classe. No contexto proposto esse princípio será aplicado na seguinte função:
```c++
float calcularMediaGeral(int matricula){
    vector<Materia> materiasMatriculadas;
    vector<materia> todasMaterias;
    for (Materia materia : todasMaterias){
        "se estiver matriculado, adiciona ao vetor materiasMatriculadas"
    }
    float media = 0;
    "calcula a media de nota das matérias"
    return media;
}
```
  Nesse exemplo, o método _calcularMediaGeral_ toma a função de buscar todas as metérias em que o aluno está matriculado além do próprio cálculo do 
coeficiênte do aluno.
  Para resolver este problema, essas duas responsabilidades serão divididas em métodos diferentes, desta forma:
```c++
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
}
```
fonte:[src/aluno.hpp](src/aluno.hpp)
Essa é uma forma um pouco crua de resolver o problema, sem considerar o conceito de turmas para manter a simplicidade do exemplo. Aqui
o método _getMediaGeral_ deixa a parte de pegar as matérias cursadas pelo aluno para o outro método _getMateriasMatriculadas_, lidando apenas com o cálculo da média de todas as matérias do aluno. 


## Prefira Composição a Herança
Apesar de muito popular antigamente, o uso de heranças pode acabar acarretando em problemas de manutenção e evolução das classes de um sistema. Para exemplificar, agora será criado uma classe Turma:
```c++
#include <string>
#include <vector>
#include "materia.hpp"
#include "aluno.hpp"

using namespace std;

class Turma : public Materia {
    vector<Aluno> alunos;
    // ...
public:
    //métodos
};
```
Neste exemplo, o uso da herança não é necessariamente errado, mas segundo o princípio abordado, é preferível utilizar a seguinte solução:

```c++
#include <string>
#include <vector>
#include "materia.hpp"
#include "aluno.hpp"

using namespace std;

class Turma {
    Materia materia;
    vector<Aluno> alunos;
    // ...
public:
    //métodos
};
```
fonte:[src/turma.hpp](src/turma.hpp)

Dessa forma, a relação entre as classes não é estática e é muito mais flexível do que se fosse utilizado a herança.


## Princípio de Segregação de Interfaces
O Princípio de Segregação de Interfaces é uma espécie de Princípio da Responsabilidade Única para interfaces, descrevendo que devemser pequenas e específicas. 
```c++
#include "aluno.hpp"

class Aluno{
public:
    virtual getNome();
    virtual getValorBolsa();
}
```
Nesse exemplo, o método getValorBolsa está sendo aplicado a todos os alunos, mesmo que alguns deles não sejam bolsistas. Isso torna a interface maior e menos específica, violando o princípio estudado. Uma alternativa seria:
```c++
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
```
fonte:[src/interface.hpp](src/interface.hpp)



## Princípio de Demeter
O Princípio de Demeter consiste, basicamente, em não encadear vários getters ou métodos em sequência. Um contraexeplo desse princípio seria:
```c++
string getNomeAlunoMaiorNota(){
    string nome = "";
    float maiorNota;
    for(Turma turma : turmasLecionadas){
        if(turma.getMaiorNota() > maiorNota){
            nome = turma.getAlunoMaiorNota.getNome();
        }
    }
    return nome;
}
```
Nesse trecho é bem vísivel o encadeamento de métodos para pegar o nome do aluno com maior nota dentre as turmas lecionadas por certo professor. Para corrigir esse problema, é possível fazer o seguinte:
```c++
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
```
fonte:[src/professor.hpp](src/professor.hpp)

# Referências
[https://engsoftmoderna.info/cap5.html]