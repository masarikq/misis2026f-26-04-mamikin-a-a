#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    
    srand(time(0));
    int min = 1 , max = 100;
    int num = min + rand() % (max - min + 1);
    int a, count = 0;


    cout << "Я загадал число от 1  до 100 попробуй отгадать \n";

    do{
        cout << "Введите число:  ";
        cin >> a;
        count++;

    if (a  < num) {
        cout << "Загаданное число больше чем ваше" << endl;
    }
        else if (a  > num) {
            cout << "Загаданное число меньше чем ваше" << endl;
    }
    else {
        cout << "Вы отгадали загаданное число !!! за: " << count << "  попыток";

    }
} while (a != num);



    return 0;
}




