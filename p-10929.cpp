#include <stdio.h>
#include<string.h>
int main() {
    char str[1002];
    while(gets(str)) {
        if((str[0] == '0')||(strlen(str)>1))// && str[1] == '\0')
            break;
        int tmp = 0, i;
        for(i = 0; str[i]; i++) {
            tmp = (tmp*10 + str[i]-'0')%11;
            //tmp %= 17;
        }
        if(tmp ==0 )
        printf("%s is a multiple of 11.\n",str);
        else
        printf("%s is not a multiple of 11.\n",str);
    }
    return 0;
}
