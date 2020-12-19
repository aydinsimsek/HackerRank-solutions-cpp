#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size, query, num, item;  
    vector <int> v;   
    cin >> size; 
    for(int i = 0; i < size; i++)
    {
        cin >> item;
        v.push_back(item);     
    }
    cin >> query;
    for(int i = 0; i < query; i++)
    {
        cin >> num;
        vector<int>::iterator low = lower_bound(v.begin(), v.end(), num);  
        if(v[low - v.begin()] == num) 
        {
            cout << "Yes " << low - v.begin() + 1 << endl;  
        }
        else 
        {
            cout << "No " << low - v.begin() + 1 << endl;
        }
    }  
    return 0;
}
