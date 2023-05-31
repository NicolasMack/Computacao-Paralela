

# Projeto Final

## Aluno: Nicolas Alteia Telles || TIA: 42010225

### As alterações feitas a partir da versão serial (mesmo com o bug resolvido em sala de aula), não geraram um resultado melhor em questão de casas decimais., portanto nesta ultima versão a função Taylor foi implementada na main. Outra mudança importante, as variáveis foram trocadas de double e float para long double, em busca de mais memória na execução.

Executado a partir de 10000 iterações, foram obtidos 18 casas decimais do número e com precisão.

### Uma execução na AWS para duas threads:
![image](https://github.com/NicolasMack/Computacao-Paralela/assets/127933971/0dad47a9-32cc-4918-bed2-edf1626ae37a)
### Uma execução na AWS para quatro threads:
![image](https://github.com/NicolasMack/Computacao-Paralela/assets/127933971/3668b571-d040-48ac-a80b-d3929a57408c)


## Tempo e SpeedUps:
Versao Serial com 10 iteracoes e 4 casas decimais: 1,52 em média
Primeira Versao paralela com 4 casas decimais e 2 threads: 6,123 segundos em média
Versao Final com duas threads: 4,943 segundos em média
Versao Final com quatro threads: 4,7343 segundos em média



