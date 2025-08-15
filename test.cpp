#include <iostream>
#include <vector>
using namespace std;

enum Status {AVAILABLE , BORROWED , LOST} ; 
struct Book
{
    int id ; 
    string name ;
    Status status ; 
};

// string convert(Status st) ; 

int main(){
    int n ; 
    cin >> n ; 
    string title , statusStr ; 
    vector <Book> books ; 
    for(int i = 0 ; i < n ; i++){
        int id ; 
        cin >> id ; 
        cin.ignore();
        getline(cin , title , '"' );
        getline(cin , title , '"' );
        cin >> statusStr ;  
        Book b ; 
        b.id = id ; 
        b.name = title ; 

        if(statusStr == "AVAILABLE"){
            b.status = AVAILABLE ; 
        }else if(statusStr == "BORROWED"){
            b.status = BORROWED ; 
        }else{
            b.status = LOST ; 
        }
        
        books.push_back(b);
    }

    for(const auto &b : books){
        cout << "ID\t" << b.id << "\t" << b.name  << "\t" << b.status << endl ; 
    }
    
    system("pause");
    return 0;
}

// string convert(Status st){
//     string result ; 
//     if(st == AVAILABLE){
//         result =  "Available" ;
//     }else if(st == BORROWED){
//         result=  "Borrowed" ; 
//     }else{
//         result = "Lost"; 
//     }
//     return  result ; 
// }