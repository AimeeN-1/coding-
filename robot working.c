/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
        
int input;
int input2;
int input3;
int input4;
int input5;
int input6;
int input7;
float robots [4][4]={{4.5,5.6,12.7,495.99},{5.6,8.9,8.2,599.95},{2.1,14.6,6.5,399.95},{7.9,6.4,3.4,749.65}};
while(1){
printf("Robot1 speed:%.2f weight:%.2f max speed:%.2f price:£%.2f\r\n",robots[0][0],robots[0][1],robots[0][2],robots[0][3]);
printf("Robot2 speed:%.2f weight:%.2f max speed:%.2f price:£%.2f\r\n",robots[1][0],robots[1][1],robots[1][2],robots[1][3]);
printf("Robot3 speed:%.2f weight:%.2f max speed:%.2f price:£%.2f\r\n",robots[2][0],robots[2][1],robots[2][2],robots[2][3]);
printf("Robot4 speed:%.2f weight:%.2f max speed:%.2f price:£%.2f\r\n",robots[3][0],robots[3][1],robots[3][2],robots[3][3]);
printf("\r\n\ntype '1' for robot 1 '2' for robot 2 '3' for robot3 '4' for robot4 \r\n");
scanf("%d", &input);

{
if(input==1)
printf("Robot 1 speed:%.2f weight:%.2f max run time:%.2f price:£%.2f\r\n",robots[0][0],robots[0][1],robots[0][2],robots[0][3]);}

if(input==2){
printf("Robot 2 speed:%.2f weight:%.2f max run time:%.2f price:£%.2f\r\n",robots[1][0],robots[1][1],robots[1][2],robots[1][3]);}

if(input==3){
printf("Robot 3 speed:%.2f weight:%.2f max run time:%.2f price:£%.2f\r\n",robots[2][0],robots[2][1],robots[2][2],robots[2][3]);}

if(input==4){
printf("Robot 4 speed:%.2f weight:%.2f max run time:%.2f price:£%.2f\r\n",robots[3][0],robots[3][1],robots[3][2],robots[3][3]);}

if(input==1){
printf("\r\ntype 1 for speed 2 for weight 3 for max speed 4 for price\r\n");
scanf("%d",&input4);
printf("enter the new value\r\n"); 
if(input4==1){
scanf("%f",&robots[0][0]);
printf("the speed is now %.2f\r\n", robots[0][0]);}
else if(input4==2){
scanf("%f",&robots[0][1]);
printf("the weight is now %.2f\r\n",robots[0][1]);}
else if(input4==3){
scanf("%f",&robots[0][2]);
printf("the max speed is now %.2f\r\n",robots[0][2]);}
else if(input4==4){
scanf("%f",&robots[0][3]);
printf("the price is now £%.2f\r\n",robots[0][3]);}
}

 if(input==2){
printf("\r\ntype 1 for speed 2 for weight 3 for max speed 4 for price\r\n");
scanf("%d",&input5);
printf("enter the new value\r\n"); 

if(input5==1){
scanf("%f",&robots[1][0]);
printf("the speed is now %.2f\r\n", robots[1][0]);}
else if(input5==2){
scanf("%f",&robots[1][1]);
printf("the weight is now %.2f\r\n",robots[1][1]);}
else if(input5==3){
scanf("%f",&robots[1][2]);
printf("the max speed is now %.2f\r\n",robots[1][2]);}
else if(input5==4){
scanf("%f",&robots[1][3]);
printf("the price is now £%.2f\r\n",robots[1][3]);} 
}
    
 if(input==3){
printf("\r\ntype 1 for speed 2 for weight 3 for max speed 4 for price\r\n");
scanf("%d",&input6);
printf("enter the new value\r\n");

if(input6==1){
scanf("%f",&robots[2][0]);
printf("the speed is now %.2f\r\n", robots[2][0]);}
else if(input6==2){
scanf("%f",&robots[2][1]);
printf("the weight is now %.2f\r\n",robots[2][1]);}
else if(input6==3){
scanf("%f",&robots[2][2]);
printf("the max speed is now %.2f\r\n",robots[2][2]);}
else if(input6==4){
scanf("%f",&robots[2][3]);
printf("the price is now £%.2f\r\n",robots[2][3]);} 
}

if(input==4){
printf("\r\ntype 1 for speed 2 for weight 3 for max speed 4 for price\r\n");
scanf("%d",&input7);
printf("enter the new value\r\n");

if(input7==1){
scanf("%f",&robots[3][0]);
printf("the speed is now %.2f\r\n", robots[3][0]);}
else if(input7==2){
scanf("%f",&robots[3][1]);
printf("the weight is now %.2f\r\n",robots[3][1]);}
else if(input7==3){
scanf("%f",&robots[3][2]);
printf("the max speed is now %.2f\r\n",robots[3][2]);}
else if(input7==4){
scanf("%f",&robots[3][3]);
printf("the price is now £%.2f\r\n",robots[3][3]);} 
}

    
}
}
