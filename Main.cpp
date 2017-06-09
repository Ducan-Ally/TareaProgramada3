#include "Solucionador.h"
#include "Problema.h"
#include "Solucion.h"
#include "GeneradorDeSolucionadores.h"
#include "GeneradorDeProblemas.h"
#include "Estado.h"

// ELIMINAR
#include "OchoEnNueve.h"
#include<iostream>
using namespace std;

int main(){
 /*
  char entrada[100];
  Problema * problemaPtr;
  Solucionador * solucionadorPtr;
  
  GeneradorDeSolucionadores generadorS;
  GeneradorDeProblemas generadorP;
  
  cout << "Cual problema quiere solucionar?"<<endl;
  cin >> entrada;
  cout << endl;
  problemaPtr = generadorP->getProblema(entrada);
  
  cout << "Cual es el solucionador que quiere utilizar?"<<endl;
  cin >> entrada;
  cout << endl;	  
  solucionadorPtr = generadorS->getSolucionador(entrada);
 
  problemaPtr->inicializar(); // Pide info al usuario si necesita
  
  solucionadorPtr->setProblema(problemaPtr); // Asocia el problema con el solucionador
  
  Solucion * s = solucionadorPtr->solucionar();
  
  cout << *s << endl;
  */
  OchoEnNueve prueba;
  prueba.inicializar();
  
  return 0;
}
