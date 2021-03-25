#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{

    float amt, total, num, generated, change, amt_ret;

    srand(time(0));
    generated = rand() % 10000;
    num = generated;

    printf("Change=%f\n",num);
    printf("Enter your amount: ");
    scanf("%f",&amt);

    do
    {
    if(amt < num)
        {
            printf("The amount is not enough, please insert a greater amount or equal %f \n",num);
            scanf("%f",&amt);
        }
    }while(amt<num);

        amt_ret = amt - num;
        printf("Amount to return = %f \n",amt_ret);

    return 0;





}

