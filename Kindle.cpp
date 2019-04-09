#include "Kindle.h"
#include <iostream>

using std::cout;
using std::endl;

Kindle::Kindle(const string &y){
    setNomeLivro(y);
}

Kindle::Kindle(){
    setNomeLivro();
}
   
void Kindle::setNomeLivro(const string &x){
    nomeLivro = x;
    getNomeLivro(nomeLivro);
}

void Kindle::setNomeLivro (){
    cin << "Nenhum Nome de livro foi setado" << endl;
}

void getNomeLivro(const string &j){
    cin << j << endl;
}

Kindle::~Kindle()
{
}
