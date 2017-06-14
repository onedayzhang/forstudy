#include <stdio.h>
#include <malloc.h>
#include <string.h>
char* longestCommonPrefix(char** strs, int strsSize) {
    int i,j,ressize,msize=0;
    ressize=strlen(strs[0]);
    if(strs==NULL||strsSize==0||ressize==0)
    return NULL;
    char *res=malloc(ressize+1);
    msize=ressize;
    for(i=1;i<strsSize;i++)
    {
        for(j=0;j<msize&&strs[i][j]!='\0';j++)
        {
            if(strs[0][j]!=strs[i][j])
            {
                msize=j;
            }
        }
    }
    for(i=0;i<msize;i++)
    {
        res[i]=strs[0][i];
    }
    res[i]='\0';
    return res;
}

int main()
{
//    char* a[5]={"abcdef","abcdfe","abcdfef","abcdefe","abcdcf"};
    char*a[]={};
    printf("%s\n",longestCommonPrefix(a,0));
    return 0;
}
