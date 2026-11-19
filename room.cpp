#include<iostream>
#include"room.h"

using namespace std;

Room::Room(char* t) {
  ti = t;
  Room** a = new Room*[4];
  for(i = 0; i < 4; i++) {
    a[i] = nullptr;
  }
  adj = a;
}

char* Room::Print()const{
  cout << ti << endl;
  cout << "Exits: ";
  if(adj[0] != nullptr) {
    cout << "North";
  }
  if(adj[1] != nullptr) {
    cout << ", East";
  }
  if(adj[2] != nullptr) {
    cout << ", South";
  }
  if(adj[3] != nullptr) {
    cout << ", West";
  }
}

char* Room::GetT()const{
  return ti;
}

void Room::SetA(Room* r, d) {
  adj[d] = r;
}

Room* Room::GetA()const{
  return adj[d];
}

