#include <iostream>
using namespace std ; 

template <typename T1 , typename T2>

class Pair{
    public:
    T1 first;
    T2 second; 

    Pair(T1 a , T2 b){
        first = a ; 
        second = b ; 
    }
    
    void display(){
        cout << "First " << first << "\t" << "second " << second << endl; 
    }
};

int main(){
    Pair <int , string> p( 30 ,"Ahmed" ) ;
    p.display();
    cin.get();
    return 0 ; 
}