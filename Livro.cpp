#include "Livro.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int Livro::totalLivrosEstante = 0;

Livro::Livro(const string &NOME, const string &ESTANTE){
		
	setLivro(NOME, ESTANTE);
}

Livro::Livro(){
			
	setLivro("Desconhecido", "Desconhecido");
		
	cout << "\\\\\\Setando livro Padrão//////" << endl;
}

Livro::Livro(const Livro &LINK2){
	{
	this->nomeLivro = LINK2.nomeLivro;
	this->estanteLivro = LINK2.estanteLivro;
	
	this->totalLivrosEstante++;
}
}

Livro::~Livro(){
	this->totalLivrosEstante--;
}

void Livro::setLivro (const string &NOME, const string &ESTANTE){
	this->nomeLivro = NOME;
	this->estanteLivro = ESTANTE;

	this->totalLivrosEstante++;
	cout << "\\\\\\Livro adicionado com sucesso!//////" << endl;
	
	setBiblioteca(ESTANTE);
}

void Livro::getLivro() const{
	
	cout << "Livro : " << nomeLivro << endl;
	cout << "Estante : " << estanteLivro << endl;
}

void Livro::setBiblioteca(const string &NOME, const string &ESTANTE){
		// vai adicionar o livro na estante da classe biblioteca de acordo com o genero
}
