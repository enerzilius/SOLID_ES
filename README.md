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
float calcularCoeficiente(int matricula){
    vector<Materia> materiasMatriculadas;
    vector<materia> todasMaterias;
    for (Materia materia : todasMaterias){
        "se estiver matriculado, adiciona ao vetor materiasMatriculadas"
    }
    float coef = 0;
    "calcula o coeficiênte"
    return coef;
}
```
  Nesse exemplo, a função toma a função de pegar todas as metérias em que o aluno está matriculado além do próprio cálculo do 
coeficiênte.

## Princípio da substituição de Liskov

## Princípio de Segregação de Interfaces

## Princípio de Demeter

# Referências
[]