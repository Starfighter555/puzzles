/*
Using operators
*/
# include <iostream>
using namespace std;

int length, width, area;

int main()
{
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    area = length * width;
    cout << "The area of the rectangle is: " << area;

    return 0;
}
