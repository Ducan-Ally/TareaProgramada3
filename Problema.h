#ifndef _PROBLEMA_2017
#define _PROBLEMA_2017
#include<iostream>
#include "Estado.h"

class Problema {
	public:
	   /** Inicializar pide al usuario ( en caso de ser necesario , sino queda vacio )
	   **  los datos para inicializar los estados del problema y cualquier otra información
	   **  específica del problema en cuestión
	   **/
    	virtual void inicializar()=0;

	   /** @param Estado Es el estado actual al que ha llegado el problema y
	   **  que se desea expandir en los siguientes estados posibles
	   **  @return Un vector de punteros a los posibles estados siguientes
	   **  la última celda del vector debe contener un puntero en 0 ( NULO )
	   **  El usuario que recibe los estados debe asegurarse que sean destruidos correctamente
	   **/
	   virtual Estado ** getEstadosSiguientesValidos( Estado * )=0;

	   /**
       ** @param estado1 Uno de los dos estados cuya distancia con respecto al otro se quiere calcular
       ** @param estado2 Uno de los dos estados cuya distancia con respecto al otro se quiere calcular
	   ** @return coeficiente de tipo double que indica un valor aproximado
	   ** de distancia existente entre los estados, 0 indica que los estados son iguales.
       **/
	   virtual double coeficienteDeSimilitud( Estado *, Estado *);

	   /** @return Un puntero que apunta al Estado inicial del problema
	   **  Apuntará a una instancia almacenada dentro del problema por eficiencia
	   **  así que no debe ser destruido por quien lo recibe
	   **/
	   virtual const Estado * getEstadoInicial()=0;

	   /** @return Un puntero que apunta al Estado final del problema
	   **  Apuntará a una instancia almacenada dentro del problema por eficiencia
	   **  así que no debe ser destruido por quien lo recibe
	   **/
	   virtual const Estado * getEstadoFinal()=0;



	   /** Destructor virtual puro
	   **/
	   virtual ~Problema()=0;
};

#endif
