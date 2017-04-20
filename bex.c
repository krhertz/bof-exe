'''  
 * Author Krh3rtz 2017
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  
'''
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
