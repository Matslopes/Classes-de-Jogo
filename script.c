#include <stdio.h>
#include <string.h>

// Definição da estrutura Hero
struct Personagem {
    char nome[50];
    int idade;
    char tipo[20];
};

// Função para realizar o ataque
void atacar(struct Personagem *heroi) {
    char ataque[50];

    // Determina o tipo de ataque com base no tipo do herói
    if (strcmp(heroi->tipo, "mago") == 0) {
        strcpy(ataque, "usou magia");
    } else if (strcmp(heroi->tipo, "guerreiro") == 0) {
        strcpy(ataque, "usou espada");
    } else if (strcmp(heroi->tipo, "Clérigo") == 0) {
        strcpy(ataque, "usou magia sagrada");
    } else if (strcmp(heroi->tipo, "assassino") == 0) {
        strcpy(ataque, "usou adagas");
    } else {
        strcpy(ataque, "usou ataque padrão");
    }

    // Exibe a mensagem de ataque
    printf("O %s %s atacou usando %s\n", heroi->tipo, heroi-> nome, ataque);
}

int main() {
    // Exemplo de uso da estrutura Hero
    struct Personagem mago = {"Patolino O Implacável", 80, "mago"};
    atacar(&mago);

    struct Personagem guerreiro = {"Escanor", 35, "guerreiro"};
    atacar(&guerreiro);

    struct Personagem Clérigo = {"Luciel", 40, "Clérigo"};
    atacar(&Clérigo);

    struct Personagem assassino = {"Yor Forger", 27, "assassino"};
    atacar(&assassino);

    return 0;
}