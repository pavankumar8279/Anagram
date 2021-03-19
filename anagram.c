#include<stdio.h>
#include<string.h>

int p[27];
int anagram(char str1[],char str2[])
{

    int l1 = strlen(str1);
    int l2 = strlen(str2);

    if(l1!=l2)
    {
        printf("it is not anagram\n");
        return -1;
    }


    for (int i = 0; i<l1; ++i)
    {
	    p[str1[i]]++;
	    p[str2[i]]--;

    }

    for(int i=0;i<256;i++)
    {
	    if(p[i]!=0)
		    return 0;
    }

    return 1;

}

int main(void)
{
    printf("%d",anagram("decidmal","medical"));

    return 0;
}

