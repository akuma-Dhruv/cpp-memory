#include <iostream>
using namespace std;

int main(){
    int const p = 5;
    int const * const q = &p;
	
// both p and q have read access or the specfic storage 
//so these two lines below will generate error
    p++;
    (*q)++;
    cout << p << endl;
    return 0;
}
