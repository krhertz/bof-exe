#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int login (void);

int main (void){

  if (login() == 1){
	system ("/bin/bash");	//stdlib
  }

  return 0;
}

int login (void){
  int autorizar = 0;
  char userIn [51];

  puts ("Favor de ingresar una contraseña: ");
  scanf ("%s", userIn);

  if (strcmp ("secreto", userIn) == 0){
	autorizar = 1;
  }else{
    puts ("Contraseña incorrecta.\nAcceso denegado.");
  }

  return autorizar;
}
