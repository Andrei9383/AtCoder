#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int64_t a, b; cin >> a >> b;
    cout << (long long)pow(32, a - b);
    return 0;
}