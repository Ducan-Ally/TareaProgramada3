#include "Estado8en9.h"

using namespace std;


void buscar0(int& filas, int& columnas){
	int encontrado = 0;
	int contadorf= 0;
	int contadorc = 0;
	while (!encontrado && contadorf < 3){
		while (!encontrado && contadorc < 3){
			if (estado [contadorf][contadorc] == 0){
				encontrado = 1;
			}
		}
	}
}
Estado8en9* Estado8en9::inicializar(int** tablero){
	estado* = new int* [3];
	for (int i=0; i<3; ++i){
		estado = new int [3];
	}
	for (int i = 0; i<3; ++i){
		for (int j=0; j <3; ++i){
			estado[i][j] = tablero[i][j];
		}
	}
}
Estado8en9* Estado8en9::copiar(){
	Estado8en9* copia = inicializar(this->estado);
	return copia;
}


ostream& Estado8en9::imprimir(ostream & salida){
	for(int i = 0; i < 3; ++i){
		for (int j = 0; j < 3; ++j){
			salida << estado[i][j];
		}
		salida << endl;
	}
}

