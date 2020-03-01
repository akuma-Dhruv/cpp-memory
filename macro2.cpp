#include <iostream>
using namespace std;

#define SQUARE(x) x*x

int main(){
    int x=SQUARE(6)/36;
    cout<<x<<endl;
    x=36/SQUARE(6);
    cout<<x<<endl;
    x=10+SQUARE(5);
    cout<<x<<endl;
    x=SQUARE(5)+10;
    cout<<x<<endl;
    x=10*SQUARE(5);
    cout<<x<<endl;
    x=SQUARE(5)*10;
    cout<<x<<endl;
    x=50-SQUARE(5);
    cout<<x<<endl;
    x=SQUARE(5)-10;
    cout<<x<<endl;
    return 0;
}
