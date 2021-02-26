#ifndef GENERO_HPP
#define GENERO_HPP
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Genero
{
	private:
		string nombre;
	public:
		Genero();
		Genero(string);
		~Genero();
		string getnombre();
		void setnombre(string);
		void agregarG(string);
		vector<string> generos;
		
};

#endif
