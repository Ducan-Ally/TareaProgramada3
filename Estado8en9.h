#ifndef _Estado8en9_2017
#define _Estado8en9_2017
#include "Estado.h"
class Estado8en9 : public Estado {
	private:
		int **estado;
		
	public:
		int** getEstado();
		Estado8en9(int**);
		Estado8en9* inicializar(int **);
		Estado8en9* copiar ();
		void buscar0(int&, int&);
		std::ostream& imprimir (std::ostream &);
}


#endif
