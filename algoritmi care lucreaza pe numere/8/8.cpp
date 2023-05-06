#include <fstream>

using namespace std;

ifstream cin("numere.in");
ofstream cout("numere.out");

int EPrim(int x){
    if (x < 2)
        return 0;
    if (x == 2)
        return 1;
    if (x % 2 == 0)
        return 0;
    for (int i = 3; i * i <= x; i += 2){
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int v[101], n;

int main(){
    int maxx = 0;
    while (cin >> n)
    {
        if (EPrim(n) == 1) 
            v[n]++;
    }
    for (int i = 0; i <= 99; i++)
        if (v[i] > maxx) 
            maxx = v[i];
    if(maxx == 0) 
        cout << "Nu exista";
    else{
        for (int i = 0; i <= 99; i++)
            if(v[i] == maxx) 
                cout << i << " " << v[i] << '\n';
    }
    return 0;
}