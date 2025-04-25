#include<iostream>
#include<conio.h>
#include <fstream> //LIBRERIA PARA PODER CREAR TXT
using namespace std;


//ESTRUCTURAS(son todos las variables que usaremos xd)
struct Producto{
double ID;
string descripcion;
string Nombre;
string Categoria;
double Precio;
int Stock;
double (ID)Proveedor;	
};
struct Proveedor{
double ID;
string Nombre;
double Teléfono;
string Correo;
string Direccion;	
};
struct Cliente{	
double ID(dni);
string nombre;       
string direccion;    
string telefono;     
string correo;
};

//Vectores(Son para almacenar los datos, luego los guardaremos en el txt)
vector<Producto> productos;
vector<Proveedor>& proveedores;
vector<Cliente>& clientes;
//FUNCIONES(solo para saber ue funciones vamos a usar)
void visualizarProductos(vector<Producto>& productos);
void visualizarProveedores(vector<Proveedor>& proveedores);
void visualizarClientes(vector<Cliente>& clientes);

int main(){
int eleccion;




//FUNCIONES DEL PROGRAMA
//Funcion 1
void visualizarProductos(vector<Producto>& productos){
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
void visualizarProveedores(vector<Proveedor>& proveedores){
	
cout<<"El registro de proveedores es: "<<endl;	
for(i=0;i<=proveedores[];i++)	{

}
		

//Funcion 6
void visualizarClientes(vector<Cliente>& clientes){
	
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
case 1:cout<<"Visualizar productos"<<endl;
       visualizarProductos(productos);
break;
case 2:cout<<"Agregar productos"<<endl;
break;	
case 3:cout<<"Editar productos"<<endl;break;	
case 4:cout<<"Eliminar productos"<<endl;break;	
case 5:cout<<"Registro de proveedores"<<endl;
      visualizarProveedores(proveedores);
break;	
case 6:cout<<"Registro de clientes"<<endl;
      visualizarClientes(clientes);
break;	
default:cout<<"OPCION NO VALIDA"; break;
}
//FIN DEL MENU





return 0;
getch();
}
