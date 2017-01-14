#include<cstdio>
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
    char c,l;
    while(scanf("%c",&c)==1)
    {
        if(isalpha(c))
        {
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            {
                while(isalpha(c))
                {
                    putchar(c);
                    c=getchar();
                }
                printf("ay");
            }
            else
            {
                l=c;
                c=getchar();
                while(isalpha(c))
                {
                    putchar(c);
                    c=getchar();
                }
                printf("%cay",l);
            }
        }
        putchar(c);
    }
    return 0;
}

