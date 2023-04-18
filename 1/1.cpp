#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numere.in");
ofstream fout("numere.out");

int Concatenare(int a, int b){
    int copy = b;
    while (copy)
    {
        a *= 10;
        copy /= 10;
    }
    return b + a;
}

int main()
{
    int n, v[100], f1, f2;
    fin >> n;
    for (int i = 0; i < n; i++)
        fin >> v[i];
    for (int i = 0; i < n - 1; i++){
        f1 = Concatenare(v[i], v[i + 1]);
        f2 = Concatenare(v[i + 1], v[i]);
        if (f1 > f2)
            fout << f1 << " ";
        else
            fout << f2 << " "; 
    }
    return 0;
}