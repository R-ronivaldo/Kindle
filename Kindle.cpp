#include "Kindle.h"
#include <iostream>

using std::cout;
using std::endl;

Kindle::Kindle(const string &y1,int y2,const string &y3,int y4){
    setLivro(&y1,y2,&y3,y4);
}

Kindle::Kindle(){
    setLivro();
}
   
void Kindle::setLivro(const string &x1,int x2,const string &x3,int x4){
    nomeLivro = &x1;
    idLivro = x2;
    autorLivro = &x3;
    anoLivro = x4;
    getLivro(nomeLivro,idLivro,autorLivro,anoLivro);
}

void Kindle::setLivro () const{
    cin << "Nenhum Nome de livro foi setado" << endl;
}

void getLivro(const string &j1,int j2,const string &j3,int j4) const{
    cin << "Nome do Livro: " << &j1 << endl;
    cin << "Id do Livro: " << j2 << endl;
    cin << "Autor do Livro: " << &j3 << endl;
    cin << "Ano do Livro: " << j4 << endl;
}

Kindle::~Kindle()
{
}
