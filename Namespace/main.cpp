#include <iostream>
using namespace std;

namespace Zack{
    int z = 11 ; 
}

namespace Engneering{
    int z = 50 ; 
}

int main(){
    int z = 30 ; 

    cout << Zack::z  <<"\n" <<Engneering::z<< endl ; 
    cin.get();
    return 0;
}