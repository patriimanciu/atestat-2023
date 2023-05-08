#include <fstream>

using namespace std;

ifstream cin("atestat.in");
ofstream cout("atestat.out");

int Cmmdc(int a, int b){
    while (a != b){
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int Cmmmc(int a, int b){
    int x = Cmmdc(a, b);
    return (a * b) / x;
}

int main(){
    int a, b, y, x;
    cin >> b;
    int p;
    x = b;
    while (cin >> a)
    {
        y = Cmmdc(a, b);
        p = Cmmmc(a, x);
        b = y;
        x = p;

    }
    cout << b << '\n' << p;
    return 0;
}