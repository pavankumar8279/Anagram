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

    int index,i;
    for (i = 0; str1[i]!='\0'; ++i)
    {
    	index = str1[i] - 'a';
        p[index]++;
    }

    for (i = 0; str2[i]!='\0'; ++i)
    {
        index = str1[i] - 'a';
        p[index] = p[index]-1;

        if(p[index]<0)
        {
            printf("its not anagram\n");
            return -1;
        }
    }

    if(str2[i] == '\0')
    {
        printf("it is anagram\n");
    }

    return 1;

}

int main(void)
{
    printf("%d",anagram("decimal","medical"));

    return 0;
}

