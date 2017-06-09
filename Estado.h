#ifndef _ESTADO_2017
#define _ESTADO_2017
#include<iostream>

class Estado {
    /** Método amigo que invoca al imprimir de cada estado específico
	**  en forma polimórfica
	**/
    friend std::ostream& operator<<(std::ostream& salida, Estado s){
	   return s.imprimir(salida);
	}
	
	public:
	   /** Método para imprimir un estado 	
	   **/
       virtual std::ostream& imprimir(std::ostream&)=0;
};

#endif