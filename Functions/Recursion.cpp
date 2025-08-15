#include <iostream>
using namespace std;

int sum (int num){
    if(num > 0){
        return num + sum(num-1);
    }else{
        return num ; 
    }
}


// 3 + sum(2)
// 3 + 2 + sum(1)
// 3 + 2 + 1 + sum(0)
// 3 + 2 + 1 + 0
int main(){
    cout << sum(3) ; 
    system("pause");
    return 0;
}