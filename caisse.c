#include <math.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include<time.h>


// returns number of units and subtracts unit_size * result
// from val
int calcule_monnaie(int* val, int unit_size)
{
    int num = *val / unit_size;
    *val %= unit_size;
    return num;
}

int main()
{
    

    double amount,amt_money,tot_amt;
    
    srand(time(0)); 
    amount = rand() % 10000;
    
    printf(" Enter the amount that you need to pay :%lf\n",amount);
    
    printf("Enter the amount of money you would give : ");
    scanf("%lf",&amt_money);
    
    while(amount > amt_money)
    {
        
      printf("Insufficient Funds!");
      printf("Enter the amount of money you would give : ");
      scanf("%lf",&amt_money);  
        
    }
    
    tot_amt = amt_money - amount;
    
    int x = (int)(tot_amt * 100.0 + 0.5);

    printf("No. of Rs1000 bill: %d\n", calcule_monnaie(&x, 1000 * 100) );
    printf("No. of Rs500 bill: %d\n",calcule_monnaie(&x, 500 * 100) );
    printf("No. of Rs200 bill: %d\n", calcule_monnaie(&x, 200 * 100) );
    printf("No. of Rs100 bill: %d\n", calcule_monnaie(&x, 100 * 100) );
    printf("No. of Rs50 bill: %d\n", calcule_monnaie(&x, 50 * 100) );
    printf("No. of Rs25 bill: %d\n", calcule_monnaie(&x, 25 * 100) );
    printf("No. of Rs20 bill: %d\n", calcule_monnaie(&x, 20 * 100) );
    printf("No. of Rs10 coin: %d\n", calcule_monnaie(&x, 10 * 100) );
    printf("No. of Rs5 coin: %d\n", calcule_monnaie(&x, 10 * 100) );
    printf("No. of Rs1 coin: %d\n", calcule_monnaie(&x, 1 * 100) );
    printf("No. of 50 cents: %d\n", calcule_monnaie(&x, 50) );
    printf("No. of 20 cents: %d\n", calcule_monnaie(&x, 20) );
    printf("No. of 5 cent: %d\n", calcule_monnaie(&x, 5) );

    return 0;
}