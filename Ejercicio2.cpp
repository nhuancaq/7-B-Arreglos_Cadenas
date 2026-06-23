//Ejercicio 2 [Práctica de arreglos unidimensionales]
//Desarrolle un programa de n elementos y forme dos arreglos nuevos,uno con los elementos pares y otro con los elemtos impares del arreglo
#include <iostream>
using namespace std;
int main (){

    int n;
    cout<<"Ingrese la cantidad de los elementos del arreglo:"<<endl;
    cin>>n;
    int A[n];
    int pares[n];
    int impares[n];
    int contPares = 0;
    int contImpar = 0;

    cout<<"Ingrese los numeros:"<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];

    }
    for(int i=0;i<n;i++){
        if(A[i]%2==0){
            pares[contPares]=A[i];
            contPares++;

        }else{
            impares[contImpar]=A[i];
            contImpar++;

            
        }

        
    }


    return 0;
}