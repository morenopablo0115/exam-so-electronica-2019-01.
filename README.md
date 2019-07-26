#Examen SO

##Pregunta 1

*[pregunta1_1.c](pregunta1_1.c)
*[pregunta1_2.c](pregunta1_2.c)
muestra la importancia de ubicar bien las lineas de código a la hora de
programar, para esto mostramos cuanto tiempo se demora en ejecutar
el mismo programa pero con una variación, la cual es abrir y cerrar la puerta
en un ciclo de for 

Respuesta a la pregunta.
El programa corre más rápido cuando crea la puerta antes de entrar al ciclo, porque
al poner la puerta en el ciclo esta se repetirá en el ciclo y esto gasta más
tiempo, mientras si la creamos afuera del ciclo esta no se repetirá, si no que
se hace una sola vez antes de entrar en el ciclo

##pregunta 2

*[pregunta2.c](pregunta2.c):
El segundo programa trabaja con dos hilos para hacer un trabajo más eficiente
se nombra una variable global(v) y se tienen otras tre variables locales:

x= 1250

y= 350

z= 25

El hilo 1 hará la operacion de divioción "z/y" y l a guardara en la variable "v"
el hilo 2 ejecutara la función sleep(2) y luego llevara acabo la operación x*v
 

##pregunta 3

*[pregunta3.c](pregunta3.c): 
para el tercer programa se crea un programa que siempre que se ejecute el programa 
corra en el mismo orden. esperar al padre a que se ejecute y luego ejecutar al hijo,
para esto nos ayudamos de waitpid.

##pregunta 4

en la cuatro se ejecuta un programa llamado process-run.py y se ejecunta con diferentes parametros
y se analiza lo que sucede. 

1.Cuando ejecutamos dos procesos de la forma 5:100, vemos como cada uno de ellos se ejecuta 5 veces
usando el 100% de la CPU. En el proceso PID: 0, vemos que en paralelo mientras éste se ejecuta las 
5 veces, el proceso PID: 1 se encuentra listo (READY) para ser ejecutado. Una vez el 0 ha terminado
entra en estado DONE, abriendo paso al 1 para que lleve a cabo sus 5 repeticiones. Observamos que es
un proceso no-expropiativo por lo que cada uno de los procesos termina su ciclo para darle paso al 
otro de acceder a la CPU.

2. El proceso 0 (PID: 0) se ejecuta 4 veces usando un 100% de la cpu, mientras el proceso 1 (PID: 1)
se halla listo (READY) para ser ejecutado. Una vez terminadas las repeticiones del proceso 0 (DONE), 
el proceso 1 (que es de entrada y salida → IO) se posiciona para ser ejecutado una sola vez pero debido 
a que es un proceso IO, se emulan las 4 repeticiones que debe esperar de la ejecución del proceso 0 en la 
cpu para que ésta pase a ejecutarlo y finalmente ambos queden en estado DONE.


##pregunta5
*[pregunta5.c](pregunta5.c):
en esta pregunta se halla la dirección en la cual está guardado un programa 
ejecutable. Para esto recibe como argumento el nombre del programa y imprime
la dirección de ubicación, se sabe que están ubicados en la variable PATH por
esta razón se busca en los directorios de ella misma 


