#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];
    
    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("digite seu nome: \n");
    scanf("%s", &nome);

    printf("digite sua  matrícula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s - Matrícula: %d \n", nome, matricula);
    printf("Idade: %d - altura: %f", idade, altura);

    return 0;

}
