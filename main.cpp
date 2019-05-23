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
	
	/*cout << endl;
	cout << endl;
	cout << endl;
	cout <<"*******Imprimindo pelo operador*******" << endl;
 	cout << kindle1;
 	cout << "*******Fim imprimindo operador*******" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	*/
	
	cout << "Insira o nome da Biblioteca :";
	cin >> objB;
	Biblioteca biblio1(objB);
	kindle1.addBiblioteca(biblio1);
	
	/*cout << endl;
	cout << endl;
	cout << endl;
	cout <<"*******Imprimindo pelo operador*******" << endl;
 	cout << biblio1;
 	cout << "*******Fim imprimindo operador*******" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	*/
	
	Livro livro1("HarryPotter","J.K","Fantasia1");
	Livro livro2("HarryPotter2","J.K2","Fantasia2");
	Livro livro3("HarryPotter3","J.K3","Fantasia3");
	Livro livro4("HarryPotter4","J.K4","Fantasia4");
	Livro livro5("HarryPotter5","J.K5","Fantasia5");
	Livro livro6("HarryPotter6","J.K6","Fantasia6");
	Livro livro7("HarryPotter7","J.K7","Fantasia7");
	Livro livro8("HarryPotter8","J.K8","Fantasia8");
	Livro livro9("HarryPotter9","J.K9","Fantasia9");
	Livro livro10("HarryPotter13","J.K13","Fantasia13");
	
	
	/*cout << endl;
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
	*/
	
	
	biblio1.adicionarLivro(livro1);	
	
	biblio1.adicionarLivro(livro2);
	
	biblio1.adicionarLivro(livro3);
	
	biblio1.adicionarLivro(livro4);
	
	biblio1.adicionarLivro(livro5);
	
	biblio1.adicionarLivro(livro6);
	
	biblio1.adicionarLivro(livro7);
	
	biblio1.adicionarLivro(livro8);
	
	biblio1.adicionarLivro(livro9);
	
	biblio1.adicionarLivro(livro10);
	
	biblio1.imprimeBiblio();
	
	/*cout << endl;
	cout << endl;
	cout << endl;
	cout <<"*******Imprimindo pelo operador*******" << endl;
 	cout << livro1;
 	cout << "*******Fim imprimindo operador*******" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
*/

}
