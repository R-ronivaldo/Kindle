    
#ifndef KINDLE_H
#define KINDLE_H
#include <string.h>
#include <iostream>

using std::string;

class Kindle
{
public:
    
    Kindle(string &nome, int id, string &autor, int ano);
	void setNomeLivro(string);

	~Kindle();
	
};
    
    ~Kindle();
    
private:
	
	string nomeLivro;
	int idLivro;
	string autorLivro;
	int anoLivro;
    
};

#endif // KINDLE_H
