#include <iostream>
using namespace std;

int main()
{
    int n, i;
    n = 20;
    i = 2;
    // 3, 6, 9.......30
    // 2, 4, 6, 8, ...20
    cout<<n;
    while (i<=10){
       // int x = n * i;
        cout<<", ";
        cout<<n * i;
        i++;
       
    }
    
    return 0;
}