#include <stdio.h>
#include <string.h>

// a) Criei uma estrutura e irei armazenar os dados do medicamento nela
struct Medicamento {
    char nome[50];
    int quantidade;
};

int main() {
    // Declarei a variável que vai guardar os dados do medicamento
    struct Medicamento med;

    // Lendo os dados iniciais pelo teclado
    printf("--- Cadastro Inicial de Estoque ---\n");
    printf("Nome do medicamento: ");
    fgets(med.nome, 50, stdin);
    // Removendo a quebra de linha que o fgets captura automaticamente
    med.nome[strcspn(med.nome, "\n")] = '\0'; 

    printf("Quantidade atual em estoque: ");
    scanf("%d", &med.quantidade);

    printf("\n[Status] O medicamento '%s' possui %d unidades no estoque.\n", med.nome, med.quantidade);

    // b) Criar um ponteiro que aponte para o endereço da estrutura
    // O '&' pega o endereço de memória da variável 'med'
    struct Medicamento *ptr_med = &med;

    // c) Atualizar a quantidade em estoque do medicamento via ponteiro
    int unidades_novas;
    printf("\nQuantas unidades chegaram para abastecer o estoque? ");
    scanf("%d", &unidades_novas);

    // Acessando e atualizando a variável através do ponteiro usando o operador '->'
    ptr_med->quantidade += unidades_novas;

    // Exibindo o resultado final para comprovar a atualização via memória
    printf("\n--- Atualizacao Concluida ---\n");
    printf("[Novo Status] O medicamento '%s' agora possui %d unidades no estoque.\n", med.nome, med.quantidade);

    return 0;
}