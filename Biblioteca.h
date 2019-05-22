#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "Livro.h"

#include <iostream>
#include <string>

using std::ostream;
using std::string;


class Biblioteca
{
	friend ostream &operator<<(ostream &, const Biblioteca &);
	public:
		Biblioteca(const string &);
		Biblioteca();
		Biblioteca(const Biblioteca &);
		~Biblioteca();
		
		//Get/Set
		string getNomeBiblio();
		void setNomeBiblio(const string &);
		
		Livro getLivro();		
		void addLivro(const Livro &);
		
		int retornaQLivros();
		
		void imprimeBiblio();
		void imprimeLivros();
		
		bool operator==(const Biblioteca &)const;
		
	private:
		string nomeBiblio;
		Livro livro;
		
		static int numDeLivrosAtivos;
		static const int MAXLIVROS = 100;
		Livro lLivros[MAXLIVROS];
};

#endif
