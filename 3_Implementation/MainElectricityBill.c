#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>
#include "MainElectricityBill.h"
#include "ElectricityBill.h"
void Urban();
void Rural();
void main()
{ 
	details();
	int option;
	do
	{
		printf("****Electricity Bill****\n");
		printf("Please enter your choice from below (1-2):\n");
		printf("1. Urban\n");
		printf("2. Rural\n");
		printf("3. EXIT\n");
		printf("Electricity Board Helpline: 8435 2340\n");
		printf("Enter your choice :\n");
		scanf("%d", &option);
		system("cls");
		switch (option)
		{
		case 1:
			Urban();
			break;
		case 2:
			Rural();
			break;
		default:
			printf("SORRY INVALID CHOICE!\n");
			printf("PLEASE CHOOSE FROM 1 or 2\n");
		}
		getch();
	} while (option != 3);
}