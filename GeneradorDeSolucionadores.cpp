#ifndef _GENERADOR_DE_SOLUCIONADORES_2017
#define _GENERADOR_DE_SOLUCIONADORES_2017
#include "Solucionador.h"
class GeneradorDeSolucionadores {
	private:
	   Solucionador ** solucionadores; // Puntero a vector de punteros a instancias de solucionadores
	public:
	/** 
    ** @param nombre del tipo de solucionador que se desea obtener desde la clase generadora
	** @return solucionador creado por copia del tipo que se recibe como parámetro
	**/   
	GeneradorDeSolucionadores();
	~GeneradorDeSolucionadores();
    Solucionador * getSolucionador(const char *);
};

#endif