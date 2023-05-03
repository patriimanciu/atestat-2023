#include <fstream>

using namespace std;

ifstream cin("date.in");
ofstream cout("date.out");

int CifrePare(int n){
    int p = 1, nr = 0;
    while (n){
        if (n % 2 == 0){
            nr = nr + (n % 10) * p;
            p *= 10;
        }
        n /= 10;
    }
    return nr;
}

int CifreCresc(int n){
    while (n > 9){
        if (n % 10 < (n / 10) % 10)
            return 0;
        n /= 10;
    }
    return 1;
}

int main(){
    int n, sum = 0;
    while (cin >> n){
        int par = CifrePare(n);
        if (CifreCresc(par))
            sum += par;
    }
    cout << sum;
    return 0;
}