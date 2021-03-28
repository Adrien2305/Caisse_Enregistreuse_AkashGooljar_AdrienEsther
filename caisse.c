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
    int n2000, n1000, n500, n200, n100, n50, n25, n20, n10, n5, c1,c50c,c20c,c5c,z;
    char user_choice ;
do{
    srand(time(0));

    amount =rand() % 10000 ;
    amount = amount/10;
    
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
        printf("No. of Rs2000 bill: %d\n", calcule_monnaie(&x, 2000 * 100) );
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
        
        
        int w = (int)(tot_amt * 100.0 + 0.5);
        int y;
        n2000=10;
        int c=0;
        
        y = n2000 - calcule_monnaie(&w, 2000 * 100);
        switch(c){

            case 0:

                if(y<0)
                {
                
                printf("\n Rs 2000 notes have finished: \n ");
                printf("Enter 0 to stop the program or 1 to refill:  \n");
                scanf("%d", &z);
                
                if(z==0){
                    exit(0);
                }
                else
                {
                    printf("Please enter the number of cash you want to insert: \n");
                    scanf("%d", &n2000);
                    printf("\nNumber of 2000 notes remaining: %d\n", n2000);


                }
                
                break;
                
           
               
            
            }
        
            default: 
                printf("\nNumber of 2000 notes remaining: %d\n", y );
        


        }
        
     n1000=10;
     
     y = n1000 - calcule_monnaie(&w, 1000 * 100);
        switch (c) {

           case 0:

               if(y<0)
                {
                
                printf("\n Rs 1000 notes have finished: \n ");
                printf("Enter 0 to stop the program or 1 to refill:  \n");
                scanf("%d", &z);
                
                if(z==0){
                    exit(0);
                }
                else
                {
                    printf("Please enter the number of cash you want to insert: \n");
                    scanf("%d", &n1000);
                    printf("\nNumber of 1000 notes remaining: %d\n", n1000);
                }
                
                break;
                
           
               
            
            }
            default: 
                printf("\nNumber of 1000 notes remaining: %d\n", y );
  }    

    n500=10;
     
     y = n500 - calcule_monnaie(&w, 500 * 100);
        switch (c) {

           case 0:
               if(y<0)
                {
                
                printf("\n Rs 500 notes have finished: \n ");
                printf("Enter 0 to stop the program or 1 to refill:  \n");
                scanf("%d", &z);
                
                if(z==0){
                    exit(0);
                }
                else
                {
                    printf("Please enter the number of cash you want to insert: \n");
                    scanf("%d", &n500);
                    printf("\nNumber of 500 notes remaining: %d\n", n500);
                }
                
                break;
                
          
               
            
            }
            default: 
                printf("\nNumber of 500 notes remaining: %d\n", y );
  }    
  
  
     n200=10;
     
     y = n200 - calcule_monnaie(&w, 200 * 100);
        switch (c) {

           case 0:
               if(y<0)
                {
                
                printf("\n Rs 200 notes have finished: \n ");
                printf("Enter 0 to stop the program or 1 to refill:  \n");
                scanf("%d", &z);
                
                if(z==0){
                    exit(0);
                }
                else
                {
                    printf("Please enter the number of cash you want to insert: \n");
                    scanf("%d", &n200);
                    printf("\nNumber of 200 notes remaining: %d\n", n2000);
                }
                
                break;
                
           
               
            
            }
            default: 
                printf("\nNumber of 200 notes remaining: %d\n", y );
  }    
  
  
     n100=10;
     
     y = n100 - calcule_monnaie(&w, 100 * 100);
        switch (c) {

           case 0:
               if(y<0)
                {
                
                printf("\n Rs 100 notes have finished: \n ");
                printf("Enter 0 to stop the program or 1 to refill:  \n");
                scanf("%d", &z);
                
                if(z==0){
                    exit(0);
                }
                else
                {
                    printf("Please enter the number of cash you want to insert: \n");
                    scanf("%d", &n100);
                    printf("\nNumber of 100 notes remaining: %d\n", n100);
                }
                
                break;
                
           
               
            
            }
            default: 
                printf("\nNumber of 200 notes remaining: %d\n", y );
  } 
  
     n50=10;
     
     y = n50 - calcule_monnaie(&w, 50 * 100);
        switch (c) {

           case 0:
               if(y<0)
                {
                
                printf("\n Rs 100 notes have finished: \n ");
                printf("Enter 0 to stop the program or 1 to refill:  \n");
                scanf("%d", &z);
                
                if(z==0){
                    exit(0);
                }
                else
                {
                    printf("Please enter the number of cash you want to insert: \n");
                    scanf("%d", &n50);
                    printf("\nNumber of 100 notes remaining: %d\n", n50);
                }
                
                break;
                
           
               
            
            }
            default: 
                printf("\nNumber of 50 notes remaining: %d\n", y );
  } 
  
  
  n25=10;
     
     y = n25 - calcule_monnaie(&w, 25 * 100);
        switch (c) {

           case 0:
               if(y<0)
                {
                
                printf("\n Rs 25 notes have finished: \n ");
                printf("Enter 0 to stop the program or 1 to refill:  \n");
                scanf("%d", &z);
                
                if(z==0){
                    exit(0);
                }
                else
                {
                    printf("Please enter the number of cash you want to insert: \n");
                    scanf("%d", &n25);
                    printf("\nNumber of 100 notes remaining: %d\n", n25);
                }
                
                break;
                
           
               
            
            }
            default: 
                printf("\nNumber of 25 notes remaining: %d\n", y );
  } 
  
  
  n20=10;
     
     y = n20 - calcule_monnaie(&w, 20 * 100);
        switch (c) {

           case 0:
               if(y<0)
                {
                
                printf("\n Rs 20 Coins have finished: \n ");
                printf("Enter 0 to stop the program or 1 to refill:  \n");
                scanf("%d", &z);
                
                if(z==0){
                    exit(0);
                }
                else
                {
                    printf("Please enter the number of cash you want to insert: \n");
                    scanf("%d", &n20);
                    printf("\nNumber of 100 notes remaining: %d\n", n20);
                }
                
                break;
                
           
               
            
            }
            default: 
                printf("\nNumber of  20 Coins remaining: %d\n", y );
  } 
  
  
    n10=10;
     
     y = n10 - calcule_monnaie(&w, 10 * 100);
        switch (c) {

           case 0:
               if(y<0)
                {
                
                printf("\n Rs 10 Coins have finished: \n ");
                printf("Enter 0 to stop the program or 1 to refill:  \n");
                scanf("%d", &z);
                
                if(z==0){
                    exit(0);
                }
                else
                {
                    printf("Please enter the number of cash you want to insert: \n");
                    scanf("%d", &n10);
                    printf("\nNumber of 100 notes remaining: %d\n", n10);
                }
                
                break;
                
           
               
            
            }
            default: 
                printf("\nNumber of  20 Coins remaining: %d\n", y );
  } 
  
      n5=10;
     
     y = n5 - calcule_monnaie(&w, 5 * 100);
        switch (c) {

           case 0:
               if(y<0)
                {
                
                printf("\n Rs 5 Coins have finished: \n ");
                printf("Enter 0 to stop the program or 1 to refill:  \n");
                scanf("%d", &z);
                
                if(z==0){
                    exit(0);
                }
                else
                {
                    printf("Please enter the number of cash you want to insert: \n");
                    scanf("%d", &n5);
                    printf("\nNumber of 100 notes remaining: %d\n", n5);
                }
                
                break;
                
           
               
            
            }
            default: 
                printf("\nNumber of  20 Coins remaining: %d\n", y );
  } 
  
    c1=10;
     
     y = c1 - calcule_monnaie(&w, 1 * 100);
        switch (c) {

           case 0:
               if(y<0)
                {
                
                printf("\n Rs 1 Coins have finished: \n ");
                printf("Enter 0 to stop the program or 1 to refill:  \n");
                scanf("%d", &z);
                
                if(z==0){
                    exit(0);
                }
                else
                {
                    printf("Please enter the number of coins you want to insert: \n");
                    scanf("%d", &c1);
                    printf("\nNumber of 1 Coins remaining: %d\n", c1);
                }
                
                break;
                
           
               
            
            }
            default: 
                printf("\nNumber of  1 Coins remaining: %d\n", y );
  } 
  
    c50c=10;
     
     y = c50c - calcule_monnaie(&w, 50);
        switch (c) {

           case 0:
               if(y<0)
                {
                
                printf("\n Rs 5 Cents have finished: \n ");
                printf("Enter 0 to stop the program or 1 to refill:  \n");
                scanf("%d", &z);
                
                if(z==0){
                    exit(0);
                }
                else
                {
                    printf("Please enter the number of coins you want to insert: \n");
                    scanf("%d", &c50c);
                    printf("\nNumber of 50 cents remaining: %d\n", c50c);
                }
                
                break;
                
           
               
            
            }
            default: 
                printf("\nNumber of  50 Cents remaining: %d\n", y );
  } 
  
  
  c20c=10;
     
     y = c20c - calcule_monnaie(&w, 20);
        switch (c) {

           case 0:
               if(y<0)
                {
                
                printf("\n Rs 20 Cents have finished: \n ");
                printf("Enter 0 to stop the program or 1 to refill:  \n");
                scanf("%d", &z);
                
                if(z==0){
                    exit(0);
                }
                else
                {
                    printf("Please enter the number of coins you want to insert: \n");
                    scanf("%d", &c20c);
                    printf("\nNumber of 20 cents remaining: %d\n", c20c);
                }
                
                break;
                
           
               
            
            }
            default: 
                printf("\nNumber of  20 Cents remaining: %d\n", y );
  } 
  
  
    c5c=10;
     
     y = c5c - calcule_monnaie(&w, 5);
        switch (c) {

           case 0:
               if(y<0)
                {
                
                printf("\n Rs 5 Cents have finished: \n ");
                printf("Enter 0 to stop the program or 1 to refill:  \n");
                scanf("%d", &z);
                
                if(z==0){
                    exit(0);
                }
                else
                {
                    printf("Please enter the number of coins you want to insert: \n");
                    scanf("%d", &c5c);
                    printf("\nNumber of 5 cents remaining: %d\n", c5c);


                }
                
                break;
                
           
               
            
            }
            default: 
                printf("\nNumber of  5 Cents remaining: %d\n", y );

              
  } 

  
    printf("\n");
    printf("Do you want to continue [y/n] : ");
    scanf("%s", &user_choice);

}while(user_choice=='y');
printf("\n ---- Thank You For Your Transaction ----- \n" );
  
    
    return 0;
}