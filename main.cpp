#include "Kindle.h"
#include "Biblioteca.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

using std::string;
using std::cout;
using std::cin;
using std::endl;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string objL,objB,no,au,ge;
	
	cout << "Insira o nome do Usuario :";
	cin >> objL;
	Kindle kindle1 (objL);
	kindle1.imprimirUser();
	cout << endl;
	cout << endl;
	cout << endl;
	cout <<"*******Imprimindo pelo operador*******" << endl;
 	cout << kindle1;
 	cout << "*******Fim imprimindo operador*******" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	cout << "Insira o nome da Biblioteca :";
	cin >> objB;
	Biblioteca biblio1(objB);
	biblio1.imprimeLivros();
	kindle1.addBiblioteca(biblio1);
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout <<"*******Imprimindo pelo operador*******" << endl;
 	cout << biblio1;
 	cout << "*******Fim imprimindo operador*******" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	cout << "Insira as informações do Livro." << endl;
	//cout << "Insira o nome do livro: ";
	no = "HarryPotter";
	
	//cout << "Insira o autor do livro: ";
	au = "J.K";
	
	//cout << "Insira o genero do livro: ";
	ge = "Fantasia";
	
	Livro livro1(no,au,ge);
	
	no = "HarryPotter";
	au = "J.K";
	ge = "Fantasia2";
	
	Livro livro2(no,au,ge);
	
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "-------------------------------" <<endl;
	
	if (livro1 == livro2){
		cout << "Operador == afirmando: Livro Iguais" << endl;
	} else {
		cout << "Operador == afirmando: Livros Diferentes" << endl;
	}
	cout << "-------------------------------" <<endl;
	if (livro1 != livro2){
		cout << "Operador != afirmando: Livro Diferentes" << endl;
	} else {
		cout << "Operador != afirmando: Livro Iguais" << endl;
	}
	cout << "-------------------------------" <<endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	
	biblio1.addLivro(livro1);
	
	
	
	biblio1.imprimeLivros();
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout <<"*******Imprimindo pelo operador*******" << endl;
 	cout << livro1;
 	cout << "*******Fim imprimindo operador*******" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
}
