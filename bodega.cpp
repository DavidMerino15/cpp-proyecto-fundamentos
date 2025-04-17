#include<iostream>
#include<conio.h>
#include <fstream> //LIBRERIA PARA PODER CREAR TXT
using namespace std;


//ESTRUCTURAS
struct Producto{
	string nombre;
	string tipo;
	int cantidad;
	
};
struct Proveedor{
string nombre;      
string direccion;   
string telefono;    
string correo;      
string categoria; 	
};
struct Cliente{	
double dni;
string nombre;       
string direccion;    
string telefono;     
string correo;
};
//FUNCIONES
void VisualizarProductos(Producto productos[], int cantidadProductos);
void VisualizarProveedores(Proveedor proveedores[], int cantidadProveedores);
void VisualizarClientes(Cliente clientes[], int cantidadClientes);

int main(){
int eleccion;




//FUNCIONES DEL PROGRAMA
//Funcion 1
void VisualizarProductos(Producto productos[]){
	
cout<<"Los productos registrados son: "<<endl;	
for(i=0;i<=productos[];i++)	{
cout<<i<<". "<<"Nombre: "<<productos[i].nombre
    <<", Tipo: "<<productos[i].tipo
    <<", Cantidad: "<<productos[i].cantidad<<endl;	
}
		
}

//Funcion 2

//Funcion 3

//Funcion 4

//Funcion 5
void VisualizarProveedores(Provedor proveedores[]){
	
cout<<"El registro de proveedores es: "<<endl;	
for(i=0;i<=proveedores[];i++)	{

}
		
}
//Funcion 6
void VisualizarClientes(Cliente clientes[]){
	
cout<<"El registro de clientes es: "<<endl;	
for(i=0;i<=clientes[];i++)	{
	
}
		
}




//Fin DE FUNCIONES

///MENU DEL PROYECTO DE FUNDAMENTOS
cout<<"     MENU     "<<endl;
cout<<"1.Visualizar productos"<<endl;
cout<<"2.Agregar productos"<<endl;	
cout<<"3.Editar productos"<<endl;
cout<<"4.Eliminar productos"<<endl;	
cout<<"5.Registro de proveedores"<<endl;
cout<<"6.Registro de clientes"<<endl;
cout<<"Introduce el numeroo de tu eleccion: ";cin>>eleccion;
switch(eleccion){
case 1:cout<<"Visualizar productos"<<endl;break;
case 2:cout<<"Agregar productos"<<endl;break;	
case 3:cout<<"Editar productos"<<endl;break;	
case 4:cout<<"Eliminar productos"<<endl;break;	
case 5:cout<<"Registro de proveedores"<<endl;break;	
case 6:cout<<"Registro de clientes"<<endl;break;	
default:cout<<"OPCION NO VALIDA"; break;
}
//FIN DEL MENU





return 0;
getch();
}
