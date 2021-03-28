Project Title

Cash Register
Achievement

The goals of this project work is to calculate the change and to determine which mauritian Banknotes and coins to return to the user. Secondly ,The program should also be able to alert the user the state of the stocks for each transaction.
Collaborators

    Adrien Esther
    Akash Gooljar

Getting started

Before we started, we cloned the project work to local in our terminal.

git clone https://github.com/Adrien2305/Caisse_Enregistreuse_AkashGooljar_AdrienEsther.git
cd Caisse_Enregistreuse_AkashGooljar_AdrienEsther

Now , we have created a branch name dev and CAISSE

git branch dev
git branch CAISSE

The first program will be generated in the branch CAISSE. so , we will switch to the branch CAISSE by using the function:

git checkout CAISSE

Running the first test
Step 1:

The first script will generate a random number that the user will have to pay. The user will enter a number and if the number is less than he owes, the program will alert it to the user and will ask him to enter a new digit value again.

Here is the first code:

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

In order to execute the script , we need to write :

gcc -o caisse caisse.c
./caisse

After we created the code, we need to add the modified files for the next commit:

git add .

Make a commit of the files :

git commit -m "[CAISSE]-Premier modification"

Create a tag v0.1:

git tag v0.1

Push the tag on the server :

git push origin tag v0.1

Then finally push the file on the server :

git push origin CAISSE

Step 2:

Now the next step is to calcule the amount to return by using a function:

float amt, total, num, generated, change, amt_ret;
amt_ret = amt - num;
        printf("Amount to return = %f \n",amt_ret);

Step 3:

We need to determine which banknotes or coins to be returned to the user,the higher coins and notes will be entitle. But before proceeding, we switched to the branch dev:

git checkout dev

Now we create the code ;

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
    int b2000,n2000, n1000, n500, n200, n100, n50, n25, n20, n10, n5, n1,n50c,n20c,n5c,z;
    srand(time(0));

    amount =rand() % 10000 ;
    amount = amount/10;

    printf(" Enter the amount that you need to pay :%lf\n",amount);

@@ -36,23 +44,506 @@ int main()

    }

    tot_amt = amt_money - amount;
        tot_amt = amt_money - amount;

    int x = (int)(tot_amt * 100.0 + 0.5);

        int x = (int)(tot_amt * 100.0 + 0.5);
        printf("No. of Rs1000 bill: %d\n", calcule_monnaie(&x, 2000 * 100) );
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

In order to execute the script , we need to write :

gcc -o caisse caisse.c
./caisse

After created the code, we need to add the modified files for the next commit:

git add .

Make a commit of the files :

git commit -m "[dev]-modification pour remplir la caisse"

Create the tag v0.2:

git tag v0.2

Push the tag on the server:

git push origin tag v0.2

Then finally push the file on the server :

git push origin dev

Step 4:

Now we will will consider that we have a limited amount of coins and notes into the cash register, so for each transaction the user make , the program will be able to indicate the state of the stocks.

double amount,amt_money,tot_amt;
    int n2000, n1000, n500, n200, n100, n50, n25, n20, n10, n5, n1,n50c,n20c,n5c,z;
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
                    printf("Inserer le nombre de billets svp: \n");
                    printf("Please enter the number of cash you want to insert: \n");
                    scanf("%d", &n2000);
                    printf("\nNumber of 2000 notes remaining: %d\n", n2000);

                }
                
                break;
                
           
               
            
            }
        
            default: 
                printf("\nNumber of 2000 notes remaining: %d\n", y );
        
        }

Explanation of the code:

    The program will first execute the code into the 'do while loop' in order to calculate the amount to return to the user then will continue into the 'while loop' and the 'swicth case' so as to determine the state of the stocks of banknotes and coins remaining.

After created the code, we need to add the modified files for the next commit:

git add .

Make a commit of the files :

git commit -m "[dev]-modification pour fermer la caisse ou continu"

Create the tag v0.3:

git tag v0.3

Push the tag on the server:

git push origin tag v0.3

Then finally push the file on the server :

git push origin dev