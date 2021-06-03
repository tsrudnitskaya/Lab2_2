#pragma once
#include <vector>
#include <string>
#include <ctime>
#include "functions.h"

int* dynamicArray;
int N = 0;
const int min = 0;
const int max = 99;
std::string filename = "E:\\!Univer\\Proga labs\\Lab2_2\\x64\\Debug\\numbers.txt";

struct listItem
{
	int data;
	listItem* prev;
	listItem* next;
};
listItem* list = 0;
int listN = 0;