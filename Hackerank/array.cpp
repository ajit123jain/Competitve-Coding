#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size;
    cin >> size;
    int a[size];
    for(int i=0; i<size; i++)
    {
        cin >> a[i];
    } 
    for(int i=size-1; i>=0; i--)
    {
        cout <<a[i]<< " ";
    } 
    return 0;
}
