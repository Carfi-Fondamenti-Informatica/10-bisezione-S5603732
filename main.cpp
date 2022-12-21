#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, f, g, err, x;
    do {
        cout << "inserire estremi\n";
        cin >> a >> b;
        f = pow(a, 2) * cos(a) + 1;
        g = pow(b, 2) * cos(b) + 1;
    }while(f * g >= 0);
    do {
        a = (a + b) / 2;
        if (f == 0) {
            cout << a << endl;
            cout << f;
        }else {
            if (f * b < 0) x = b;
            else  x = a;
        }
        err = abs((b - a) / 2);
    }while(err >= exp(1) - 6);
    float h = pow(x, 2) * cos(x) + 1;
    cout << x << endl;
    cout << h;
   return 0;
}
