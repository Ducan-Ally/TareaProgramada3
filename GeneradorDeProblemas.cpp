#ifndef _GENERADOR_DE_PROBLEMAS_2017
#define _GENERADOR_DE_PROBLEMAS_2017
#include "Problema.h"
class GeneradorDeProblemas {
	private:
	   Problema ** problemas; // puntero a vector de punteros a instancias de problema
	public:
	   GeneradorDeProblemas();
	   ~GeneradorDeProblemas();
	/** 
    ** @param nombre del tipo de problema que se desea obtener desde la clase generadora
	** @return problema creado por copia del tipo que se recibe como parámetro
	**/   
    Problema * getProblema(const char *);
	
};

#endif
