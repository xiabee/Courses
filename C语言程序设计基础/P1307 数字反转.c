#include<stdio.h>
#include<math.h>
int main()
{
    int i,we2,find,y,x,f,n,a[15],we=0,s=0;
    scanf("%d",&n);
    if(n>0)f=1;
    if(n==0)
	{
		printf("%d",0);
		return 0;
	}
    if(n<0)
	{
		n=-n;
		f=-1;
	}
    x=n;
    while(x>0)
    {
        we++;
        x/=10;
    }
    x=n;
    y=pow(10,we-1);
    for(i=1;i<=we;i++)
    {
        a[i]=x/y;
        x=x-a[i]*y;
        y/=10;
    }
    find=1;
    we2=we-1;
    for(i=we;i>=1;i--)
    {
        if(a[i]==0&&find==0)
		{
			we2--;
			continue;
		}
        else
        {
            find=1;
            s+=a[i]*pow(10,we2);
            we2--;
        }
    }
    if(f==1)
		printf("%d",s);
    else 
		printf("-%d",s);
    return 0;
}
