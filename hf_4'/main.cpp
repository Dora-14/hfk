#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int i, j;
    char s[100], r[100]="", a[20], *p;
    cin.get(s, 100);
    p=strtok(s, " ");
    while(p!=0){
        if(strlen(p)%2!=0)
            {
            j=0;
            strcpy(a, "");
            for (i=strlen(p)-1; i>=0; i--){
                a[j]=s[i];
                j=j+1;
            }
            a[j]='/0';
          strcat(r, a);}
        else
        strcat(r, p);
        strcat(r, " ");
        p=strtok(0, " ");
    }
    cout << r;
    return 0;
}
