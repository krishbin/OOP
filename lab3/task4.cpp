#include <iostream>

using namespace std;

inline bool max(int a, int b){
  return a > b? true:false;
};

int main(){
  cout<<max(7,6)<<endl;
  cout<<max(4,6)<<endl;
};
