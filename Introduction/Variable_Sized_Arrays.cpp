#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q, k, item, q1, q2; 
    cin >> n >> q; 
    vector<vector<int>> v;  
    for(int i = 0; i < n; i++)
    {
        cin >> k; 
        vector<int> v2; 
        for(int j = 0; j < k; j++)
        {
            cin >> item;
            v2.push_back(item); 
        }
        v.push_back(v2); 
    }
    for(int i = 0; i < q; i++)
    {
        cin >> q1 >> q2; 
        cout << v[q1][q2] << endl; 
    }
    return 0;
}
