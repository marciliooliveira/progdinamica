#include <iostream>

using namespace std;

int fibonacci (int *a, int numero) {
    int i;
    if (numero == 1) return 1;
    else if (numero == 0) return 0;
    else {
        a[0] = 0;
        a[1] = 1;
        for (i = 2; i <= numero; i++) {
            a[i] = a[i-1] + a[i-2];
        }
    }
    cout << a[numero] << endl;
}

int main () {
    int num;
    cin >> num;
    int v[num+1];
    fibonacci(v, num);
    return 0;
}
