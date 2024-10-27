#include "stdio.h"
#include "stdlib.h"

void RPS(int);
int main()
{
    int ch1, de = 0, ch2;
    while (de == 0)
    {
        printf("1.Play\n2.Exit\n");
        scanf("%d", &ch1);
        if (ch1 == 1)
        {
            printf("1.Rock\t2.Paper\t3.Scissor\n");
            scanf("%d", &ch2);
            RPS(ch2);
            de = 0;
        }
        else if (ch1 == 2)
            de++;
        else
        {
            printf("Invalid choice\n");
            de = 0;
        }
    }
}
void RPS(int ch)
{
    int num;
    num = rand() % 3 + 1;
    if (ch == 1 && num == 1)
    {
        printf("Your choice: Rock\nComputer choice: Rock\nResult: TIE\n");
    }
    if (ch == 1 && num == 2)
    {
        printf("Your choice: Rock\nComputer choice: paper\nResult: LOSE\n");
    }
    if (ch == 1 && num == 3)
    {
        printf("Your choice: Rock\nComputer choice: scissor\nResult: WIN\n");
    }
    if (ch == 2 && num == 1)
    {
        printf("Your choice: Paper\nComputer choice: Rock\nResult: WIN\n");
    }
    if (ch == 2 && num == 2)
    {
        printf("Your choice: Paper\nComputer choice: Paper\nResult: TIE\n");
    }
    if (ch == 2 && num == 3)
    {
        printf("Your choice: Paper\nComputer choice: Scissor\nResult: LOSE\n");
    }
    if (ch == 3 && num == 1)
    {
        printf("Your choice: Scissor\nComputer choice: Rock\nResult: LOSE\n");
    }
    if (ch == 3 && num == 2)
    {
        printf("Your choice: Scissor\nComputer choice: Paper\nResult: WIN\n");
    }
    if (ch == 3 && num == 3)
    {
        printf("Your choice: Scissor\nComputer choice: Scissor\nResult: TIE\n");
    }
}