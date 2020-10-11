#include <iostream>

using namespace std;

int add(int x,int y,int z=0){
  return x+y+z;
};

int main(){
  cout<<add(2,3)<<endl;
  cout<<add(2,3,6)<<endl;
};

