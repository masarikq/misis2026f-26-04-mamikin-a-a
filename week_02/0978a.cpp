#include <iostream>
#include <vector>
using namespace std;

int main() {

    int x;
    cin >> x;

    vector<int> a(x);
    for (int i = 0; i<x; i++) {
        cin >> a[i];
    }

    vector<int> res;

    for (int i = 0; i < x; i ++) {
        bool c = false;
        for (int j = i + 1; j < x; j++) {
            if (a[i] == a[j]) {
                c = true;
                break;
            }
        }
        if (c == false) {
            res.push_back(a[i]);
        }
    }

    cout<<res.size()<<endl;

    for (int a : res) {
        cout<<a<<"  ";
    }
    return 0;
}