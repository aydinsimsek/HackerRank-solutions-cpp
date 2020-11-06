#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person 
{
    protected: 
    int age; 
    string name; 
    public: 
    virtual void getdata()
    {
        cin >> name >> age;     
    }
    virtual void putdata()
    {
        cout << name << " " << age; 
    }
}; 

class Professor : public Person 
{
    private: 
    int publications, cur_id;   
    static int id; 
    public: 
    Professor()
    {
        cur_id = id++; 
    }
    void getdata()
    {
        cin >> name >> age >> publications; 
    }
    void putdata() 
    {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;  
    }
};  
int Professor::id = 1; 

class Student : public Person 
{
    private: 
    int marks[6], cur_id; 
    static int id; 
    public: 
    Student()
    {
        cur_id = id++; 
    }
    void getdata()
    {
        cin >> name >> age; 
        for(int i = 0; i < 6; i++)
        {
            cin >> marks[i]; 
        }
    }
    void putdata()
    {
        int sum = 0; 
        cout << name << " " << age << " "; 
        for(int i = 0; i < 6; i++)
        {
            sum += marks[i];
        }
        cout << sum << " " << cur_id << endl;    
    }
}; 
int Student::id = 1; 

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}