#ifndef PRESTAMOS_H
#define PRESTAMOS_H

#include "Libro.h"
#include "Persona.h"

class Prestamos
{
	private: 
	
	Libro prestado;
	char fechaP[20];
	char fechaD[20];
	char est1='ocupado';
	char est2='devuelto';
	Usuario nom;
	public:
		Prestamos();
		Prestamos(Libro,char[],char[],char,char,Usuario);
		void getLibro();
		void update();
		void toString();
		
};

#endif
