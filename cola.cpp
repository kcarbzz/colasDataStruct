#include "cola.h"
#include <iostream>
Nodo::Nodo(int v)
{
    this->value=v;
    this->next=nullptr;//ctor
}

Nodo::~Nodo()
{


}//dtor

void cola::push(int a)
{
    Nodo* p = new Nodo(a);
    if(this->head==nullptr){
        this->head=p;
        this->tail=p;

    }else{
        this->tail->set_next(p);
        this->tail=p;

    }
}

void cola::show()
{
    Nodo* b = this->head;
    while(b!=nullptr){
        b->show();
        b=b->get_next();

    }
    std::cout<<std::endl;
}
void cola::pop()
{
   if (head == nullptr) {

            std::cerr << "Error\n";
        } else {
            Nodo* temp = head;
            head = head->get_next();
            delete temp;
            if (head == nullptr) {
                tail = nullptr;
            }
        }
    }

void cola::par_impar() {
  cola evenQueue;
  cola oddQueue;

  Nodo* current = head;
  int position = 0;

  while (current != nullptr) {
    if (position % 2 == 0) {
      evenQueue.push(current->get_value());
    } else {
      oddQueue.push(current->get_value());
    }

    current = current->get_next();
    position++;
  }


  while (head != nullptr) {
    pop();
  }

  while (evenQueue.head != nullptr) {
    push(evenQueue.head->get_value());
    evenQueue.pop();
  }

  while (oddQueue.head != nullptr) {
    push(oddQueue.head->get_value());
    oddQueue.pop();
  }
}
void cola::invertir() {
  Nodo* prev = nullptr;
  Nodo* current = head;
  Nodo* next = nullptr;

  while (current != nullptr) {
    next = current->get_next();
    current->set_next(prev);
    prev = current;
    current = next;
  }

  Nodo* temp = head;
  head = tail;
  tail = temp;
}
