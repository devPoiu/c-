#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void n41(int m){
    if ((m>999) and (m<10000)){
        int a = m / 1000;
        int b = m / 100 % 10;
        int c = m / 10 % 10;
        int d = m % 10;
        if ((a == b) || (a == c) || (a == d)) cout << "sovpadaut \n";
        else if ((b == c) || (b == d)) cout << "sovpadaut \n";
            else if (c == d) cout << "sovpadaut \n";
            else cout << "ne sovpadaut \n";
    }
    else cout << "ne podxodit \n";
}

void n42(int m, int n){
    int max_del = 0;
    for(int i = m; i <= n; i++){
        int q = 0;
        for (int j = 2; j < i; j++){
            if (i % j == 0) q++;
        }
        if (q > max_del) max_del = q;
    }
    for(int i = m; i <= n; i++){
        int q = 0;
        for (int j = 2; j < i; j++){
            if (i % j == 0) q++;
        }
        if (q == max_del) cout << i << " ";
    }
    cout << "\n";
}

int dlin(int a){
    int q = 0;
    int schet = 10;
    while (a / schet > 0){
        q++;
        schet *= 10;
    }
    return q + 1;
}

void n43(int n){
    for(int i = 1; i <= n; i++){
        int q = i;
        int schet = 0;
        for(int j = 0; j < dlin(i); j++){
            int w = q % 10;
            if (w == 0 || i % w == 0) schet++;
            q /= 10;
        }
        if (schet == dlin(i)) {
            if (i != n) cout << i << ", ";
            else cout << i;
        }
    }
    cout << "\n";
}

int sum_chis(int q){
    int sum = 0;
    for (int i = 0; i < dlin(q); i++){
        sum += q % 10;
        q /= 10;
    }
    return sum + q;
}

void n44(int n){
    int sum_n = sum_chis(n);
    for (int i = 1; i < n; i++){
        if (sum_chis(i) == sum_n) cout << i << " ";
    }
    cout << "\n";
}

int n45(int n){
    if(n / 10 == 0) return 1;
    return 1 + n45(n / 10);
}





int main() {
    n41(2134);
    n41(2133);
    n41(213);
    n42(2, 11);
    n42(2, 12);
    n43(20);
    n44(45);
    cout << n45(45) << "\n";

    return 0;
}