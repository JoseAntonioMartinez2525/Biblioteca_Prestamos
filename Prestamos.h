#ifndef PRESTAMOS_H
#define PRESTAMOS_H

#include "Libro.h"
#include "Persona.h"

class Prestamos
{
	private: 
	
	Libro prestado;
	char f1[20];
	char f2[20];
	bool estatus=true;
	Usuario nom;
	public:
		Prestamos();
		Prestamos(Libro ,char[],char[],bool,Usuario);
		void getLibro();
		void update();
		void toString();
		
};

#endif
