#include <iostream> 
using namespace std;

int main(){
    int add = 0;
    int arr[5] = {5, 8, 9, 16 ,11};

    for (int i = 0; i < 5; i++)
    {
        add =add + arr[i];
    }
    cout<<add;
}