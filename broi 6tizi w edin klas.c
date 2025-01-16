#include<stdio.h>
int main()
{
    int n,br=0,a;
    printf("Enter quantity of grades: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        do
        {
            scanf("%d",&a);
        }
        while(a<2 || a>6);
        if(a==6)
        {
            br++;
        }
    }
    printf("Quantity of grades is %d",br);
    return 0;
    printf("Chushki");
}
