#include <iostream>
#include <cstdlib>
#include <time.h>

#include "OchoEnNueve.h"

using namespace std;


/*
*	@Descripcion:	
*	@Param:	
*	@Retor:
*
*/


/// Métodos heredados que hacen polimorfismo con el virtual
void OchoEnNueve::inicializar(){
	int** matriz;
	int * matriz = new int*[3];
	for (int i = 0; i < 3; ++i){
		matriz[i] = new int*;
	}
	/*srand (time(NULL));
	int random;
	int vector [9];
	for (int i = 0; i < 9 ; ++i){
		vector[i] = -1;	
	}
	for (int i = 0; i < 3;++i){
		for (int j =0; j < 3;++j){
			do {
				random = rand()%9;
			}while (vector[random] != -1);
			
			tableroJugador[i][j] = random;
			vector[random] = random;
		}
	}
	
	int v = rand() % 26 + 65;
	//Estado final 
	
	for (int i = 0; i < 3; ++i){
		tableroEstadoFinal[0][i] = i+1;
	}
	for (int i = 0; i < 3; ++i){
		tableroEstadoFinal[1][i] = i+4;
	}
	for (int i = 0; i < 2; ++i){
		tableroEstadoFinal[2][i] = i+7;
	}
	tableroEstadoFinal[2][3] = 0;
	
	
	for (int i = 0; i < 3;++i){
		for (int j =0; j < 3;++j){
		cout << tableroJugador[i][j] <<" ";
		}
		cout << endl;
	}
	for (int i = 0; i < 3;++i){
		for (int j =0; j < 3;++j){
		cout << tableroEstadoFinal[i][j] <<" ";
		}
		cout << endl;
	}
	*/
}
/*
*
*
*
*
*/
Estado* generarEstado(){
	
}
Estado** OchoEnNueve::getEstadosSiguientesValidos(Estado*){
	Estado** estadosSiguientes;
	int tam = 0;
	int f = 0;
	int c = 0;
	Estado->buscar0(f, c);
	
	//Debería revisar los posibles movimientos alrededor del 0 
	if (f == 1 && c == 1){
		//Vamos a tener 4 estados posible (3 si eliminamos el anterior al actual)
		tam = 3;
		estadosSiguientes* = new Estado*[tam+1];
		estadosSiguientes[tam] =0;
	
	} else {
		if (f+c == 1 || f+c == 3){
		 // Con este solo hay 3 estados posibles (2 si eliminamos el anterior del actual)
		tam = 2;
		estadosSiguientes* = new Estado*[tam+1];
		estadosSiguientes[tam] =0;
	
		} else {
			tam = 1;
			estadosSiguientes* = new Estado*[tam+1];
			estadosSiguientes[tam] =0;
	
			// Acá tenemos solo 2 estados (solo 1 estado si quitamos el anterior del actual)
		}
	}
	int contador = 0;
	while (contador < tam){
		
	}
	
	
	int victima =0;
	if (f-1>0){
		Estado* copia1 = Estado->copiar();
		victima = copia1->estado[f-1][c];
		copia1->estado[f-1][c] = copia1->estado[f][c];
		copia1->estado[f][c] = victima;
		++tam;
	}
	if (c+1 < 3){
		Estado* copia2 = Estado->copiar();
		victima = copia2->estado[f][c+1];
		copia2->estado[f][c+1] = copia2->estado[f][c];
		copia2->estado[f][c] = victima;
		++tam;
	}
	if (f+1 < 3){
		Estado* copia3 = Estado->copiar();
		victima = copia3->estado[f+1][c];
		copia3->estado[f+1][c] = copia3->estado[f][c];
		copia3->estado[f][c] = victima;
		++tam;
	}
	if (c-1 >0){
		Estado* copiar4 = Estado->copiar();
		victima = copia4->estado[f][c-1];
		copia4->estado[f][c-1] = copia4->estado[f][c];
		copia4->estado[f][c] = victima;
		
		++tam;
	}
	
	estadosSiguientes* = new Estado*[tam+1];
	estadosSiguientes[tam] =0;
	if (f-1>0){               
		
	}
	if (c+1 < 3){
		
	}
	if (f+1 < 3){
		
	}
	if (c-1 >0){
		
	}
	
	
	
}
double OchoEnNueve::coeficienteDeSimilitud(Estado*,Estado*){
	
}
const Estado * OchoEnNueve::getEstadoInicial(){
	return estadoInicial;
}
const Estado * OchoEnNueve::getEstadoFinal(){
	return estadoFinal;
}
OchoEnNueve::~OchoEnNueve(){
	
}
