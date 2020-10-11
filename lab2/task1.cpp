#include <iostream>

using namespace std;

class Student{
  private:
    char name[20];
    int roll;
    int marks;
  public:
    void getData(){
      cin>>name>>roll>>marks;
    };
    void showData(){
        cout<<"Name:"<<name<<"\t"<<"Roll:"<<roll<<"\t"<<"Marks:"<<marks<<endl;
    };
};

int main(){
  Student s1;
  s1.getData();
  s1.showData();
  return 0;
};
