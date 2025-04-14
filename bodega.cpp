#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int eleccion;





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
