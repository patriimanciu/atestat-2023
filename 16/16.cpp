#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("atestat.in");
ofstream fout("atestat.out");

int main(){
    char s[101], c, t[101];
    int n = 0;
    fin.getline (s, 101); 
    fin >> c;
    for (int i = 0; i < strlen (s) ; i++)
    if (c == s[i]) {
        n++;
        strcpy (t, s + i); 
        strcpy (s + i + 1, t);
        i++;
    }
    fout << n << '\n' << s;
    return 0;
}