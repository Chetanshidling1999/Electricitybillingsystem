#ifndef __MainElectricityBill_H__
#define __MainElectricityBill_H__

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>

struct ElectricBill
{
	char area[6];
	char name[15];
	int meternumber;
    int unitsconsumed;
	char email[15];
	char address[100];
	int phonenumber[10];
};

struct ElectricBill B;
#endif