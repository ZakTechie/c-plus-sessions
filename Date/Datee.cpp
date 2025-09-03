#include <iostream>
#include <ctime>
using namespace std;

// time_t 
// struct tm
// clock_t
// CLOCKS_PER_SEC

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
// asctime() ==> run with datetime structure 
// ctime() ==> 
// strftime() ==> 
// difftime() ==> 
// clock() ==> 


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
//  time_t timestamp ;
// time(&timestamp);

// // string months[] = {"Junurary" , "Febrary" , "March" , "April" , "May" , "june" , "july" , "August" , "Sep" , "oct" , "Nov", "Dec"} ; 
//  struct tm date= *localtime(&timestamp);
//  cout << asctime(&date) ; 
// // cout << months[date.tm_mon]<< endl ; 
//  char output[50] ; 
//  strftime(output , 50 , "%a-%B-%d / %Y" , &date); 
//  cout << output << endl ; 

//  time_t now , nextYear ; 
//  struct tm datetime ; 

//  now = time(NULL) ;
//  datetime = *localtime(&now);

//  datetime.tm_year = datetime.tm_year + 1 ; 
//  datetime.tm_mon = 0 ; 
//  datetime.tm_mday = 1 ; 
//  datetime.tm_hour = 0 ; datetime.tm_min = 0 ; datetime.tm_sec = 0 ; 
//  datetime.tm_isdst = -1 ; 

//  nextYear = mktime(&datetime);

//  int differ = difftime(nextYear , now);
//  cout << differ << endl ; 
//  time_t t = static_cast<time_t>(differ) ; 
//  cout << ctime(&t) << endl ; 

// =======================================================================

clock_t before = clock(); // 0 
int k = 0 ; 
for(int i = 0 ; i < 1000000 ; i++){
    k += i ; 
}

clock_t clock_duration = clock() - before ; //10000000 

cout << (float) clock_duration / CLOCKS_PER_SEC << " Seconds" << endl ; 

    cin.get();
    return 0;
}