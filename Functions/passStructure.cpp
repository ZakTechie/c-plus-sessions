#include <iostream>
using namespace std;

struct Car
{
  int year ; 
};

void myfunc(Car c){
    c.year ++ ; 
}
int main(){
    Car c = {2020};
    myfunc(c);
    cout << c.year<< endl ; 
    system("pause");
    return 0;
}