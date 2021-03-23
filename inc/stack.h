/**
 * File: stack.h
 * Author(s): Pierre Abraham Mulamba
 * Creation (modification) date: 20210322 (20210322)
 * Description: Header file for the class Stack declaration
 */


#include "node.h"
#include <memory>

class Stack
{
 public:
  Stack();
  ~Stack();
  void push(int value);
  int pop();
  void print();
 private:
  std::shared_ptr<Node> top;
};
