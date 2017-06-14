#include <stdio.h>
#include <malloc.h>
#include <string.h>
char* longestCommonPrefix(char** strs, int strsSize) {
    int i,j,ressize,msize=0;
    if(strsSize<1)
    return "";	
    ressize=strlen(strs[0]);
    char *res=malloc(sizeof(char)*(ressize+1));
	strcpy(res,strs[0]);
    for(i=1;i<strsSize;i++)
    {
    	msize=0;
        for(j=0;j<ressize;j++)
        {
            if(res[j]==strs[i][j])
            {
                 msize++;
            }
			else
			{
				if(msize==0)
					return "";
				res[msize]='\0';
			}
        }		
    }
    return res;
}


int main()
{
	//    char* a[5]={"abcdef","abcdfe","abcdfef","abcdefe","abcdcf"};
	char*a[1]={"a"};
    printf("%s\n",longestCommonPrefix(a,1));
    return 0;
}
