#include <iostream>
using namespace std;

int main()
{
    int arrowBaseHeight = 0;
    int arrowBaseWidth = 0;
    int arrowHeadWidth = 0;

    int i = 0;

    int j = 0;

    int x = 0;

    int y = 0;

    cout << "Enter arrow base height:" << endl;
    cin >> arrowBaseHeight;

    cout << "Enter arrow base width:" << endl;
    cin >> arrowBaseWidth;

    cout << "Enter arrow head width:" << endl;
    cin >> arrowHeadWidth;
    while (arrowHeadWidth <= arrowBaseWidth)
    {
        cout << "Enter arrow head width:" << endl;
        cin >> arrowHeadWidth;
    }
    cout << endl;

    for (i = 0; i < arrowBaseHeight; i++)
    {
        for (j = 0; j < arrowBaseWidth; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (x = arrowHeadWidth; x > 0; x--)
    {
        for (y = 0; y < x; y++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Draw arrow base (height = 3, width = 2)
    // cout << "**" << endl;
    // cout << "**" << endl;
    // cout << "**" << endl;

    // Draw arrow head (width = 4)
    // cout << "****" << endl;
    // cout << "***" << endl;
    // cout << "**" << endl;
    // cout << "*" << endl;

    return 0;
}
