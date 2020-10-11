#include <iostream>

using namespace std;

class Distance{
  private:
    int feet, inch;
  public:
    Distance(int f=0, int i=0){
      feet = f + i / 12;
      inch = i % 12;
    };
    Distance(const Distance &d1){
      feet=d1.feet;
      inch=d1.inch;
    };
    void showData(){
      cout<<feet<<"feet\t"<<inch<<"inch\t"<<endl;
    };
    void getData(){
      cout<<"Enter Distance in feet and inch"<<endl;
      cin>>feet>>inch;
      feet = feet + inch / 12;
      inch = inch % 12;
    };
    friend Distance add(const Distance &d1, const Distance &d2);
};

Distance add(const Distance &d1, const Distance &d2){
  Distance temp;
  temp.feet = d1.feet + d2.feet;
  temp.inch = d1.inch + d2.inch;
  temp.feet = temp.feet + temp.inch / 12;
  temp.inch = temp.inch % 12;
  cout<<"The sum of the distances is:"<<endl;
  cout<<temp.feet<<"feet\t"<<temp.inch<<"inch\t"<<endl;
  return temp;
};


int main(){
  Distance d1 ,d2,d3;
  d1.getData();
  d2.getData();
  d1.showData();
  d2.showData();
  d3 = add(d1,d2);
  return 0;
};
