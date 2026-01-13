#include "ordenacao.h"

int main() {
    srand((unsigned int)time(NULL));

    int tamanhos[] = {100, 1000, 10000, 100000};
    int qtd_tamanhos = 4;

    const char *arquivo = "resultados.csv";

    executar_benchmark(tamanhos, qtd_tamanhos, arquivo);

    return 0;
}