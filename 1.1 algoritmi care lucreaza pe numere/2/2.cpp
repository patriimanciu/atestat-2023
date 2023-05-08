#include <fstream>

using namespace std;

ifstream cin("date.in");
ofstream cout("date.out");

int FactorPutereMax(int n){
    int base, power = 0, p = 0, i = 2;
    while(n > 1){
        if (n % i == 0){
            n /= i;
            p++;
            if (p >= power){
                power = p;
                base = i;
            }
        }
        else{
            if (p >= power){
                power = p;
                base = i;
                p = 0;
            }
            if (i == 2)
                i = 3;
            else
                i += 2;
        }
    }
    return base;
}

int main(){
    int n, maxx = 0, m;
    while (cin >> n){
        m = FactorPutereMax(n);
        if (m > maxx)
            maxx = m;
        cout << m << " ";
    }
    cout << '\n' << maxx;
    return 0;
}