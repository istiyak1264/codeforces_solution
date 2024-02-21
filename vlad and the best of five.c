#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,count1=0,count2=0;
        char str[6];

        //taking input from the user.
        scanf("%s",str);

        for(i=0; i<5; i++)
        {
            if(str[i]=='A') count1++;
            else if(str[i]=='B') count2++;
        }

        //checking the conditions and printing the output.
        if(count1>count2) printf("A \n");
        else printf("B \n");
    }
    return 0;
}
