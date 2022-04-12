#include <stdio.h>

int main(void) {
    int cusID, consume;
    float chrg, surchrg=0, grsamt, netamt;
    char c_name[30];

    printf("Input customer ID: ");
    scanf("%d", &cusID);

    printf("Customer Name: ");
    scanf("%s", &c_name[30]);

    printf("Enter the unit consumed by user: ");
    scanf("%d", &consume);


    if(consume<=75){
    chrg = 3.53;

    }
    else if(consume>=76 && consume<=200)
    {
    chrg = 5.01;
    }
    else if(consume>=201 && consume<=300)
    {
    chrg = 5.19;
    }
    else if(consume>=301 && consume<=400)
    {
    chrg = 5.42;
    }
    else if(consume>=401 && consume<=600)
    {
    chrg = 8.51;
    }
    else{
      chrg = 9.93;
    }

    grsamt = consume * chrg;

    if(grsamt>75){
      surchrg = grsamt *.15;
      netamt = grsamt + surchrg;
    }
    if(netamt < 100)
      {
        netamt = 100;
      }

      printf("Electricity Bill \n");
        printf("Customer ID NO                       : %d\n",cusID);
        printf("Customer Name                        : %s\n",c_name);
        printf("Unit consumed                        : %d\n",consume);
        printf("========================================================================\n");
        printf("Amount charges BDT  : %4.2f per unit  :%8.2f\n",chrg, grsamt);
        printf("Surcharge Amount                     : %8.2f\n",surchrg);
        printf("Net Amount paid by customer          : %8.2f\n",netamt);



  
  return 0;
}