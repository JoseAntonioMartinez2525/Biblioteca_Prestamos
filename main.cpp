#include "Prestamos.h"
#include <iostream>
#include <math.h>
#include <cstring>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <time.h>
#include "Persona.h"
#include "Libro.h"

using namespace std;

Prestamos realizar(){
	Libro prestado;
	char titulo[100];
	Persona autor;
	int anio;
	char genre[100];
	char edit[100];
	char isbn[100];	
	char f1[20];
	char f2[20];
	bool estatus=true;
	
	Usuario nom;
		char nombres[100];
		char apellidos[100];
		int edad;
		
        
        
	cout << "<====== Informacion del Prestamo=======>:" <<endl;
	if(estatus==true){
		cout<<"libro disponible"<<endl;
	}else{
		cout<<"libro No disponible"<<endl;
	}
	
	nom=Usuario(nombres,apellidos,edad);
	return Prestamos(prestado,f1,f2,estatus,nom);
	
}
Prestamos devolver(){
	Libro prestado;
	char f2[20];
	char f1[20];
	char nombres[100];
	char apellidos[100];
	bool estatus=false;
	int edad;
	Usuario nom;
	cout << "<====== Informacion del Prestamo=======>:" <<endl;
		if(estatus==true){
		cout<<"libro disponible"<<endl;
	}else{
		cout<<"libro No disponible"<<endl;
	}
	nom=Usuario(nombres,apellidos,edad);
	return Prestamos(prestado,f1,f2,estatus,nom);
	
}
Usuario reg(){
	//datos del usuario
	    char nombres[100];
        char apellidos[100];
        int edad;
        
    cout << "Nombre: ";cin>>nombres;
    cout << "Apellidos: ";cin>>apellidos,
    cout << "Edad: ";cin>>edad;

return Usuario(nombres, apellidos,edad);
}
Libro registrar(){
            //Datos del libro
            char titulo[100];
			Persona autor;
			char nombres[100];
        	char apellidos[100];

			int anio;
			char genre[100];
			char edit[100];
			char isbn[100];	
			//Datos del libro
					cout<<"<--Registrar libro-->"<<endl;
     				cout<<"Ingrese el Titulo del libro: ";cin>>titulo;
     				cout<<"Ingrese el nombre del autor: ";cin>>nombres;
     				cout<<"Ingrese el apellido del autor: ";cin>>apellidos;

					cout<<"Ingrese el Annio del libro: ";cin>>anio;
					cout<<"Ingrese el genero del libro: ";cin>>genre;
					cout<<"Ingrese la editorial del libro: ";cin>>edit;
					cout<<"Ingrese el ISBN del libro:: ";cin>>isbn;
				autor=Persona(nombres,apellidos);	
				return Libro(titulo,autor,anio,genre,edit,isbn);		
				
}
void menu(){
    cout << "<========= MENU ====================>"<<endl;
    cout << "<=== 1.- Administrar usuarios=======>"<<endl;
    cout << "<=== 2.- Administrar libros=========>"<<endl;
    cout << "<=== 3.- Administrar Prestamos======>"<<endl;

}


int main(){
    Libro book[100];
    Usuario u[100];
    Prestamos pe[100];
    bool power = true;
    int op = 0, op2=0, bookC = 0, uC=0 ,noBook = 0, b=0,noU = 0,noP=0, pC=0;


    while (power){
        menu();
        cin >> op;

        switch (op) {
        	case 1: cout<<"<----Administrar usuarios---->"<<endl;
        	cout<<"1.Registrar 2.Editar 3.Consultar 4.Eliminar 5.Menu principal"<<endl;
        	cin>>op2;
        	if(op2<5){
        		switch(op2){
        		case 1:cout<<"-----Registrar usuario-----"<<endl;
        		u[uC] = reg();
        		cout<<"registro exitoso: "<<endl;
        		break;
        		
        		case 2:cout<<"-----Editar usuario-----"<<endl;
        		u[uC].toString();
        		u[uC] = reg();
        		break;
        		
        		case 3:cout<<"-----Consultar usuario-----"<<endl;
        		cout<<"Ingrese el numero de usuario: ";cin>>noU;
        		u[noU].toString();
        		break;
        		
        		case 4:cout<<"-----Eliminar usuario-----"<<endl;
        		cout<<"Ingrese el numero de usuario: ";cin>>noU;
        		u[noU].toString();
        			u[noU]=Usuario();
        			cout<<"Usuario eliminado"<<endl;
        		break;
        		
				}

			}else{
			cout<<"1.Registrar 2.Editar 3.Consultar 4.Eliminar 5.Menu principal"<<endl;
        	cin>>op2;
        	
			}
        case 2: cout<<"<----Administrar libros---->"<<endl;	
            cout<<"1.Registrar 2.Editar 3.Consultar 4.Eliminar 5.Menu principal"<<endl;
        	cin>>op2;
        if(op2<5){
        	switch(op2){
        	case 1:	cout<<"-----Registrar libros-----"<<endl;
        	cout<<"Cuantos libros quiere registrar?: ";cin>>b;
        	        	for(bookC=0; bookC<b; bookC++){
        		book[bookC] = registrar();
			}
			break;
			case 2:cout<<"--Editar--"<<endl;
				book[bookC].toString();
				book[bookC] = registrar();
			
            break;
            case 3:cout<<"--Consultar--"<<endl;
			cout<<"Ingrese el numero del libro: ";cin>>noBook;
                book[noBook].getAutor();			
			
                break; 
			case 4:cout<<"--Eliminar datos--"<<endl;
			cout<<"Ingrese el numero del libro: ";cin>>noBook;
                book[noBook].toString();
				book[noBook]=Libro();
			cout<<"Libro eliminado"<<endl;			
                break;
				default:
                power = true;
                break;   
 				                       
			}
		}else{
		 cout<<"1.Registrar 2.Editar 3.Consultar 4.Eliminar 5.Menu principal"<<endl;
        	cin>>op2;			
		}

		case 3:cout<<"<----Administrar prestamos---->"<<endl;
		 cout<<"1.Realizar prestamo 2.Devolver libro 3.Consultar prestamo"<<endl;
		cin>>op2;
        if(op2<4){
        	switch(op2){
        		case 1:cout<<"-----Realizar prestamo-----"<<endl;
        		pe[pC]=realizar();
        			break;
        			
        		case 2:cout<<"-----Devolver libro-----"<<endl;
        		pe[pC]=devolver();
        			break;
        			
        		case 3:cout<<"-----Consultar prestamo-----"<<endl;
        		pe[pC]=devolver();
        			break;
        		default:
                power = true;
                break;
        			
			}
		}else{
			cout<<"1.Registrar 2.Editar 3.Consultar 4.Eliminar 5.Menu principal"<<endl;
        	cin>>op2;
		}
		
        }
       
    }

    return 0;
}
