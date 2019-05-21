#include "Livro.h"
#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;

static int restricao = true;

Livro::Livro(const string &no, const string &au, const string &ge){
	setNomeLivro(no);
	setAutorLivro(au);
	setGeneroLivro(ge);
}
Livro::Livro(){
	const string no = "Desconhecidooo";
	const string au = "Desconhecidooo";
	const string ge = "Desconhecidooo";
	
	setNomeLivro(no);
	setAutorLivro(au);
	setGeneroLivro(ge);
	
}

Livro::Livro(const Livro &link){
	
	nomeLivro = link.nomeLivro;
	autorLivro = link.autorLivro;
	generoLivro = link.generoLivro;
}

Livro::~Livro(){

}
		
//Get/Set

string Livro::getNomeLivro(){
	return nomeLivro;
}
void Livro::setNomeLivro(const string &no){	
	this->nomeLivro = no;
}
		
string Livro::getAutorLivro(){
	return autorLivro;
}
void Livro::setAutorLivro(const string &au){
	this->autorLivro = au;
}
		
string Livro::getGeneroLivro(){
	return generoLivro;
}
void Livro::setGeneroLivro(const string &ge){
	this->generoLivro = ge;
}

//Fim Get/Set

void Livro::status() const {
	cout << "Livro " << this->nomeLivro << " adicionado com sucesso!" << endl; 
}

ostream &operator<<(ostream	 &output, const Livro &livro){
	output << "Nome Livro: " << livro.nomeLivro << "."
	<< "Autor do Livro: "<< livro.autorLivro << "."
	<< "Genero do Livro: " << livro.generoLivro << ".";
	
	return output; 
}

void Livro::imprimirLivro() const{
	
	cout << "###########################" << endl;
	cout<< "Livro :" << nomeLivro << endl;
	cout<< "Autor :" << autorLivro << endl;
	cout<< "Genero :" << generoLivro << endl;
	cout << "###########################" << endl;
	
}
