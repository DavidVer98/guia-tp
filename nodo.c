#include<stdio.h>
#include<stdlib.h>

typedef struct structNodo{
	int dato;
	struct structNodo *sig;
}nodo;

//typedef structNodo nodo;

nodo *crearLista(nodo *lista);  //apuntador a una lista
nodo *insertarNodoInicio(int valor ,nodo * lista);
nodo *insertarNodoFinal(int valor,nodo *lista);
void imprimirLista (nodo *lista);

int main(){
	nodo *lista;
	lista =crearLista(lista);
	lista = insertarNodoFinal(5,lista);
	imprimirLista(lista);
return 0;
}
nodo *crearLista(nodo *lista){
	lista  = NULL;
	return lista;
}
nodo *insertarNodoInicio(int valor, nodo*lista){
	nodo *nodoNuevo;
	nodoNuevo =(nodo*) malloc(sizeof(nodo));	/*reservamos espacio de memoria de tamano nodo pero casteo porque es de tipo nodo*/
	if (nodoNuevo != NULL); // verificamos si se reservo los datos de memoria 
	{
		nodoNuevo -> dato = valor;
		nodoNuevo -> sig = lista;
		lista = nodoNuevo;
	}
	return lista;
}

nodo  *insertarNodoFinal (int valor, nodo*lista){
	nodo *nodoNuevo,*nodoAuxiliar;
	nodoNuevo =(nodo*) malloc(sizeof(nodo));
	if(nodoNuevo != NULL){
		nodoNuevo -> dato = valor;
		nodoNuevo -> sig = NULL;
		if(lista == NULL){ //LA LISTA ESTA VACIA CUANDO ES IGUAL A NULL
			lista =nodoNuevo;
		}
		else{
			nodoAuxiliar = lista; // apunte al primer nodo		
			while(nodoAuxiliar ->sig != NULL){
				nodoAuxiliar = nodoAuxiliar -> sig;
				nodoAuxiliar -> sig = nodoNuevo;
				
			}
		}
	}	
	return lista;	
}

void imprimirNodo(nodo *lista){
	nodo	*nodoAuxiliar; //nodo para recorrer la lista
	nodoAuxiliar = lista;
	printf("INICIO ->");
	while(nodoAuxiliar != NULL){
		printf("%d ->",nodoAuxiliar ->dato);
		nodoAuxiliar = nodoAuxiliar ->sig;	
	}
	printf("NULL\n");
}


