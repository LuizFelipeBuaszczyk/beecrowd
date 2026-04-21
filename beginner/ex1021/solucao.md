# Cédulos e Moedas

O exercício consiste em ler um valor de dinheiro, calcular o número mínimo de cédulas e moedas necessárias para compor esse valor, e exibir o resultado no formato especificado.

## Solução
Para solucionar o problema, deve-se dar a entrada do valor em dinheiro, e então realizar uma série de operações para determinar quantas cédulas e moedas são necessárias. O processo envolve dividir o valor pelo valor de cada cédula ou moeda, e então subtrair o valor correspondente para continuar a calcular o restante. O processo é repetido para cada tipo de cédula e moeda, começando pelas maiores e indo para as menores. 

O valor de entrada é separado em duas variáveis notas e moedas do tipo inteiro, para evitar problemas de precisão com números flutuantes. Por exemplo, um valor de R$ 576.73 é manipulado como: `notas = 576` e `moedas = 73`.

## Linguagens
- C++