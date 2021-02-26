#include "Genero.hpp"
Genero::Genero(){
}

Genero::Genero(string n){
	this->nombre = n;
}

Genero::~Genero(){
}

string Genero::getnombre(){
	return this->nombre;
}

void Genero::setnombre(string n){
	this->nombre=n;
}

void Genero::agregarG(string nombre){
	for(int i=0;i<generos.size();i++){
		if(generos.at(i) != nombre){
			generos.push_back(nombre); 
		}
	}
}

void Genero::ListarG() {
		cout <<"------Generos------"<<endl;
	for(int i = 0; i < generos.size(); i++) {
		Genero *c = generos[i];
		cout << i<<") "<<"Nombre: "<< c->getnombre() <<endl;
	}
}
