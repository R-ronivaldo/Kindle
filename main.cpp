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
	
	cout << "Insira o nome da Biblioteca :";
	cin >> objB;
	Biblioteca biblio1(objB);
	biblio1.imprimeLivros();
	kindle1.addBiblioteca(biblio1);
	cout << endl;
	
	cout << "Insira as informações do Livro." << endl;
	cout << "Insira o nome do livro: ";
	cin >> no;
	
	cout << "Insira o autor do livro: ";
	cin >> au;
	
	cout << "Insira o genero do livro: ";
	cin >> ge;
	Livro livro1(no, au, ge);
	
	biblio1.addLivro(livro1);
	
	biblio1.imprimeLivros();
	cout << "**********************************" << endl;
	livro1.imprimirLivro();
	cout << livro1;
	
}
