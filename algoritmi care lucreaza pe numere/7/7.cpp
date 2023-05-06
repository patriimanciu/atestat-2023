#include <fstream>

using namespace std;

ifstream cin("numere.in");
ofstream cout("numere.out");

void InserezP(int &n, int v[], int p, int val){
    n++;
    for (int i = n; i > p; i--){
        v[i] = v[i - 1];
    }
    v[p] = val;
}

int SumaCifre(int x){
    int sum = 0;
    while (x){
        sum += x %10;
        x /= 10;
    }
    return sum;
}

int main(){
    int n, v[101], p, val;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        int s = SumaCifre(v[i]);
        InserezP(n, v, i + 1, s);
        i++;
    }
    for(int i = 1; i <= n; i++)
        cout << v[i] << " ";
    return 0;
}