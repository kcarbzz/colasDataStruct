#include <iostream>
#include "cola.cpp"
int main(){

    cola c;
    c.push(31);
    c.push(45);
    c.push(56);
    c.push(74);
    c.push(26);
    c.push(77);
    c.push(67);
    c.show();
    c.invertir();
    c.show();
    c.par_impar();
    c.show();
}
