#ifndef ALBUM_HPP
#define ALBUM_HPP
#include <iostream>
#include <string>
#include <vector>
#include "Cancion.hpp"
class Album
{
	private:
		string nombre;
		vector <Cancion*> canciones;
	public:
		Album();
		Album(string);
		~Album();
		string getnombre();
		void setnombre(string);
		void ListarA();
};

#endif
