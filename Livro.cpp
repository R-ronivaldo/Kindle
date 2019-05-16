#include "Livro.h"
#include <iostream>
#include <string>

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
	const string no = "Desconhecido";
	const string au = "Desconhecido";
	const string ge = "Desconhecido";
	
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
