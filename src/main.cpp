/**
 * File: main.cpp
 * Author(s): Pierre Abraham Mulamba
 * Creation (modification) date: 20210322 (20210322)
 * Description: Driver
 */


#include "stack.h"
#include <iostream>

int main(int argc, char *argv[])
{
  try{
    std::cout << "\nPROGRAM TO IMPLEMENT A STACK DATA STRUCTURE OF PRIME NUMBERS\n";
    Stack stack;

    std::cout << "\nEnter the limit of prime numbers: ";
    int limit = 0;
    std::cin >> limit;

    std::cout << "\nCREATING A STACK OF PRIME NUMERS\n";
    for(int i = 2; i < limit; i++){
      int n_divisors = 0;
      for(int j = 2; j <= i; j++){
        if(i % j == 0) n_divisors += 1;
      }
      if(n_divisors < 2)stack.push(i);
    }

    stack.print();

    std::cout << "\nPUSHING A NEW NODE TO THE STACK\n";
    std::cout << "Enter the value of the node to push: ? ";
    int value_to_push = 0;
    std::cin >> value_to_push;
    stack.push(value_to_push);
    stack.print();

    std::cout << "\nADDING A NEW NODE TO THE STACK \n";
    std::cout << "\nEnter the value of the node to add: ? ";
    int value_to_add = 0;
    std::cin >> value_to_add;
    stack.push(value_to_add);
    stack.print();

    std::cout << "\nTESTING THE POP OF A NODE FROM THE STACK\n";
    int value_to_pop = 0;
    value_to_pop = stack.pop();
    std::cout <<"Pop the top node value : " << value_to_pop << '\n';
    stack.print();

    std::cout << "\nProgram Ended Successfully\n";
    return 0;
  }
  catch(...){
    std::cerr << "\nUnknown Exception Thrown\n";
  }
}
