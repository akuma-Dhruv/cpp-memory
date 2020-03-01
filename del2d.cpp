#include <iostream>
using namespace std;

int main()
{
    int **twoDArray = new int*[10];
    for(int i = 0; i < 10; i++)
        *(twoDArray + i) = new int[10];

        //for deleting it
        for(int i = 0; i < 10; i++)
    delete [] twoDArray[i];
    return 0;
}
