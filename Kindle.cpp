#include "Kindle.h"
#include "Biblioteca.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int Kindle::totalDeUser = 0;

Kindle::Kindle(const string &USER)
{
	if (USER != " "){
			setUser(USER);
	}	else{
			cout << "Usuário informado é inválido" << endl;
		}
}

Kindle::Kindle()
{
	string user;
	
	user = "admin";
	
	setUser(user);
}

Kindle::Kindle(const Kindle &LINK)
{
	this->usuario = LINK.usuario;
	this->livros = LINK.livros;
}

Kindle::~Kindle(){
	
	string user = "";
	
	setUser(user);
	
	this->totalDeUser--;
}

void Kindle::setUser(const string &USER){
	if (totalDeUser < NUMEROTOTALUSUARIOS){
		this->usuario = USER;
		
		this->totalDeUser++;
		
		getUser();
	}else{
		cout << "Total de usuários excedido!" << endl;
	}
}

void Kindle::getUser() const {
	cout << "Bem vindo " << this->usuario << "ao seu Kindle" << endl;
	cout << "Você tem " << this->livros << "na sua biblioteca" << endl;
}
