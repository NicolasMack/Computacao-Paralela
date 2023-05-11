**1- Quais são as tarefas no caminho crítico para cada grafo de dependência? Para responder a pergunta, apresente um DAG do seu projeto.**
-Resposta no arquivo EsquemaDag.md.

**2- Qual é o limite inferior do tempo de execução paralela para cada decomposição?**
-Depende do número de processadores, porém o tempo é de N vezes o tempo da tarefa mais longa no caminho crítico.

**3- Quantos processadores são necessários para se conseguir o tempo mínimo de execução?**
- igual ao numero de threads no openmp

**4- Qual é o grau máximo de concorrência?**
-Número de processadores disponíveis ou número especificado pelo usuario na linha de comando.

**5- Qual é o paralelismo médio?**
-Número médio de threads que estão sendo executadas simultaneamente, sendo em geral, um indicador de eficiêrncia da execução paralela.
