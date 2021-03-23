/**
 * File: stack.cpp
 * Author(s): Pierre Abraham Mulamba
 * Creation (modification) date: 20210322 (20210322)
 * Description: Implementation of the class Stack
 */


#include "stack.h"
#include <iostream>

Stack::Stack()
{
  top = nullptr;
}

Stack::~Stack()
{
}

void Stack::print()
{
  std::shared_ptr<Node> begin = std::make_shared<Node>();
  begin = top;
  std::cout << "[<-";
  while(begin != nullptr){
    std::cout << begin->data << "<-";
    begin = begin->next;
  }
  std::cout << "]\n";
}

void Stack::push(int value)
{
  /* 1. create a new node tmp
     2. tmp->next = top
     3. top = tmp
  */
  std::shared_ptr<Node> tmp = std::make_shared<Node>();
  tmp->data = value;

  if(top == nullptr){
    top = tmp;
  }
  else{
    tmp->next = top;
    top = tmp;
  }
}

int Stack::pop()
{
  /*
    1. pop_value = top->data
    2. top = top->next
    3. return pop_value
  */
  int pop_value = 0;
  pop_value = top->data;
  top = top->next;
  return pop_value;
}
