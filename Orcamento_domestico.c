#include <stdio.h>

int main() {

    
    float renda, alimentacao, moradia, transporte, outros, totalDespesas, saldo;
    

    printf("Digite sua renda mensal: ");
    scanf("%f", &renda);

    printf("Digite despesa com alimentacao: ");
    scanf("%f", &alimentacao);

    printf("Digite despesa com moradia: ");
    scanf("%f", &moradia);

    printf("Digite despesa com transporte: ");
    scanf("%f", &transporte);

    printf("Digite outras despesas: ");
    scanf("%f", &outros);

    
    totalDespesas = alimentacao + moradia + transporte + outros;
    saldo = renda - totalDespesas;

  
    printf("\nTotal de despesas: %.2f\n", totalDespesas);
    printf("Saldo final: %.2f\n", saldo);

    
    if (saldo > 0) {
        printf("Situacao: Orcamento controlado.\n");
    } else if (saldo == 0) {
        printf("Situacao: Orcamento apertado.\n");
    } else {
        printf("Situacao: Orcamento em deficit.\n");
    }

    return 0;
}
