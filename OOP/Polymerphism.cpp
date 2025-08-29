#include <iostream>
using namespace std;

// // virtual function 
// class Animal{
//     public:
//     virtual void animalSound(){
//         cout << "the animal makes a sound \n" ;
//     }
// };

// class Dog : public Animal{
//     public : 
//         void animalSound() override{
//         cout << "the dog makes a sound \n" ;
//     }
// };


int main(){
    Animal *a ; 
    // a.animalSound();
    Dog d ; 
    // d.animalSound();

    a = &d ;

    // (*a).animalSound();
    a -> animalSound();
    cin.get();
    return 0;
}