#include <iostream>
#include <fstream>
using namespace std;

// fstream 
// ifstream & ofstream
// ifstream ==> Read from files
// ofstream ==> create file and write file 
int main(){
    // // Create and write to file 
    // ofstream file("filename.txt" , ios::app);
    // file << endl <<"The end";
    // file.close();

    ifstream file("filename.txt");
    if (file){
         ofstream file("filename.txt" , ios::app);
         file << endl <<"The end";
    }else{
         ofstream file("filename.txt" , ios::app);
         file <<"The end";
    }
    file.close();

    // // Read from file
    // string txt ; 
    // fstream readFile("filename.txt");
    // while(getline(readFile , txt)){
    //     cout << txt ; 
    // }
    // readFile.close();
    cin.get();
    return 0;
}