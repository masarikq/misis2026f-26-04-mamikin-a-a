#include <iostream>
using namespace std;

double plu(double a, double b) { return a + b;}

double minu(double a, double b) {return a - b;}

double umnos(double a, double b) { return a * b;}

double del(double a, double b) {return a / b;}



int main() {
    string input;
    while (true) {
        cout << "дайте цифру пж или нажмите стоп:  ";
        cin >> input;
        if (input == "стоп") break;

        double a = stod(input),b;
        char c;
        cin >> c >> b;
        double res;
        if (c ==  '+') res = plu(a,b);
        else if (c ==  '-') res = minu(a,b);
        else if (c ==  '*') res = umnos(a,b);
        else if (c ==  '/') res = del(a,b);
        cout << "результат:  " << res << endl;
    }
    



    return 0;
}