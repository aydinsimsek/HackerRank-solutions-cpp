#include <iostream>
#include <sstream>
using namespace std;

class Student
{
    private: 
    int age, standard;
    string first_name, last_name, str;  
    
    public: 
    int set_age(int a)
    {
        age = a;  
        return age; 
    }
    int get_age(void)
    {
        return age; 
    }
    
    string set_first_name(string f)
    {
        first_name = f; 
        return first_name; 
    }
    string get_first_name(void)
    { 
        return first_name; 
    }
    
    string set_last_name(string l)
    {
        last_name = l; 
        return last_name; 
    }
    string get_last_name(void)
    { 
        return last_name; 
    }
    
    int set_standard(int s)
    {
        standard = s;  
        return standard; 
    }
    int get_standard(void)
    {
        return standard; 
    } 
    
    string to_string(void)
    {
        stringstream ss; 
        ss << age << ',' << first_name << ',' << last_name << ',' << standard; 
        return ss.str();  
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
