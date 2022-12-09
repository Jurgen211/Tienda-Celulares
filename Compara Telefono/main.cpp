#include<iostream>
#include "Tienda1.h"
using namespace std;

int main () {
	Tienda1 * T1 =new Tienda1;
	Tienda1 * T2 =new Tienda1;
	Tienda1 * T3 =new Tienda1;
	Celular *C1=new Celular;
	Celular *C2=new Celular;
	Celular *C3=new Celular;
	int opc;
	ifstream entrada1, entrada2,entrada3;
	ofstream salida1,salida2,salida3;
	
	for(;;){
		cout<<"____________MENU____________\n\n"
			<<"Seleccione una opcion:\n"
			<<"1- Cargar \n"
			<<"2- Ver listas \n "
			<<"3- Recomendaciones \n"
			<<"4- Salir \n";
		cin>>opc;
		switch(opc){
		case 1:{
			cout<<"Seleccione una tienda \n";
			cout<<"1- Tienda 1 \n"
				<<"2- Tienda 2 \n"
				<<"3- Tienda 3 \n";
			cin>>opc;
			if(opc==1){
				entrada1.open("Archivo1.txt");
				while(entrada1.good()){
					C1=Celular::Leer(entrada1);
					if(C1!=NULL){
						T1->InsertarInicio(C1);
					}
				}
			
			
			}else if(opc==2){
				entrada2.open("Archivo2.txt");
				while(entrada2.good()){
					C2=Celular::Leer(entrada2);
					if(C1!=NULL){
						T2->InsertarInicio(C2);
						
					}}}else if(opc==3){
					entrada3.open("Archivo3.txt");
					while(entrada3.good()){
						C3=Celular::Leer(entrada3);
						if(C1!=NULL){
							T3->InsertarInicio(C3);
						}
					}
					
				}
					break;}
			
			
			case 2:{
				cout<<"Tienda 1 \n"
					<<"Tienda 2 \n"
					<<"Tienda 3 \n";
				cin>>opc;
				if(opc==1){
					cout<<T1->toString()<<endl;
				}if(opc==2){
					cout<<T2->toString()<<endl;
				}if(opc==3){
					cout<<T3->toString()<<endl;
				}
				
			}case 3:{
				if(T1->Suma()<T2->Suma()&&T2->Suma()<T3->Suma()){
					cout<<"Le recomiendo comprar en la tienda 1"<<endl;
				}else if(T3->Suma()<T2->Suma()&&T2->Suma()>T1->Suma()){
					cout<<"Le recomiendo comprar en la tienda 2"<<endl;
				}else{
					cout<<"Le recomiendo comprar en la tienda 3"<<endl;
				}
				   break;
				   
				}case 4:{
					return 0;
					break;
				}
					
					
					
					
					
					
					
					
					
					
		}}
	return 0;
}

