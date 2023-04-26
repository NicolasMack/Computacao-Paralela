# Código para resolução do problema do trapézio, realizado em C e com openMp.

## Compilado utilizando o comando gcc {nome arq} -o {nome exec} -fopenmp -lm
## Prints de execução na nuvem AWS: 
![image](https://user-images.githubusercontent.com/127933971/234542054-afd33a55-1d45-4dfe-8648-fb620482a2ba.png)

## Tempo de execução (média de 3 execuções): 
- Para 1 processador -> 3,16
- Para 2 processadores -> 3,44
- Speedup : 0,918

## referencias para partes do código:
1) https://github.com/Chuphay/parallel/blob/master/openmp/trap.c
2) https://silo.tips/download/prof-renato-pimentel-introduao-paralelismo-concorrencia-etc-programaao-paralela
3) Pdf disponibilizado pelo professor.
