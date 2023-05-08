#include <fstream>

using namespace std;

ifstream cin("date.in");
ofstream cout("date.out");

int CifreDistincte(int n){
    int t[10] = {0 , 0 , 0, 0, 0, 0, 0, 0, 0, 0};
    while (n){
        if (t[n%10])
            return 0;
        else
            t[n%10] = 1;
        n /= 10;
    }
    return 1;
}

int main(){
    int n, yes = 0, no = 0, v[101];
    while (cin >> n){
        if (CifreDistincte(n)){
            cout << n << " ";
            yes++;
        }
        else{
            v[++no] = n;
        }
    }
    if (!yes)
        cout << "Nu exista" << '\n';
    else
        cout << yes << '\n';
    if (!no)
        cout << "Nu exista" << '\n';
    else{
        for (int i = 1; i <= no; i++)
            cout << v[i] << " ";
        cout << no;
    }
    return 0;
}