#include<iostream>

using namespace std;

class Room {
 public:
  Room(char* t);
  char* Print()const;
  char* GetT()const;
  void SetA();
  char* GetA()const;
  
    
 private:
  char* ti;
  Room** adj;
}
  
