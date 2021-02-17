#include <iostream>
using namespace std;

int main()
{
    int rows=4;

   

    for(int i = rows; i >= 1; --i)
    {
        int ch = rows*2-1;
        for(int space = 0; space < rows-i; ++space){
            cout << "  ";
        }

        for(int j = i; j <= 2*i-1; ++j){
            cout << i<<" ";
           
        }

        for(int j = 0; j < i-1; ++j){
            cout <<i<<" ";
           
        }

        cout << endl;
    }

    return 0;
}
