#include <cs50.h>
#include <stdio.h>

void print_row(int n);


int main (void)
{
    int n;
    do
    {
       n = get_int("Height: ");
    }
    while(n<0 || n>8);
    print_row(n);


}









void print_row(int n)
{
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<n-i-1; j++)
        {
            printf(" ");
        }


        for (int k =0; k<=i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
