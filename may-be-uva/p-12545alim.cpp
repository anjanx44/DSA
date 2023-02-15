    #include<stdio.h>
    int main()
    {
        char a[111],b[111];
        int test,i,n,m,t=0,count1,count2,d,count3,count4;
        scanf("%d",&test);
        while(test--)
        {
            scanf("%s%s",a,b);
            count1=0; count2=0; count3=0; count4=0;
            for(i=0;a[i]!='\0';i++)
            {
                if(a[i]=='1') count1++;
                else if(a[i]=='?') count3++;
                if(b[i]=='1') count2++;
            }
            if(count1>count2)
            {
                printf("Case %d: -1\n",++t);
                continue;
            }
            if(count3!=0)
            {
            for(i=0;a[i]!='\0';i++)
            {
                if(a[i]=='?')
                {
                    if(b[i]=='1')
                    {
                        if(count1!=count2)
                        {
                            a[i]='1';
                            count1++;
                        }
                    }
                    else
                    a[i]='0';
                }
            }
            }
            for(i=0;a[i]!='\0';i++)
            {
                if(count1==count2) break;
                if(a[i]=='0'&&b[i]=='1')
                {
                    a[i]='1';
                    count3++;
                    count1++;
                }
            }
            for(i=0;a[i]!='\0';i++)
            {
                if(a[i]!=b[i])
                count4++;
            }
            printf("Case %d: %d\n",++t,count3+count4/2);
        }
        return 0;
    }
