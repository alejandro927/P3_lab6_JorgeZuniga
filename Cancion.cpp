#include "Cancion.hpp"
Cancion::Cancion() {

}
Cancion::Cancion(string n,string a,string g,string d) {
	this-> nombre = n;
	this-> artista = a;
	this-> genero = g;
	this-> duracion = d;
}

Cancion::~Cancion() {
}

string Cancion::getnombre() {
	return this->nombre;
}

void Cancion::setnombre(string n) {
	this->nombre = n;
}

string Cancion::getartista() {
	return this->artista;
}

void Cancion::setartista(string a) {
	this->artista = a;
}

string Cancion::getgenero() {
	return this->genero;
}

void Cancion:: setgenero(string g) {
	this->genero = g;
}

string Cancion::getduracion() {
	return this->duracion;
}

void Cancion::setduracion(string d) {
	this->duracion = d;
}


void Cancion::agregarC(string nombre,string artista,string genero,string duracion) {
	Cancion* can = new Cancion(nombre,artista,genero,duracion);
	canciones.push_back(can);
	Genero* gen = new Genero();
	gen->agregarG(genero);
	delete gen;
}

void Cancion::ListarC() {
		cout <<"------Canciones------"<<endl;
	for(int i = 0; i < canciones.size(); i++) {
		Cancion *c = canciones[i];
		cout << i<<") "<<"Nombre: "<< c->getnombre() << "  Artista: "<<c->getartista()<<"  Duracion: "<< c->getduracion()<<"  Genero: "<<c->getduracion()<<endl;
	}
}

void Cancion::ModificarC(int posicion,int opcion) {

	while(posicion < 0 || posicion > canciones.size()) {
		cout<< "Posicion Invalida Ingrese nuevamanete:";
		cin>>posicion;
	}
	switch(opcion) {
		case 1: {
			string nombre="";
			cout<<"Ingrese el nuevo nombre:";
			getline(cin,nombre);
			getline(cin,nombre);
			for(int i = 0; i < canciones.size(); i++) {
				if( i == posicion ) {
					canciones.at(i)->setnombre(nombre);
				}
			}
		}
		break;
		case 2: {
			string artista="";
			cout<<"Ingrese el nuevo artista:";
			getline(cin,artista);
			getline(cin,artista);
			for(int i = 0; i < canciones.size(); i++) {
				if( i == posicion ) {
					canciones.at(i)->setartista(artista);
				}
			}
		}
		break;
		case 3: {
			string duracion="";
			cout<<"Ingrese la nueva duracion:";
			getline(cin,duracion);
			getline(cin,duracion);
			for(int i = 0; i < canciones.size(); i++) {
				if( i == posicion ) {
					canciones.at(i)->setduracion(duracion);
				}
			}
		}
		break;
		case 4 :{
				string genero="";
				cout<<"Ingrese el nuevo genero:";
				getline(cin,genero);
				getline(cin,genero);
				for(int i = 0; i < canciones.size(); i++) {
					if( i == posicion ) {
						canciones.at(i)->setgenero(genero);
					}
				}
				
			}
			break;
	}
}

void Cancion::eliminarC(int posicion) {
	while(posicion < 0 || posicion > canciones.size()) {
		cout<< "Posicion invalida ingrese nuevamente:";
		cin>>posicion;
	}
	for(int i=0; i < canciones.size(); i++) {
		if(i == posicion) {
			canciones.erase(canciones.begin()+i);
		}
	}
}


















