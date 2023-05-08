#include <fstream>

using namespace std;

ifstream cin("atestat.in");
ofstream cout("atestat.out");

void Invers(float v[101], int p, int &q){
    for (int i = p; i < (p + q) / 2; i++)
        swap(v[i], v[(q + i) / 2 + 1]);
}

void Stergp(float v[101], int &n, int p){
    for (int i = p; i < n; i++)
        v[i] = v[i + 1];
    n--;
}

int main()
{
    float v[101];
    int p, q, n;
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> v[i];
    int jum = n / 2; 
    if (n % 2)
        Stergp(v, n, jum + 1);
    
    Invers(v, 1, jum);
    Invers(v, jum + 1, n);
    
    for(int i = 1; i <= n; i++)
        cout << v[i] << " ";
    return 0;
}