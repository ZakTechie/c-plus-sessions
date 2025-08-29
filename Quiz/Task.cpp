#include <iostream>
using namespace std;

class Person{
    private:
    string name ; 
    int age ; 

    public:
    Person(string n  , int a){
        name = n ; 
        age = a ; 
    }
    // setter 
    void setName(string n) {name = n;}
    void setAge(int a) {age = a ;}

    // Getter
    string getName(){return this->name;}
    int getAge(){return this->age;}
    
    virtual void showDetails(){
        cout << name << age << endl ; 
    }
};


class Student :public Person{
    public:
    int studentId ;
    Student(string n , int a , int id) : Person(n , a){
        studentId = id ; 
    }

    void showDetails() override{
        cout << getName()  << getAge()  << this->studentId <<endl ; 
    }
};

class Teacher :public Person{
    public:
    string subject ;
    Teacher(string n , int a , string sub) : Person(n , a){
        subject = sub ; 
    }

    void showDetails() override{
        cout << getName() << getAge() << this->subject <<endl ; 
    }
};




int main(){
    Person *p = new Person("Ahmed" , 30);
    Student st("Mona" , 20 , 101);
    Teacher t("hassan" , 45 , "Fundamnetal of programming");
    // (*p).showDetails();
    p = &t ; 
    p->showDetails();
    // p.showPerson() ;
    // st.showStudent();
    // t.showTeacher();
    cin.get();
    return 0;
}