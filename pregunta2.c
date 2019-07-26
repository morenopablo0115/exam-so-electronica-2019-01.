#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "common_threads.h"
#include <unistd.h>
#include <sys/wait.h>
float v = 0;
pthread_mutex_t puerta;
void *crear_puerta(){
	pthread_mutex_init(&puerta,NULL);
}
void *cerrar_puerta (){
	pthread_mutex_lock(&puerta);
}
void *abrir_puerta (){
	pthread_mutex_unlock(&puerta);
}
void *destruir_puerta (){
	pthread_mutex_destroy(&puerta);
}

void *worker1(void *arg) {
    cerrar_puerta();
    float y =350 ;
    float z = 25;
    v=(z/y);
    abrir_puerta();

}

void *worker2(void *arg) {
    cerrar_puerta();
    float x =1250 ;
    sleep(2);
    v=(x*v);
    abrir_puerta();
}
int main(int argc, char *argv[]) {
    crear_puerta();
    pthread_t p1, p2;
    Pthread_create(&p1, NULL, worker1, NULL);
    Pthread_create(&p2, NULL, worker2, NULL);
    Pthread_join(p1, NULL);
    Pthread_join(p2, NULL);
    printf("V es igual a : %f\n", v);
    destruir_puerta();
  return 0;
}



 	
