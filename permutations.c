#include<stdio.h>
#include<string.h>
int main()
{
char s_word[20],tmp;
int len,a[20],i,j,k,fact=1;
printf("Enter the word : ");
scanf("%s",s_word);
len=strlen(s_word);
for(i=1;i!=len+1;++i)
{
	fact=fact*i;
	a[i]=fact;
}		
for(i=1;i<=fact;++i)
{
	printf("%s\t",s_word);
	for(j=1;j<len+1;++j)
	{
		if(i%a[j]==0)
		{
			tmp=s_word[len-j-1];
			for(k=1;k<=j;++k)
			{
				s_word[len-j+k-2]=s_word[len-j+k-1];
			}
			s_word[len-1]=tmp;
		}
		else
			break;
	}
	
}
printf("\n");
}
