#include <iostream>
#include <string>
#include <clocale>
using namespace std;

void vivod(int a[], int n){ //вывод массива
    cout<<"Массив a:"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<"\t"; cout<<endl;
}
void vvod(int a[], int n){ // заполнение массива с клавиатуры
    cout<<"Введите элементы массива "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void generac(int a[], int n){ // заполнение массива случайными числами на диапазоне от -100 до 100
    for(int i=0;i<n;i++)
        a[i]=rand()%(201)-100;
    vivod( a, n);
}
void replace(int a[], int n, int c=0 ){ //заменить все элементы младше С на 0
    for(int i=0;i<n;i++)
        if(a[i]<c) a[i]=0;
}

int summa(int a[], int n, int c=1 ){ //заменить все элементы младше С на 0
    int sum=0;
    for(int i=0;i<n;i++)
        if(a[i] % c==0)
        sum+=a[i];
    return sum ;
}

float sred(int arr[], int n){
    int a, b;
    cout << "a = ";
    cin>> a;
    cout << "b = ";
    cin>> b;
    int ii = 0;
    int sum = 0;
    for (int i = 0; i<n; i++){
        if ((arr[i] % a != 0) || (arr[i] % b != 0)){
            ii++;
            sum += arr[i];
        }
    }
    return sum / ii;
}

void ymen(int arr[], int n){
    int k, k1, a;
    cout << "k = ";
    cin>> k;
    cout << "k1 = ";
    cin>> k1;
    cout << "A = ";
    cin>> a;
    for (int i = k-1; i < k1-1; i++){
        arr[i] /= a;
    }
}

void min(int arr[], int n){
    int min;
    for (int i = 0; i< n; i++){
        if (arr[i] >= 0){
            min = arr[i];
            break;
        }
    }
    for (int i = 0; i< n; i++){
        if ((arr[i]>= 0) && (arr[i] < min)){
            min = arr[i];
        }
    }
    for (int i = 0; i< n; i++){
        if (arr[i] <= 0){
            arr[i] = min;
        }
    }
}

int main(){
    int n,k;
    cout<<"введите количество элементов массива "; cin>>n;
    int a[n];
    do{
        cout<<"\n1. Ввод массива a "<<endl;
        cout<<"2. Генерация элементов массива a "<<endl;
        cout<<"3. Замена отрицательных элементов нулями "<<endl;
        cout<<"4. Вывод элементов массива "<<endl;
        cout<<"5. Замена всех элементов меньших 50 на 0 "<<endl;
        cout<<"6. Вывод суммы элементов массива "<<endl;
        cout<<"7. Вывод суммы элементов массива кратных С "<<endl;
        cout<<"8. Конец работы\n"<<endl;
        cout<<"9. Cреднеарифметическое, которые некратны А или кратны В."<<endl;
        cout<<"10. Элементы массива с k-го по k1 уменьшив их в A раз."<<endl;
        cout<<"11. Мин эл. среди положительных элементов. Замена всеч отрицательнх элементов."<<endl;
        cout<<"\nУкажите номер пункта меню ";
        cin>>k;
        switch (k){
            case 1: vvod(a,n);break;
            case 2: generac(a,n); break;
            case 3: replace(a,n); break;
            case 4: vivod(a,n); break;
            case 5: replace(a,n, 50); break;
            case 6: cout<<summa(a,n)<<endl; break;
            case 7:
                int c;
                cout<<"Введите С: ";
                cin>>c;
                cout<<summa(a,n, c)<<endl;
                break;
            case 8: cout<<"Конец работы"<<endl; break;
            case 9: cout<< sred(a, n) <<endl; break;
            case 10: ymen(a, n); break;
            case 11: min(a, n); break;
            default: cout<<"Такого пункта нет"<<endl;
        }
        if (k==8) break;
    } while(true);
}

