#include <iostream>
#include <string>

int main() {
    int count = 0;
    int ans = 0;
    int  n;
    std::string s;
    std::cin>>n;
    std::cin>>s;
    for(int i = 0; i < n; i ++) {
        if(s[i] == 'x') {
            count ++;
            if(count>2) {
                ans ++;
            }
        } else {
            count = 0;
        }
    }
    std::cout<<ans<<'\n';

    return 0;
}