#ifndef CANCION_HPP
#define CANCION_HPP
#include <iostream>
#include <string>
#include <vector>
#include "Genero.hpp"
using namespace std;
class Cancion
{
	private:
		string nombre;
		string artista;
		string genero;
		string duracion;
	public:
		Cancion();
		Cancion(string ,string, string,string);
		~Cancion();
		string getnombre();
		void setnombre(string);
		string getartista();
		void setartista(string);
		
		string getgenero();
		void setgenero(string);
		
		string getduracion();
		//vector<Cancion*> canciones;
		
		void setduracion(string);
		void agregarC(string,string,string,string);
		void ModificarC(int,int);
		void eliminarC(int);
		void ListarC();
};

#endif
