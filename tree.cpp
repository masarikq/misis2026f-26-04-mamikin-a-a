// задача номер 3 с циклом for 


// #include <iostream>

// using namespace std;

// int main() {
//   int y;
//   cin >> y;
//   for (int b = y + 1; b <=10000; b++) {
//     int d1 = b / 1000;
//     int d2 = (b/100) % 10;
//     int d3 = (b/10) % 10;
//     int d4 = b % 10;
//     if (d1!=d2 && d1!=d3 && d1!=d4 && d2 != d3 && d2!= d4 && d3 != d4) {
//       cout << b << endl;
//       break;
//     }
//   }
//   return 0;
// }



// задача 3 с циклом while



// #include <iostream>

// using namespace std;

// int main() {
//   int y;
//   cin>>y;
//   int b = y +1;
//   while (b < 10000) {
//     int d1 = b /1000;
//     int d2 = (b/100) % 10;
//     int d3 = (b/10) % 10;
//     int d4 = b % 10;
//     if (d1!=d2 && d1!=d3 && d1!=d4 && d2 != d3 && d2!= d4 && d3 != d4) {
//       cout<<b<<endl;
//       break;
//     }
//     b ++;
//   }
//   return 0;
// }