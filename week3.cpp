#include <iostream>
 using namespace std;
 int main(){
 int *p;
 int x = 10;
 int y;
 p = &x;
 y = *p;
 *p = 20;
 //why cant we assign to &x
 // &x = 30; // This line will cause a compilation error
 // Correct way to change the value of x
    x = 30;
 return 0;
 }