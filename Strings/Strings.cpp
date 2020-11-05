#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, c, d; 
    cin >> a; 
    cin >> b; 
    cout << a.size() << " " << b.size() << endl; 
    cout << a+b << endl; 
    c = a; 
    d = b; 
    c[0] = b[0]; 
    d[0] = a[0]; 
    cout << c << " " << d << endl;  
    return 0;
}
