#include iostream
#include string
using namespace std;

int del(int n){
    int kol_del = 0;
    for(int i = 2; i  n; i++){
        if (n % i == 0) kol_del++;
    }
    return kol_del;
}

int f(int m, int n){
    int max_kol = 0;
    int w;
    for(int i = m; i = n; i++){
        int q = del(i);
        if (max_kol  q) max_kol = q;
        w = i;
    }
    return w;
}

int main() {
    cout  f(28, 45);
    return 0;
}
