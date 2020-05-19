#include "Libro.h"
#include "Persona.h"
#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

Libro::Libro() {

}
Libro::Libro(char titulo[100], Persona autor, int anio, char genre[100], char edit[100],char isbn[100])
{
	strcpy(this->titulo,titulo);
	this->autor = autor;
	this->anio = anio;
    strcpy(this->genre,genre);
    strcpy(this->edit,edit);
	strcpy(this->isbn,isbn);
	
}

void Libro::update(char titulo[100], Persona autor, int anio, char genre[100], char edit[100],char isbn[100])
{
	strcpy(this->titulo,titulo);
	this->autor = autor;
	this->anio = anio;
    strcpy(this->genre,genre);
    strcpy(this->edit,edit);
	strcpy(this->isbn,isbn);	
}
void Libro::getAutor(){
	this->autor.toString();
}	

void Libro::toString(){

		int anio;
		char genre[100];
		char edit[100];
		char isbn[100];
		char titulo[100];
        char nombres[100];
        char apellidos[100];

    cout << "<====== Informacion del libro=======>"<<endl;
	cout<<"Titulo: "<<this->titulo<<endl;
	this->autor.toString();
	cout<<"Annio: "<<this->anio<<endl;
	cout<<"Genero: "<<this->genre<<endl;
	cout<<"Editorial: "<<this->edit<<endl;
    cout<<"ISBN: "<<this->isbn<<endl;
	
}
