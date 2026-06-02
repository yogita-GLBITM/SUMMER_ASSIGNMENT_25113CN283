#include <iostream>
using namespace std;
int Power(int x, int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * x;
    }
    return result;
}
int main(){
    int x,n;
    cout << "Enter base: ";
    cin >> x;

    cout << "Enter power: ";
    cin >> n;

    cout << x << "^" << n << " = " << Power(x, n);
    return 0;
}