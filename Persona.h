
#ifndef UNTITLED_PERSONA_H
#define UNTITLED_PERSONA_H


class Persona {
    private:
        char nombres[100];
        char apellidos[100];

        

    public:
       Persona();
       Persona(char [],char []);
       void toString();
       
};

class Usuario{
	private:
		char nombres[100];
        char apellidos[100];
		int edad;
	public:
		Usuario();
       Usuario(char [],char [],int);
	   void toString();	
};
#endif
