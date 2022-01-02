#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int ssize;
    int esize;
    int years;
    int born;
    int pass;
    int total;
    int i;
    i = 0;
    do
    {

        ssize = get_int("Start size: ");

    }
    while (ssize <9);

    do
    {

        esize = get_int("End size: ");

    }
    while (esize < ssize);

    do
    {

        born = ssize / 3;
        pass = ssize / 4;
        ssize = ssize + born - pass;
        i = i + 1;

    }
    while (esize > ssize);

    printf("Years: %i \n", i);


