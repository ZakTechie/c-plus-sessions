#include <iostream>
#include <ctime>
using namespace std;

// time_t 
// struct tm

// tm_sec
// tm_min 
// tm_hour
// tm_mday
// tm_mon
// tm_year
// tm_wday
// tm_yday
// tm_isdst

// time()
// mktime() convert datetime stucture into timestamp
// localtime() ==> convert timestamp into datetime stucture 
// gmtime()  ==> convert timestamp into datetime stucture 
// asctime ==> run with datetime structure 
// strftime() ==> 


// %a  Fri
// %b Aug
// %B August 
// %d 02
// %e 2
// %H 
// %I 
// %M 
// %p Pm / Am
// %S 
// %y 
// %Y  
int main(){
    // time_t timestamp ; 
    // time(&timestamp); // give  timestamp represent current date and time 
    // cout << ctime(&timestamp); // show the date and time from timestamp

    // ============================================

    // struct tm datetime;
    // time_t timee ; 
    // datetime.tm_year = 2025 - 1900 ; 
    // datetime.tm_mon = 7 ; 
    // datetime.tm_mday = 29; 
    // datetime.tm_hour = 10;
    // datetime.tm_min = 29;
    // datetime.tm_sec = 55 ; 
    // datetime.tm_isdst = -1 ; 

    // timee = mktime(&datetime); 
    // // struct tm d = *localtime(&timee);
    // // cout << d.tm_min ; 
    // cout << ctime(&timee);

    // ===========================================================
    // time_t t ;
    // time(&t) ; 
    // struct tm datee = *localtime(&t);

    // cout << datee.tm_year ; 

    // time_t timee = time(NULL);
    // struct tm dat = *localtime(&timee);
    // cout << asctime(&dat); 

    // struct tm da ; 
    // da.tm_year = 2025 - 1900 ; 
    // da.tm_mon = 7 ; 
    // da.tm_mday = 34;
    // da.tm_hour = 0;
    // mktime(&da);
    // cout << asctime(&da);

// =========================================
 time_t timestamp ;
time(&timestamp);
 struct tm date= *localtime(&timestamp);

 char output[50] ; 
 strftime(output , 50 , "%I" , &date);
 cout << output << endl ; 

    cin.get();
    return 0;
}