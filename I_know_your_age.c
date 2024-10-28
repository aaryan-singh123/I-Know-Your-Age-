#include<stdio.h>
void main()
{
printf("\t\t\t\t -I KNOW YOUR AGE-\t\t\t\t");
printf("\n\n");

int start,user_no,n;

printf("1)Enter a number 1 to start.\n");
printf("2)Enter a number 2 to exit.\n");
scanf("%d",&start);
if(start==1){

        printf("I Know Your Age!!");
        printf("\nDon't Believe ?");
        printf("\n Ok, Than Play a game");
        printf("\n\t\t**let start**.\n");
        printf("\n*Open a calculator OR Take pen & paper.");
   }
else if (start==2){
    printf("\tThank you - Game is over.\n");
    printf("\n\n\t\t\t\t********** DEVELOPED BY AS **********\n\n");
}
else{
    printf("\t\t**Invalid Input**\n\n");
}
printf("\nTo go to the step-1 enter 1: ");
scanf("%d",&n);
printf("\n");

if(n==1){
printf("Step 1:\n");
printf("Multiply with 5, your 1st digit of age.\n\t Example: If your age is 24,1st digit is 2, and 2nd Digit 4, then 2*5=10.\n if your age is less than 10,suppose 7,it means 07,than you have to multiply 0*5=0.\n\n");
}

printf("\nTo go to the step-2 enter 2 : ");
scanf("%d",&n);
printf("\n");

if(n==2){
printf("Step 2:\n");
printf("Now add 4 with the result.\n Example:10+4=14.\n\n");
}

printf("\nTo go to the step-3 enter 3 : ");
scanf("%d",&n);
printf("\n");

if(n==3){
printf("Step 3:\n");
printf("Now, Double the result of step 2.\n Example:14*2=28.\n\n");
}

printf("\nTo go to the step-4 enter 4 : ");
scanf("%d",&n);
printf("\n");

if(n==4){
printf("Step 4:\n");
printf("Now, Add 2nd Digit of your age.\n Example:28+4=32.\n\n");
}

printf("\nTo go to the step-5 enter 5 : ");
scanf("%d",&n);
printf("\n");

if(n==5){
printf("Step 5:\n");
printf("Now, Subtract 8 from the result of step 3.\n Example:32-8=24.\n\n");
}

printf("Congratulations this is your age\n");
printf("I told you I know your age and I took it out\n\n");
printf("\tThank you - Game is over.\n");
    printf("\n\n\t\t\t\t********** DEVELOPED BY AS **********\n\n");



}















