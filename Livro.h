#ifndef LIVRO_H
#define LIVRO_H
#include <string>
using std::string;


class Livro
{
	public:
		Livro(const string &,const string &, const string &);
		Livro();
		Livro(const Livro &);
		~Livro();
		
		//Get/Set
		string getNomeLivro();
		void setNomeLivro(const string &);
		
		string getAutorLivro();
		void setAutorLivro(const string &);
		
		string getGeneroLivro();
		void setGeneroLivro(const string &);
		
	private:
		string nomeLivro;
		string autorLivro;
		string generoLivro;
};

#endif
