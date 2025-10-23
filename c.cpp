#include <iostream>
using namespace std;
int main () {
    //Faça um programa que lê um número inteiro e imprime o dobro desse número.
    int numero;
    cout <<"digite um número inteiro";                                 
    cin >> numero;
    cout << numero * 2<< endl;
    return 0;
}

#include <iostream>
using namespace std;
int main () {
    //Faça um programa que leia um número inteiro e imprima o quadrado desse número e o correspondente a sua quinta parte.
   int numero, dobro;
   float quinto;
   cout<<"Digite um número --> ";
   cin >> numero;
   quadrado = numero * numero;
   quinto = numero / 5;
   cout<<dobro<<endl<<quinto;
}
 #include <iostream> //Questão 9
using namespace std; 
int main () {
    int valor = 36;
    int cem, resto, cinquenta, vinte, dez, cinco, dois, um;
    
    cem = valor/100;
    cout<<cem<<endl;
    resto = valor %100;
    


    cinquenta = resto/ 50;
    cout<<cinquenta<<endl;
    resto = resto % 50;
    

    vinte = resto/ 20;
    cout<<vinte<<endl;
    resto = resto % 20;
    
    
    
    dez = resto/ 10;
    cout<<dez<<endl;
    resto = resto % 10;
    

    cinco = resto/ 5;
    cout<<cinco<<endl;
    resto = resto % 5;
    

    dois = resto/ 2;
    cout<<dois<<endl;
    resto = resto % 2;
    

    um = resto/ 1;
    cout<<um<<endl;
    resto = resto % 1;
} 
#include <iostream> //Questão 13
using namespace std;
int main2 () {
    int compra = 0;
    int canhão = 10000;
    int polvora = 2000;
    int espadas = 1500;
    int dinheiro = 123500;

    compra = dinheiro / canhão;
    cout<<compra<<endl;
    dinheiro = dinheiro % canhão;

    compra = dinheiro / polvora;
    cout<<compra<<endl;
    dinheiro = dinheiro % polvora;

    compra = dinheiro / espadas;
    cout<<compra<<endl;
    dinheiro = dinheiro % espadas;
    cout<<dinheiro<<endl;
}
