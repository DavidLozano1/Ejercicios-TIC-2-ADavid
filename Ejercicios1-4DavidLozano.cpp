//David Lozano Acosta 2º Bach A

#include<iostream>
#include<cmath>
 
using namespace std;

void ej1(){
	//Ejercicio 1: calcula la resta de dos numeros que introduzca el usuario. utiliza tres variables
	
	cout<<"\n----Ejercicio 1: ----"<<endl;
	int x, y, res; 
	
	cout<<"\n------------------------------"<<endl;
	cout<<"Introduce el primer numero: "; cin>>x;
	cout<<"Introduce el segundo numero: "; cin>>y;
	cout<<"-------------------------------"<<endl;
	
	res = x - y;
	
	cout<<"La resta de "<< x <<" menos "<< y <<" es: "<<res<<endl;
		
}

void ej2(){
	/*Ejercicio 2
	* Crea un programa que calcule el coseno de angulos con los siguientes grados: 30, 45, 60, 90
	*/
	int n1 = 30, n2 = 45, n3 = 60, n4 = 90;
	cout<<"\n----Ejercicio 2: ----"<<endl;
				
	cout<<"El coseno de "<<n1<<" en radianes es: "<<cos(n1)<<endl;
	cout<<"El coseno de "<<n2<<" en radianes es: "<<cos(n2)<<endl;
	cout<<"El coseno de "<<n3<<" en radianes es: "<<cos(n3)<<endl;
	cout<<"El coseno de "<<n4<<" en radianes es: "<<cos(n4)<<endl;
	
}

void ej3(){
	/*Ejercicio 3
	* Realiza un programa que pida cuatro notas de un examen y calcule su media
	*/
	float m,l,h,i, media;
	cout<<"\n----Ejercicio 3: ----"<<endl;
	
	cout<<"\nNota en Mates: "; cin>>m;
	cout<<"\nNota en Lengua: "; cin>>l;
	cout<<"\nNota en Historia: "; cin>>h;
	cout<<"\nNota en Ingles: "; cin>>i;
	
	if(m>10 || l>10 || h>10 || i >10){
		cout<<"\nNota no valida!!"<<endl;
	}else if(m < 0 || l<0 || h <0 || i <0){
			cout<<"\nNota no valida!!"<<endl;
		}else{
			media = (m+l+i+h)/4;
			cout<<"\nTu media es: "<<media<<endl;
		}
	if(media >=5){
		cout<<"Estas aprobado!!"<<endl;
	}else{
		cout<<"Estas suspenso!!"<<endl;	
	}
}

void ej4(){
	/*Ejercicio 4
	* Crea un programa que pida al usuario una cantidad de pulgadas y calcule su equivalencia en metros(1 pulgada = 0.0254m)
	* ¿Que tipo de variable necesitas usar?
	*/
	
	float p = 0.0254, u, eq;
	cout<<"\n----Ejercicio 4: ----"<<endl;
	
	cout<<"\nIngrese las pulgadas: "; cin>>u;
	eq = u * p;
	cout<<"\nTienes "<<eq<<" metros"<<endl;
}

int main(){
	int op;
	while(true){
		cout<<"\n----Bienvenido!!----";
		cout<<"\nEjercicio 1"<<endl;
		cout<<"Ejercicio 2"<<endl;
		cout<<"Ejercicio 3"<<endl;
		cout<<"Ejercicio 4"<<endl;
		cout<<"5. Salir"<<endl;
		cout<<"Que ejercicio deseas ver: "; cin>>op;
		switch(op){
			case 1:
				ej1();
				break;
			case 2: 
				ej2();
				break;
			case 3: 
				ej3();
				break;
			case 4: 
				ej4();
				break;
			case 5:
				cout<<"\n----Gracias por ver----"<<endl;
				return false;
				break;
			default:
				cout<<"Ingrese un valor valido!!"<<endl;
		}
	}
	return 0;
}
