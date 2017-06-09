#ifndef _SOLUCION_2017
#define _SOLUCION_2017
#include<iostream>

class Solucion {
    /** Método amigo que invoca al imprimir de cada Solución específica
	**  en forma polimórfica
	**/
    friend std::ostream& operator<<(std::ostream& salida, Solucion s){
	   return s.imprimir(salida);
	}
	
	public:
	   /** Método para imprimir el orden de cambios de estado desde 
	   **  el inicio hasta el final de la solución encontrada 
	   **/
       virtual std::ostream& imprimir(std::ostream&)=0;
};

#endif