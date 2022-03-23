/*
Questão 2

A)

            20
        10      15
      4    7  8    3
    1  2
vetor [20, 10, 15, 4, 7, 8, 3, 1, 2]

Primeiro Passo: Deletando o item de maior prioridade e trocando pelo último elemento do último nível
            2
        10      15
      4    7  8    3
    1  

vetor [2, 10, 15, 4, 7, 8, 3, 1] (Foi deletado o 20)

Segundo Passo: Trocando o númnero 2 com o número 10

            10
        2       15
      4    7  8    3
    1  

vetor [10, 2, 15, 4, 7, 8, 3, 1]

Terceiro Passo: Trocando o númnero 2 com o número 4

            10
        4       15
      2    7  8    3
    1  

vetor [10, 4, 15, 2, 7, 8, 3, 1]

Quarto Passo: Trocando o númnero 4 com o número 7

            10
        7       15
      2    4  8    3
    1  

vetor [10, 7, 15, 2, 4, 8, 3, 1]

Quinto Passo: Trocando o númnero 10 com o número 15

            15
        7       10
      2    4  8    3
    1  

vetor [15, 7, 10, 2, 4, 8, 3, 1]

B)


            20
        10      15
      4    7  8    3
    1  2

vetor: [20, 10, 15, 4, 7, 8, 3, 1, 2]

Primeiro Passo: Colocando o número 16 no último nível:

            20
        10      15
      4    7  8    3
    1  2 16

vetor [20, 10, 15, 4, 7, 8, 3, 1, 2, 16]

Segundo Passo: Trocando o númnero 16 com o número 7

            20
        10      15
      4   16  8    3
    1  2 7

vetor [20, 10, 15, 4, 16, 8, 3, 1, 2, 7]

Terceiro Passo: Trocando o númnero 10 com o número 16

            20
        16      15
      4   10  8    3
    1  2 7

vetor [20, 16, 15, 4, 10, 8, 3, 1, 2, 7]


*/