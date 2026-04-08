#include <stdio.h>
int main() {

float initial_amt=50000.00;
int n,withdraw,updated_amt,deposit,pin;
int correct_pin=3246 , max_attempts=3 ,attempts=0;

printf("1.Check Balance\n");
printf("2.Withdrawl\n");
printf("3.Deposit\n");
printf("4.Exit\n");


printf("Enter the choice:");
scanf("%d",&n);

printf("Enter the ATM pin:");
scanf("%d",&pin);

if (pin==correct_pin){

    switch(n){
        case 1:
            printf("Initial Amount = %f",initial_amt);
            break;
        case 2:
            printf("Enter the amount to withdraw:",withdraw);
            scanf("%d",&withdraw);
            if (withdraw>initial_amt){
                printf("Balance Insufficient");
            }
            else{
                printf("Withdraw Successful\n");
                updated_amt=initial_amt-withdraw;
                printf("Updated Amount = %d",updated_amt);
            
            }
            break;
    case 3:
        printf("Enter the amount to deposit:",deposit);
        scanf("%d",&deposit);
        updated_amt=initial_amt+deposit;
        printf("Deposit Successful\n");
        printf("Updated Amount = %d",updated_amt);
        break;
    case 4:
        printf("Thanks for Visiting Us");
        break;
    
    default:
        printf("Invalid Choice\n");
        break;

        
    }

    }
else {
    while (attempts<max_attempts && pin!=correct_pin){
        attempts++;
        printf("Incorrect PIN Entered !\n");
        printf("Number of attempts left:%d\n",max_attempts-attempts);
        printf("Enter the PIN again:");
        scanf("%d",&pin);
    }
    
    if (pin!=correct_pin){
        printf("Incorrect PIN is entered !\n");
        printf("Maximum attempt limit reached\n");
        printf("CARD BLOCKED\n");
        printf("Visit nearest Branch");
    }
    
}

return 0;   
}
