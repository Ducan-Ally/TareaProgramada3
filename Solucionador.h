#ifndef _SOLUCIONADOR_2017
#define _SOLUCIONADOR_2017
#include<iostream>
#include "Problema.h"
#include "Solucion.h"

class Solucionador {
	public:
	   /** @param puntero a la instancia de Problema que va a solucionar
	   **  Almacena un puntero hacia el problema que debe resolver el solucionador
	   **/
       virtual void setProblema(Problema *)=0;
	  	   
	   /** @return Puntero a la instancia de Solucion encontrada para el problema
	   **/	   
	   virtual Solucion * solucionar()=0;		   
	   
	   /** Destructor virtual puro
	   **/		   
	   virtual ~Solucionador()=0;
};

#endif