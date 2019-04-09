#include "Kindle.h"
#include <iostream>

using std::cout;
using std::endl;

Kindle::Kindle(string y){
    setNomeLivro(y);
}

Kindle::Kindle(){
    setNomeLivro();
}
   
void Kindle::setNomeLivro(string x){
    nomeLivro = x;
}

void Kindle::setNomeLivro (){
    cin << "Nenhum Nome de livro foi setado" << endl;
}

Kindle::~Kindle()
{
}
