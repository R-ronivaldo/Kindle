#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "Livro.h"

#include <iostream>
#include <string>

using std::string;


class Biblioteca
{
	public:
		Biblioteca(const string &, const Livro &);
		Biblioteca();
		Biblioteca(const Biblioteca &);
		~Biblioteca();
		
		bool verificarLocatacao();
		
		//Get/Set
		string getNomeBiblio();
		void setNomeBiblio(const string &);
		
		Livro getLivro();
		void setLivro(const Livro &);
		
		int retornaQLivros();
		
	private:
		string nomeBiblio;
		Livro livro;
		
		static const int MAXLIVROS = 100;
		Livro lLivros[MAXLIVROS];
};

#endif
