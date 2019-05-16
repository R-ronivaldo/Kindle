#ifndef KINDLE_H
#define KINDLE_H

#include "Biblioteca.h"

#include <string>
using std::string;

class Kindle
{
	public:
		Kindle(const string &, Biblioteca &);
		Kindle();
		Kindle(const Kindle &);
		~Kindle();
		
		string getUser();
		void setUser(const string &);

		Biblioteca getBiblioteca();
		void setBiblioteca(Biblioteca &);
		
	private:
		string user;
		Biblioteca biblioteca;
		
		static const int MAXUSER = 1;
		string lUser[MAXUSER];
};

#endif
