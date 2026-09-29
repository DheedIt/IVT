#include <iostream>
#include <string>
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

    // Доделать
    // int n = 0;
    // cin >> n;
    // cout << endl;
    // double s = 0;
    // int i = 1;
    // while (n != i-1)
    // {
    //     s = 1 / (pow(2, i) + s);
    //     i++;
    //     cout << s << endl;
    // }
    // return 0;

    // int a, b, c;
    // cin >> a >> b >> c;
    // if (a < b)
    // {
    //     if (b < c)
    //         cout << c;
    //     else
    //         cout << b;
    // }
    // else
    //     cout << a;

    //     int num = 0;
    //     cin >> num;
    //     int i = num;
    //     while (i >= 1)
    //     {
    //         cout << num % 10;
    //         i /= 10;
    //         num = i;
    //     }

    // double a = 0, b = 0, c = 0;
    // cin >> a >> b >> c;
    // cout << endl;
    // double desc = b * b - 4 * a * c;
    // if (desc > 0)
    // {
    //     cout << (-b + sqrt(desc)) / 2 / a << endl;
    //     cout << (-b - sqrt(desc)) / 2 / a;
    // }
    // else if (desc == 0)
    // {
    //     cout << -b / 2 / a;
    // }
    // else
    //     cout << "Нет корней";

    // int input = 0;
    // string fingers[5] = {"Mezinec", "Bezymaniy", "Sredni", "Ukaz", "Blolshi"};
    // cin >> input;
    // cout << endl;
    // cout << fingers[input-1];

    int n = 0;
    cin >> n;
    int fSum = 0;
    int sSum = 0;
    int maxSum = 0;
    for (int i = 0; i < n; ++i)
    {
        int num = i + 1;

        while (num >= 1)
        {
            // cout << num % 10;
            i % 2 == 0 ? fSum += num % 10 : sSum += num % 10;
            num /= 10;
        }
        if (i % 2 == 0)
        {
            maxSum < fSum + sSum ? maxSum = fSum + sSum : maxSum == maxSum;
            cout << fSum << " n " << sSum << " - " << i+1 << endl;
            fSum = 0;
            sSum = 0;
        }
    }
    cout << maxSum << endl;
}