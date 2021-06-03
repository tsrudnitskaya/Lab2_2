#pragma once
#include <vector>
#include <string>
#include <ctime>
#include "functions.h"

int* dynamicArray;
int N = 0;
const int min = 0;
const int max = 99;
std::string filename = "";

struct listItem
{
	int data;
	listItem* prev;
	listItem* next;
};
listItem* list = 0;
int listN = 0;