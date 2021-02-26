#ifndef PLAYLIST_HPP
#define PLAYLIST_HPP
#include "Cancion.hpp"
class PlayList
{
	private:
		string nombre;
		vector <Cancion> caciones;
		
	public:
		PlayList();
		PlayList(string);
		~PlayList();
		string getnombre();
		void setnombre(string);
		void ListarP();
};

#endif
