#include <iostream>
using namespace std;

int main()
{
    int n, k, i = 1, cube1, cube2, Number1, Number2, num;
    do {
        cout << "Enter please k>0:";
        cin >> k;
        cin.ignore(32767, '\n');
        if (cin.fail()) {
            cin.clear();
            cin.ignore(32767, '\n');
        }
    } while (k < 1);

    int* massiv = new int[k];

    for (n = 0; n < k; n=n+ Number1)
    {
        if (pow(i, 3) > 32767) {
            cout << "A very large number";
            return 1;
        };
        cube2 = cube1 = pow(i, 3);
        
        Number1 = 0;
        while (cube2)
        {
            cube2 = cube2 / 10;
            Number1++;
        }
        Number2 = Number1;
        cube2 = cube1;
        while (cube2)
        {
            num = cube2 % 10;
            cube2 /= 10;
            if ((n + Number2 - 1) < k)
                massiv[n + Number2 - 1] = num;
            Number2--;
        }
        i++;
    }
    cout << "massive:";
    for (n = 0; n < k; n++)
        cout << massiv[n] << " ";
    cout << endl;
    cout << "k-i element:" << massiv[k - 1];

    delete[] massiv;
    return 0;
}