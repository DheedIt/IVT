#include <iostream>
using namespace std;
int main()
{
    // 1 верста = 1066.8 метров
    // unsigned int lenghtInVerst = 0;
    // cin >> lenghtInVerst;
    // cout << "Lenght in verst: " << lenghtInVerst << endl;
    // cout << "Lenght in kilometrs: " << (double)lenghtInVerst * 1066.8 / 1000 << endl;
    // cout << "Lenght in metrs: " << (double)lenghtInVerst * 1066.8 << endl;
    // cout << "Lenght in santimetrs: " << (double)lenghtInVerst * 1066.8  * 100 << endl;

    // unsigned int a = 0;
    // unsigned int b = 0;

    // cout << "Enter a: ";
    // cin >> a;
    // cout << endl;

    // cout << "Enter b: ";
    // cin >> b;
    // cout << endl << ((double)a/(double)b);

    // double r = 0;
    // double x = 0;
    // double y = 0;

    // cout << "Enter radius of circle: ";
    // cin >> r;
    // cout << endl
    //      << "Enter x: ";
    // cin >> x;
    // cout << endl
    //      << "Enter y: ";
    // cin >> y;
    // cout << endl
    //      << "Score: ";

    // if (x * x + y * y <= r * r)
    // {
    //     cout << 4 << endl;
    // }
    // else if (x * x + y * y <= (2 * r) * (r * 2))
    // {
    //     cout << 3 << endl;
    // }
    // else if (x * x + y * y <= (3 * r) * (r * 3))
    // {
    //     cout << 2 << endl;
    // }
    // else if (x * x + y * y <= (4 * r) * (r * 4))
    // {
    //     cout << 1 << endl;
    // }
    // else{
    //     cout << 0 << endl;
    // }

    // double k = 0;
    // double b = 0;
    // double x = 0;

    // double r = 0;

    // cout << "Enter radius: ";
    // cin >> r;
    // cout << endl
    //      << "Enter k: ";
    // cin >> k;
    // cout << endl
    //      << "Enter b: ";
    // cin >> b;
    // cout << endl;

    // cout << "line cross cercle: ";

    // if (abs(b) / (sqrt(1 + k * k)) < r)
    // {
    //     cout << "2 times" << endl;
    // }
    // else if (abs(b) / (sqrt(1 + k * k)) ==  r)
    // {
    //     cout << "1 time" << endl;
    // }
    // else
    // {
    //     cout << "0 times" << endl;
    // }

    int n = 0;
    cin >> n;
    cout << endl;
    double s = 1;
    for (int i = 0; i < n; ++i)
    {
        s = s/n;
        cout << s << endl; 
    }
    return 0;
}