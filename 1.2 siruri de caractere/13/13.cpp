#include <fstream>
#include <cstring>

using namespace std;

ifstream cin("cuvant.in");
ofstream cout("numar.out");

int main(){
    char s[21], voc[] = "aeiou";
    int nr = 0; 
    cin >> s;
    if (strlen(s) > 17)
        cout << "Imposibil";
    else{
        for (int i = 0; i < strlen(s); i++)
            if (strchr(voc, s[i]))
                if(i + 1 < 10)
                    nr = nr * 10 + (i + 1); 
                else
                    nr = nr * 10 + (i + 1 - 10);
        if (nr == 0)
            cout << "Imposibil";
        else
            cout << nr;
    }
    return 0;
}