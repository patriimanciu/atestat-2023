#include <iostream>
#include <fstream>

using namespace std;

ifstream in("vanzari.in");

struct produs{
    int cant;
    float pret, adaos;
};

int main(){
    int n, maxx = 0, i_maxx; 
    float tot = 0.0;
    produs p[100];
    in >> n;
    for (int i = 0; i < n; i++){
        in >> p[i].cant >> p[i].pret >> p[i].adaos;
        tot = tot + (p[i].pret + p[i].pret * p[i].adaos / 100) * p[i].cant;
        if (p[i].cant > maxx){
            maxx = p[i].cant;
            i_maxx = i;
        }
        else
            if (p[i].cant == maxx && p[i].adaos > p[i_maxx].adaos){
                maxx = p[i].cant;
                i_maxx = i;
            }

    }
    cout << tot << '\n' <<  i_maxx + 1;
    return 0;
}