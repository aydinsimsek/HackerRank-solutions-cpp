#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int Q, query_type, student_mark; 
    string student_name;  
    cin >> Q; 
    map<string, int>m; 
    for(int i = 0; i < Q; i++)
    {
        cin >> query_type >> student_name; 
        if(query_type == 1)
        {
            cin >> student_mark; 
            m[student_name] += student_mark;        
        }    
        else if(query_type == 2)
        {
            m.erase(student_name); 
        }
        else if(query_type == 3)
        {
            cout << m[student_name] << endl; 
        }
    }
    return 0;
}



