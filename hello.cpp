/*
File: main.cpp
Author: gavrun
Created on 1/31/2021 12:36:41 PM
*/

#include <stdio.h>

using namespace std;

int main()
{
    char name[4]; 
    printf("Hello user! What is your name? \n");
    scanf("%s",&name);
    printf("Hello %s! How can I help you? \n",name);
    return 0;
}
