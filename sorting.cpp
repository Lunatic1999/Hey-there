#include <stdio.h>
#include <math.h>

int main()
{
    int a[10],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        j = i;

        //i is not the first element
        while(j>0)
        {
            //not in order
            if(a[j-1] > a[j])
            {
                //swapping
                int temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }
            //in order
            else
            {
                break;
            }
            j--;
        }
    }

    for(i=0;i<n;i++)
        printf("%d\n",a[i]);

    return 0;
}
