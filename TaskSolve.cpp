#include <iostream>
#include <string>
using namespace std;

enum Status {AVAILABLE , BORROWED , LOST} ; 
struct Book
{
    int id ; 
    string title ; 
    Status status ; 
};

int main(){

    int n ;
    string title ;  
    cin >> n ; 
    Book b[n] ;
    for(int i = 0 ; i < n ; i++){
        int id ; 
        string title , statustitle;
        cin >> id ; 
        cin.ignore();
        // getline(cin , title); 
        getline(cin , title , '"'); // ignore text " 
        getline(cin , title , '"'); // ignore text "
        cin >> statustitle ; 
        Status st ;
        if(statustitle == "AVAILABLE"){
            st = AVAILABLE ; 
        }else if(statustitle == "BORROWED"){
            st = BORROWED ;
        }else{
            st = LOST ; 
        }
       b[i].id = id ; 
       b[i].title = title ; 
       b[i].status = st ;  
    }

    // visual output 
    for(const auto& n : b){
        cout << "ID \t:" << n.id << "\n"<< "Name of Book : \t" << n.title << "\n" << n.status << endl;
    }
    system("pause");
    return 0;
}