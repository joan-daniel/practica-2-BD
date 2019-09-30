#include<stdio.h>
int main (){

int tamfila;
int tampag;
int totbase;

//id = int
int contador = 4;
//nombre hospital = String 
int nombrehospital = 8;
//direccion = String
int direccion = 8;
//servicio publico/privado =String
int servicio = 8;
//cantidad de trabajadores = int
int numtrabajadores = 4;
//especialidad = string
int especialidad = 8;
//horarios = int
int horarios = 4;
//pacientes = int
int pacientes = 4;
//camas int
int camas = 4;
//salas = int
int salas = 4;
//elevadores = int
int elevadores = 4;
//edificios = int
int edificios = 4;
//estension en metros del hospital
int extension = 4;
//telefono = string
int telefono = 8;
//correo = string
int correo = 8;
//pagina web = String
int paginaweb = 8;
//nombre del director = string
int nombredir = 8;
//ranking = int
int ranking = 4;
//fecha de apertura string
int fechadeapertura = 8;

tamfila = (10*4)+(9*8);
printf("\n el calculo de una fila son  bytes: %i\n",tamfila);
//numero de filas por pagina 35
tampag = ((10*4)+(9*8)*35);
printf("\n el calculo de una pagina en bytes: %i\n",tampag);

//suponiendo un total de  registros de 55,000
totbase = (((10*4)+(9*8)*35)*55000);
printf("\n el calculo de toda la base de datos en bytes: %i\n",totbase);



return 0; 
}

