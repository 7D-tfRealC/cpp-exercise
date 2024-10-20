#include <iostream>
using namespace std;
int main(){
    int x,A;
    cout << "Nhap x : ";
    cin >> x;
    if(x>=10){
        A=x*x*x + 5*x;
    }
    else if(x<10) {
        A=x*2 -2*x+4;

    }
    cout << A;







    return 0;

}