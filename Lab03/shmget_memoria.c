#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/shm.h>

int main() {
  // criacao variaveis
  pid_t child_pid;
  int mem_id;

  // criacao funcao shmget
  mem_id = shmget(IPC_PRIVATE, 1024, IPC_CREAT | 0660);
  if (mem_id < 0) 
  {
    printf("erro ao alocar memoria\n");
    return 1;
  }

  // anexa a memória no processo
  int *shared_var = (int*) shmat(mem_id, NULL, 0);
  *shared_var = 1;

  printf("variavel compartilhada: %i\n", *shared_var);

  // cria processo filho
  child_pid = fork();
  
  printf("processo filho: %i\n", child_pid);

  // operacoes do enunciado
  if (child_pid == 0) 
  {     
      *shared_var += 2;  
      printf("variavel compartilhada + 2: %i\n", *shared_var);    
  } else 
  {   
    *shared_var *= 4;
    printf("variavel compartilhada * 4: %i\n", *shared_var);    
  }

  // desanexa a memoria 
  shmdt(shared_var);

  // libera a memoria --
  shmctl(mem_id, IPC_RMID, NULL);

  return 0;
}
