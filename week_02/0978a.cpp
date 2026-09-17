#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nams;
    vector<int> nams2;
    int nam;
    int x;
    cin >> x;

    for (; x!=0;x--) {
        cin >> nam;
        nams.push_back(nam);
    }

    for (int i = nams.size() -1 ; i >=0; i--) {
    }


    return 0;
}