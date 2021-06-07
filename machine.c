#include <stdio.h>
/* A machine to get change --normal internal building mechanism*/
// Our currency consist of 10,20,50,100,500 
// 2000 is not included because people seeking for change will that only --lol

int get_amount(void);
void evaluating(int amount);

void main()
{
    printf("WELCOME TO CHANGE MACHINE \n");
    int amount = get_amount();
    evaluating(amount);

}

int get_amount()
{
    int amount;
    printf("Enter amount:");
    scanf("%d",&amount);
    return amount;
}


void evaluating(int amount)
{
    int quantity(int note, int amount);
    int Q_500,Q_200,Q_100,Q_50,Q_10;
    int Q_5,Q_2,Q_1;

    printf("THE MOST SUITABLE CHANGES ARE :");

    /* for notes */
    Q_500 = quantity(500,amount);
    (amount>=0 && amount/500) ?amount = amount-(500*Q_500):printf(" ");

    Q_200 = quantity(200,amount);
    (amount>=0 && amount/200) ?amount = amount-(200*Q_200):printf(" ");

    Q_100 = quantity(100,amount);
    (amount>=0 && amount/100) ?amount = amount-(100*Q_100):printf(" ");

    Q_50 = quantity(50,amount);
    (amount>=0 && amount/50) ?amount = amount-(50*Q_50):printf(" ");

    Q_10 = quantity(10,amount);
    (amount>=0 && amount/10) ?amount = amount-(10*Q_10):printf(" ");

    /* for coins */
    Q_5 = quantity(5,amount);
    (amount>=0 && amount/5) ?amount = amount-(5*Q_5):printf(" ");
    
    Q_2 = quantity(2,amount);
    (amount>=0 && amount/2) ?amount = amount-(2*Q_2):printf(" ");
    
    Q_1 = quantity(1,amount);
    (amount>=0 && amount/1) ?amount = amount-(1*Q_1):printf(" ");

    printf("\n500\t%d \n200\t%d \n100\t%d \n50\t%d \n10\t%d \n",Q_500,Q_200,Q_100,Q_50,Q_10);
    printf("5\t%d \n2\t%d \n1\t%d",Q_5,Q_2,Q_1);
    printf("WITHDRAWING!!!");

}

int quantity(int note, int amount)
{
    if(amount>0)   
    {
        int count;
        count = amount/note;
        return count;
    }
    else
    {
        return 0;
    }
}
