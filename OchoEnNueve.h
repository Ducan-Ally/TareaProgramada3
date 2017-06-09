#ifndef _OchoEnNueve_2017
#define _OchoEnNueve_2017
#include "Problema.h"
#include "Estado8en9.h"
class OchoEnNueve: public Problema{
	
	private:
		Estado* estadoFinal; /// Este es el tablero con el que se va iniciar i.e el que tendrá el estado inicial
  		Estado* estadoInicial;///Este es el tablero que tiene el estado final;
		void buscar0 (int&, int&);
	public:
		OchoEnNueve();
		void inicializar(); 
		Estado** getEstadosSiguientesValidos(Estado*);
		double coeficienteDeSimilitud(Estado*,Estado*);
		const Estado * getEstadoInicial();	
		const Estado * getEstadoFinal();
		~OchoEnNueve(); //Necesito eliminar los estados que creo, eso pienso

};


#endif