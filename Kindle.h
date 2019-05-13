#include "Biblioteca.h"
#include "Livro.h"
#ifndef KINDLE_H
#define KINDLE_H

#include <string>
using std::string;

class Kindle
{
	public:
		Kindle (const string &); //construtor com argumentos
		Kindle (); // construtor sem argumentos
		Kindle (const Kindle &); //construtor de copia
		~Kindle();
		
		void setUser(const string &);
		void getUser() const;
		
	private:
		string usuario;
		string livros;
		string biblioteca;
		
		static const int NUMEROTOTALLIVRO=100;
		static int totalDeUser;
		static const int NUMEROTOTALUSUARIOS=1;
		static string usuarios[NUMEROTOTALUSUARIOS]; //Quero fazer uma struct aqui
		static string nomeLivros[NUMEROTOTALLIVRO]; //Quero fazer uma struct aqui
		
};

#endif
