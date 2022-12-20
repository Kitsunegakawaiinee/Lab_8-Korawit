#include <iostream>
using namespace std;

int main() 
{
    int a  =  20, b = 30;
    int c = 4;
    float output;

    // cout << double(b)/double(c) << endl;
    output = (a*1.0) - double(b)/double(c);

    cout << output << "\n";
    return 0;
}
