#include <iostream>
#include "Persona.h"
#include <cstring>
using namespace std;

Persona::Persona() {

}
Usuario::Usuario() {

}
Persona::Persona(char nombres[100], char apellidos[100]) {

    strcpy(this->nombres,nombres);
    strcpy(this->apellidos,apellidos);
   


}
Usuario::Usuario(char nombres[100], char apellidos[100],int edad){
	strcpy(this->nombres,nombres);
    strcpy(this->apellidos,apellidos);
    this->edad=edad;
}
void Persona::toString() {

    cout << "<====== Informacionn =======>"<<endl;
    cout << "Nombre: "<< this->nombres << endl;
    cout << "Apellidos: "<< this->apellidos << endl;
    cout << endl<<endl;
}
void Usuario::toString() {
char nombres[100];

    cout << "<====== Informacionn del usuario=======>"<<endl;
    cout << "Nombre: "<< this->nombres << endl;
    cout << "Apellidos: "<< this->apellidos << endl;
    cout << "Edad: "<< this->edad <<endl;
    cout << endl<<endl;
}
