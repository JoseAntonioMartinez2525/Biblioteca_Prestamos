#include "Prestamos.h"
#include "Libro.h"
#include "Persona.h"
#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;
Prestamos::Prestamos(){
	
}
Prestamos::Prestamos(Libro prestado,char f1[20],char f2[20],bool estatus,Usuario nom){
	
		this->prestado=prestado;
		strcpy(this->f1,f1);
		strcpy(this->f2,f2);
		this->nom = nom;
}

void Prestamos::update(){
Libro prestado;
char f1[20];
char f2[20];
Usuario nom;
		
		this->prestado=prestado;
		strcpy(this->f1,f1);
		strcpy(this->f2,f2);
		this->nom = nom;

	
}
void Prestamos::getLibro(){
	this->prestado.toString();
}

void Prestamos::toString(){
	Libro prestado;
	char f1[20];
	char f2[20];
	char nombres[100];
	char apellidos[100];
	int edad;
	Usuario nom;
	bool estatus=true;
	cout << "<====== Informacion del Prestamo=======>:" <<endl;
	this->prestado.toString();
	cout<<"Fecha prestamo: "<<this->f1<<endl;
	cout<<"Fecha devuelta : "<<this->f2<<endl;
	this->nom.toString();
	
	
	
}
