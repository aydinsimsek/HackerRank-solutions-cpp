#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int Q, query_type, x; 
    cin >> Q; 
    set<int>s; 
    for(int i = 0; i < Q; i++)
    {
        cin >> query_type >> x; 
        if(query_type == 1)
        {
            s.insert(x); 
        }
        else if(query_type == 2) 
        {
            s.erase(x);    
        }
        else if(query_type == 3)
        {
            set<int>::iterator itr=s.find(x); 
            if(itr == s.end()) {cout << "No" << endl;}
            else {cout << "Yes" << endl;}
        }
    }  
    return 0;
}
