#include <iostream>
#include <cmath>

using namespace std;

int main() {
      float a, b, f, g, x, h, c, d;
    do{
        cout << "inserire estremi\n";
        cin >> a >> b;
        if(a > b) {
            c = a;
            d = b;
            a = d;
            b = c;
        }
        f = pow(a, 2) * cos(a) + 1;
        g = pow(b, 2) * cos(b) + 1;
    }while(f * g >= 0);
   do{
       x = (a + b) / 2;
       h = pow(x, 2) * cos(x) + 1;
       if((h < 0.001) && (h > -0.001)) {
           cout << x << endl;
           cout << h;
       }else if(h > 0) {
           b = x;
       }else {
           a = x;
       }
   }while((h >= 0.001) || (h <= -0.001));
   return 0;
}
