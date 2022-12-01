#include<iostream>
using namespace std;

class Human {

public:
  int age;
  int height;
  int weight;

  

  int getAge() {
    return this->age;
  }

  void setWeight(int w) {
    this->weight = w;
  }
};


class Male: public Human{

  public:
  string color;

  void sleep() {
    cout << "Male sleeping" << endl;
  }

};

int main() {
  cout<< "Inheritance" << endl;

  Male object1;
  cout << object1.age << endl;
  cout << object1.weight << endl;
  cout << object1.height << endl;
  cout << object1.color << endl;
  object1.sleep();
  object1.setWeight(77);
  cout << object1.weight << endl;

}