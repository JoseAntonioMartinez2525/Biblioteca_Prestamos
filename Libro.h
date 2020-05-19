#ifndef LIBRO_H
#define LIBRO_H

#include "Persona.h"
#include <cstring>
#include <string>
class Libro{
private:
char titulo[100];
Persona autor;
int anio;
char genre[100];
char edit[100];
char isbn[100];

public:
	Libro();
	Libro(char[],Persona,int,char[],char[],char[]);
	void update(char[],Persona,int,char[],char[],char[]);
	void getAutor();
	void toString();
};

#endif
