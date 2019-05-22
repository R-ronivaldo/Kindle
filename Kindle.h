#ifndef KINDLE_H
#define KINDLE_H

#include "Biblioteca.h"
#include <iostream>
#include <string>
using std::string;
using std::ostream;

class Kindle
{
	friend ostream &operator<<(ostream &, const Kindle &);
	public:
		Kindle(const string &);
		Kindle();
		Kindle(const Kindle &);
		~Kindle();
		
		string getUser();
		void setUser(const string &);

		Biblioteca getBiblioteca();
		void addBiblioteca(Biblioteca &);
		
		void imprimirUser()const;
		
		void status();
		
	private:
		string user;
		Biblioteca biblioteca;
		
		static int numDeUserAtivos;
		static const int MAXUSER = 1;
		string lUser[MAXUSER];
};

#endif
