#include<stdio.h>

typedef int BOOL;
#define true 1
#define false 0

    int Check(int iNo)

    {
        if(( iNo% 5) == 0)
        {
            return true;
        }
        
        else
        {
            return false;
        }

    }

    int main()


{
        int iValue = 0;
        BOOL bRet = false;

        printf("Enter the number\n");
        scanf("%d",&iValue);

        bRet = Check(iValue);

        if(bRet == true)

        {
            printf("Divisible by 5\n");
        }
        else
        {
            printf("Not Divisible by 5");
        }


    return 0;
}