/* 
 * C Program to Display the ATM Transaction 
 */ 
#include<stdio.h> 
  
unsigned long amount=1000, deposit, withdraw; int choice, pin, k; char transaction ='y'; 
  
void main() 
{ 
while (pin != 1520) 
{ 
printf("ENTER YOUR SECRET PIN NUMBER:"); scanf("%d", &pin); if (pin != 1520) 
 
printf("PLEASE ENTER VALID PASSWORD\n"); 
} 
do 
{ 
printf("********Welcome to ATM Service*********\n"); printf("1. Check Balance\n"); printf("2. Withdraw Cash\n"); printf("3. Deposit Cash\n"); printf("4. Quit\n"); 
 
printf("**********************************\n\n"); 
 
printf("Enter your choice: "); 
 	 
scanf("%d", &choice); switch (choice) 
{ 
 
case 1: 
printf("\n YOUR BALANCE IN Rs : %lu ", amount); break; 
 
case 2: 
printf("\n ENTER THE AMOUNT TO WITHDRAW: "); scanf("%lu", &withdraw); if (withdraw % 100 != 0) 
{ 
 	 
printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100"); 
} 
else if (withdraw > (amount - 500)) 
{ 
printf("\n INSUFFICENT BALANCE"); 
} 
else 
{ 
amount = amount - withdraw; printf("\n\n PLEASE COLLECT CASH"); printf("\n YOUR CURRENT BALANCE IS%lu", amount); 
} 
break; 
 	 
case 3: 
printf("\n ENTER THE AMOUNT TO DEPOSIT"); scanf("%lu", &deposit); amount = amount + deposit; printf("YOUR BALANCE IS %lu", amount); break; 
 
case 4: 
printf("\n THANK U USING ATM"); break; default: 
printf("\n INVALID CHOICE"); 
} 
printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n"); 
 	 
fflush(stdin); scanf("%c", &transaction); if (transaction == 'n'|| transaction == 'N')  k = 1; 
}  
 
while (!k); 
printf("\n\n THANKS FOR USING OUT ATM SERVICE"); 
} 
 


/*
SAMPLE OUTPUT (Run this in terminal or command prompt)
ENTER YOUR SECRET PIN NUMBER:1513 PLEASE ENTER VALID PASSWORD 
ENTER YOUR SECRET PIN NUMBER:1520 
********WELCOME TO ATM SERVICE*********
1.	ChECk BALANCE 
2.	WIThDRAW CASh 
3.	DEPOSIT CASh 
4.	QUIT 
********************************************* 
 
ENTER YOUR ChOICE: 2 
ENTER ThE AMOUNT TO WIThDRAW: 1500 
INSUFFICENT BALANCE 
 
 
 DO U WISh TO hAVE ANOThER TRANSCATION?(Y/N):  
********WELCOME TO ATM SERVICE********
1.	ChECk BALANCE 
2.	WIThDRAW CASh 
3.	DEPOSIT CASh 
4.	QUIT 
********************************************* 
 
ENTER YOUR ChOICE: 4 
ThANk U USING ATM 
 	 
2) 
ENTER YOUR SECRET PIN NUMBER:1520 
********WELCOME TO ATM SERVICE*********
1.	ChECk BALANCE 
2.	WIThDRAW CASh 
3.	DEPOSIT CASh 
4.	QUIT 
********************************************* 
 
ENTER YOUR ChOICE: 1 
YOUR BALANCE IN RS : 1000  
 
 
 DO U WISh TO hAVE ANOThER TRANSCATION?(Y/N):  ********WELCOME TO ATM SERVICE******** 
1.	ChECk BALANCE 
2.	WIThDRAW CASh 
3.	DEPOSIT CASh 
4.	QUIT 
********************************************* 
 
ENTER YOUR ChOICE: 4 
ThANk U USING ATM 

*/