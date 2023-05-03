#include <fstream>

using namespace std;

ifstream cin("atestat.in");
ofstream cout("atestat.out");

int CifraMax(int n){
    int maxx = 0;
    while (n){
        if (n % 10 > maxx)
            maxx = n % 10;
        n /= 10;
    }
    return maxx;
}

int v[10];

int main(){
    int n, i = 0, maxx = 0, cif;
    while (cin >> n){
        cif = CifraMax(n);
        v[cif]++;
        if (v[cif] > maxx)
            maxx = v[cif];
    }
    for (int i = 0; i < 10; i++)
        if (v[i] == maxx)
            cout << i << " ";


    return 0;
}