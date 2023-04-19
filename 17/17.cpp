#include <fstream>
#include <cstring>

using namespace std;

ifstream cin("atestat.in");
ofstream cout("atestat.out");

int x;

int nr_voc(char cuv[]){
    int cnt = 0;
    for (int i = 0; i < strlen (cuv); i++)
    if (strchr ("aeoiu", cuv [i]))
        cnt++;
    return cnt;
}

char* sterg_voc(char cuv[]){
    int cnt = 0;
    for (int i = 0; i < strlen (cuv); i++)
    if (strchr ("aeiou", cuv[i]) && cnt < x) {
        strcpy (cuv + i, cuv + i + 1); 
        cnt++;
        i--;}
    return cuv;
}

int main(){
    char s[256], aux[256]="", *p, t[256];
    cin >> x; 
    cin.get();
    cin.getline(s, 256);
    p = strtok (s, " ");
    strcpy(t, sterg_voc(p));
    while (p) {
    if (nr_voc(p) >= x){
        strcpy(t, sterg_voc(p));
        strcat(aux, t);
    }
    else
        strcat(aux, p);
    strcat(aux, " ");
    p = strtok (NULL, " ");
    }
    strcpy(s, aux);
    cout << s;
    return 0;
}