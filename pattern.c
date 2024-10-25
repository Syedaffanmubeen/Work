  // Test case 1 : 
  
  // Enter n : 9
  
  // Enter m : 3
  
  // $$$***$$$
#include<stdio.h>
int main()
{
    int n,m;
    char pattern = '$';
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter m : ");
    scanf("%d",&m);
    char arr[n];
    int x=1;
    if((n%2)!=0 && (m%2)!=0)
    {
        for(int i=0;x<=n;i++)
        {
            arr[i] = pattern;
            if(x%m == 0)
            {
                if(pattern == '$')
                {
                    pattern = '*';
                }
                else
                {
                    pattern = '$';
                }
            }
            x++;
        }
        arr[n]='\0';
        printf("%s\n",arr);
    }
}
