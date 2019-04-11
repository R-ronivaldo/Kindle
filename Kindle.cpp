#include "Kindle.h"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

Kindle::Kindle(string &nome){
	setNomeLivro(nome);

}

void Kinlde::setNomeLivro(string &nome){
    cin << nome << endl;
}	
