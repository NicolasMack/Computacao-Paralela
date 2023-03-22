#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    //variaveis
    int i, x, j;
    pid_t pid;
  
    printf ("digite o numero do fatorial: ");
    scanf ("%d", &x);
    j = x;
  
  //criando fork
    for (i = 1; j > 1; j = j - 1) 
    {
        pid = fork();
      //caso erro
        if (pid == -1) 
        {
            printf("erro\n");
            return 1;
        } 
        else if (pid == 0) 
        {
            i = i * j;
            return i;
        }
    }

    int status, fatorial = 1;
    //criando macro para extrair cada saida dos processos filhos
    while (wait(&status) > 0) 
    {
        fatorial *= WEXITSTATUS(status);
    }

    printf("o fatorial é %d\n", fatorial);
    return 0;
}
