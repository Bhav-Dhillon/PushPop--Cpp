#include <iostream>
using namespace std; 

int main() {
  int i = 1; 
  while(i < 101) 
  {
    if(i % 3 == 0) 
    {
      cout<<"Fizz \n";
    }
    else if(i % 5 == 0) 
    {
      cout<<"Buzz \n";
    }
    else if(i % 5 == 0 && i % 3 == 0) 
    {
      cout<<"FizzBuzz \n";
    }
    else 
    {
      cout << i << "\n";
    }
    i++;
  }
}