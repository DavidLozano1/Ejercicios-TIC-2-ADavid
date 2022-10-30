//llamada a libreria que permite cin y cout
#include<iostream>

using namespace std;

//creación de operaciones

//ingresar dinero
int ingres(int dinero, int din2)
{
	dinero += din2;
	return dinero;
}

//retirar dinero
int reti(int dinero, int din2)
{
	dinero -= din2;
	return dinero;
}

//ver dinero
void ver(int dinero)
{
	cout<<"\nTienes "<<dinero<<"$\n";
}

int main(){
	
	//creación de variables
	int dinm, op, dinop, dine;
	
	//inicio de cajero
	cout<<"Bienvenido!!\n";
	cout<<"Ingrese tu dinero: "; cin>> dinm;
	//bucle para operaciones
	while(true)
	{
		//opciones del cajero
		cout<<"\n1. Ingresar dinero. \n";
		cout<<"2. Retirar dinero. \n";
		cout<<"3. Ver tu dinero. \n";
		cout<<"4. Salir.\n";
		cout<<"Que deseas hacer: "; cin>>op;
		//elección de opciones
		switch(op)
		{
			case 1:
				cout<<"Dinero a ingresar: "; cin>> dinop;
				//guardar en variable dinm para que traiga el dinero total
				dinm = ingres(dinm, dinop);
				cout<<"\n--Operacion terminada--\n";
				break;
				
			case 2:
				cout<<"Dinero a retirar: "; cin>> dinop;
				//guardar en variable dinm para que traiga el dinero total
				dinm = reti(dinm, dinop);
				cout<<"\n--Operacion terminada--\n";
				break;
				
			case 3:
				//ver dinero
				ver(dinm);
				break;
				
			case 4:
				//salir del cajero
				return false;
				break;
			
			default:
				cout<<"Ingrese una operacion valida!!";
		}
	}
	
	return 0;
}


