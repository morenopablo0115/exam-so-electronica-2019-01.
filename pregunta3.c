#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char**argv){
	pid_t pid,pid2;
   	int status;
	int i;
	int j;
        printf("********* Waitpid() para esperar el padre***********\n");
   	pid = fork();
   	if (pid = 0){
		for(i=0;i<255;i++)
                for(j=0;j<255;j++);
     		pid  = waitpid(pid,&status,0);
     		printf("Soy el hijo y terminé mi proceso\n");
  	} else {
    		printf("Soy el padre y terminé mi proceso\n");
  	}
	return 0;
}
