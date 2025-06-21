#include <stdio.h>      // Biblioteca padrão de entrada e saída
#include <stdlib.h>     // Biblioteca para funções como rand() e srand()
#include <time.h>       // Biblioteca para obter o tempo atual (usado em srand)
#include <string.h>     // Biblioteca para manipulação de strings (strcat, strlen)

// Conjuntos de caracteres disponíveis para a senha
const char caracteres_Minusculos[] =  "abcdefghijklmnopqrstuvwxyz";
const char caracteres_Maiusculos[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char caracteres_Numericos[] = "0123456789";
const char caracteres_Especiais[] =  "!@#$%^&*()_+-=[]{}|;:,.<>?";

// Função que gera a senha com base nas preferências do usuário
void Gerador_de_Senha(int tamanho, char minusculo, char maiusculo, char numero, char caractere){
    srand(time(0)); // Inicializa a semente do gerador de números aleatórios com o tempo atual

    char senha[100] = "";  // Onde a senha será armazenada
    char total[100] = "";  // Conjunto de caracteres disponíveis (montado conforme escolhas do usuário)

    // Adiciona letras minúsculas ao conjunto, se o usuário escolher 'S' ou 's'
    if (minusculo == 's' || minusculo == 'S') {
        strcat(total, caracteres_Minusculos);
    }

    // Adiciona letras maiúsculas ao conjunto
    if (maiusculo == 's' || maiusculo == 'S') {
        strcat(total, caracteres_Maiusculos);
    }

    // Adiciona números ao conjunto
    if (numero == 's' || numero == 'S') {
        strcat(total, caracteres_Numericos);
    }

    // Adiciona caracteres especiais ao conjunto
    if (caractere == 's' || caractere == 'S') {
        strcat(total, caracteres_Especiais);
    }

    // Se o usuário não escolheu nenhum tipo de caractere, avisa e encerra a função
    if (strlen(total) == 0) {
        printf("> Nenhum caractere foi selecionado!\n");
        return;
    }

    int conjunto_total = strlen(total);  // Tamanho total do conjunto de caracteres permitidos

    // Geração da senha caractere por caractere
    for (int i = 0; i < tamanho; i++) {
        int indice = rand() % conjunto_total;     // Gera índice aleatório válido
        senha[i] = total[indice];                 // Escolhe caractere do conjunto
    }

    // Exibe a senha gerada
    printf("\n> A senha gerada é %s\n", senha);

    return;
}

// Função principal que gerencia a entrada e execução
int main(){
    int tamanho_da_senha;
    char conter_maiuscula, conter_minuscula, conter_caractere, conter_numero;
    char nova_senha = 'S';  // Controle para saber se o usuário quer gerar outra senha

    do {
        // Solicita e valida o tamanho da senha
        do {
            printf("> Digite o tamanho da senha (mínimo 8 caracteres):");
            scanf("%d", &tamanho_da_senha);

            if (tamanho_da_senha < 8) {
                printf("> Senha com no mínimo 8 caracteres!!!\n");
            }
        } while (tamanho_da_senha < 8);

        // Coleta preferências do usuário
        printf("> A senha deve possuir letras maiusculas(S/N)? ");
        scanf(" %c", &conter_maiuscula);

        printf("> A senha deve possuir letras minusculas(S/N)? ");
        scanf(" %c", &conter_minuscula);

        printf("> A senha deve possuir números(S/N)? ");
        scanf(" %c", &conter_numero);

        printf("> A senha deve possuir caracteres especiais(S/N)? ");
        scanf(" %c", &conter_caractere);

        // Chama a função que gera a senha com base nas preferências
        Gerador_de_Senha(tamanho_da_senha, conter_minuscula, conter_maiuscula, conter_numero, conter_caractere);

        // Pergunta se o usuário deseja gerar outra senha
        printf("\n> Deseja gerar uma nova senha(S/N)?");
        scanf(" %c", &nova_senha);
        printf("\n");

    } while (nova_senha == 'S' || nova_senha == 's');  // Repete se a resposta for S/s

    return 0;
}
