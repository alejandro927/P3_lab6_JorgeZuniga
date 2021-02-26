#include <iostream>
#include "Cancion.hpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {

	Cancion* can = new Cancion();

	int opcion=-1;
	while(opcion!=5) {
		cout<<"Las opciones son:\n 1)Mantenimiento \n 2)Sobrecarga con el operador * \n 3)Sobrecarga con el operador + \n 4)Sobrecarga con el operador -\n 5)Salida \n Elija su opcion:";
		cin >>opcion;
		cout<<endl;
		switch(opcion) {
			case 1: {
				int opc=0;
				while(opc!=5) {
					cout<<"Submenu de mantenimiento\n 1)Agregar \n 2)Modificar \n 3)Eliminar \n 4)Listar\n 5)Salir \n Elija su opcion:";
					cin>>opc;
					switch(opc) {
						case 1: {
							string nombre="",artista="",genero="",duracion="";
							cout<<"Agrege el nombre de la cancion:";
							getline(cin,nombre);
							getline(cin,nombre);
							cout<<"Agrege el nombre del artista:";
							getline(cin,artista);
							cout<<"Agrege el genero:";
							getline(cin,genero);
							cout<<"Agrege el tiempo de duracion con el formato (minutos:segundos):";
							getline(cin,duracion);
							/*
							int contador1=0;
							int contador2=0;
							for(int i=0;i<duracion.length();i++){
								if(duracion[i] == ':'){
									cout<<"aqui esta i:"<<i;
								}
							}
							cout<<endl;
							*/
							can -> agregarC(nombre,artista,genero,duracion);

						}
						break;
						case 2: {
							int posicion;
							int opc=0;
							cout << "=====Aqui se modifican las canciones====="<<endl;
							cout<<"Ingrese la posicion del equipo que desea modificar:"<<endl;
							cin>>posicion;
							cout<<"Las opciones a modificar son:\n 1)El nombre \n 2)El artista\n 3)Duracion\n 4)Genero \n Su opcion:";
							cin>>opc;
							can -> ModificarC(posicion,opc);

						}
						break;
						case 3: {
							int posi=0;
							cout << "=====Aqui se eliminan las canciones====="<<endl;
							cout << "Ingrese la posicion de la cancion a eliminar:";
							cin>>posi;
							can -> eliminarC(posi);
						}
						break;
						case 4: {
							int opc1=0;
							cout<<"1)listar canciones\n 2)listar generos\n 3) Listar PlayList \n 4) Listar Album \n Elija su opcion:";
							cin>>opc1;
							switch(opc1) {
								case 1: {
									cout << "=====Aqui se enlistan las canciones====="<<endl;
									can->ListarC();
								}
								break;
								case 2: {

								}
								break;
								case 3: {

								}
								break;
								case 4: {

								}
								break;
							}

						}
						break;
					}
				}
			}
			break;
			case 2: {

			}
			break;
			case 3: {

			}
			break;
			case 4: {

			}
			break;

		}
	}
	delete can;
	return 0;
}
