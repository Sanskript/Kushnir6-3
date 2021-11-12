#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, x, y;
    cout << "Enter
    g; 
    data:";
    cin >> a;
    x = (int(a) / 10) % 10;
    y = int(a) % 10;

    cout << int(a) / 100 << y << x << endl;
}
