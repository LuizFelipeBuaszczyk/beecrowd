# Conversão de Tempo
O exercício consiste em ler um valor inteiro correspondente a um tempo em segundos, calcular o equivalente em horas, minutos e segundos, e exibir o resultado no formato "HH:MM:SS".

## Solução
Para solucionar o problema, deve-se dar a entrada do número de segundos, e então realizar a primeira operação, que será dividir o número de segundos por 3600 para obter o número de horas, pois 1 hora = 3600 segundos. Em seguida, resgata-se o valor restante e divide-se por 60 para obter o número de minutos, pois 1 hora = 60 minutos. Por fim, o resto da divisão é o valor em segundos.

## Linguagens
- C++