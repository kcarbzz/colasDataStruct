#ifndef COLA_H
#define COLA_H
#include <iostream>
class Nodo
{
    public:

        Nodo(int value);
        virtual ~Nodo();
        void set_value(int v){this->value=v;};
        int get_value(){return this->value;};
        void set_next(Nodo* nxt){this->next=nxt;};
        Nodo* get_next(){return this->next;};
        void show(){std::cout<<value<<" ";};
    private:
        int value;
        Nodo* next;
};
class cola
{
    public:
        cola()
        {
            head=nullptr;
            tail=nullptr;
        };
        Nodo* head;
        Nodo* tail;
        void push(int a);
        void show();
        void pop();
        void par_impar();
        void invertir();
    private:
};

#endif // COLA_H
