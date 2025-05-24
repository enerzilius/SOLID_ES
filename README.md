# Princípios de Projeto
  O objetivo da atividadade é utilizar de códigos de exemplo para demonstrar os alguns dos Princípios de Projeto. Os princípios 
escolhidos foram:
- Princípio da Responsabilidade Única
- Princípio da Substituição de Liskov
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
  Essa é uma forma um pouco crua de resolver o problema, sem considerar o conceito de turmas para manter a simplicidade do exemplo. Aqui
o método _getMediaGeral_ deixa a parte de pegar as matérias cursadas pelo aluno para o outro método _getMateriasMatriculadas_, lidando apenas com o cálculo da média de todas as matérias do aluno. 


## Princípio da substituição de Liskov

## Princípio de Segregação de Interfaces

## Princípio de Demeter

# Referências
[]