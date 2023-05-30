#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int genrt(int n)
{
    srand(time(NULL));
    return rand() % n;
}
const char *compchose(int a)
{
    if (a == 0)
    {
        return "Rock";
    }
    else if (a == 1)
    {
        return "Paper";
    }
    else
    {
        return "Scissor";
    }
}
const char *finaldis(char *ch, char *ch1)
{
    if (strcmp(ch, "Rock") == 0)
    {
        if (strcmp(ch, ch1) == 0)
        {
            return "Draw!!";
        }
        else if (strcmp(ch, ch1) > 0)
        {
            return "You lose 1 point";
        }
        else
        {
            return "You got 1 point";
        }
    }
    else if (strcmp(ch, "Paper") == 0)
    {
        if (strcmp(ch, ch1) == 0)
        {
            return "Draw!!";
        }
        else if (strcmp(ch, ch1) > 0)
        {
            return "You got 1 point";
        }
        else
        {
            return "You lose 1 point";
        }
    }
    else if (strcmp(ch, "Scissor") == 0)
    {
        if (strcmp(ch, ch1) == 0)
        {
            return "Draw!!";
        }
        else if (strcmp(ch, ch1) > 0)
        {
            return "You got 1 point";
        }
        else
        {
            return "You lose 1 point";
        }
    }
}
int main()
{
    int n, count = 0;
    char *c = malloc(20 * sizeof(char));
    char *c2 = malloc(20 * sizeof(char));
    while (1)
    {
        printf("\n1) Rock\n2) Paper\n3) Scissor\n4) Exit\nEnter what you want to choose: ");
        scanf("%d", &n);
        if (n == 1)
        {
            strcpy(c2, "Rock");
        }
        else if (n == 2)
        {
            strcpy(c2, "Paper");
        }
        else if (n == 3)
        {
            strcpy(c2, "Scissor");
        }
        else
        {
            printf("you obtained %d points\n", count);
            if (count == 0)
            {
                printf("DRAW");
            }
            else if (count > 0)
            {
                printf("You won");
            }
            else
            {
                printf("you lose");
            }
            getch();
            free(c2);
            free(c);
            exit(1);
        }
        switch (n)
        {
        case 1:
            strcpy(c, compchose(genrt(3)));
            printf("You choose %s\n", c2);
            printf("Computer chooses %s\n", c);
            printf("%s", finaldis(c2, c));
            if (strcmp(finaldis(c2, c), "You got 1 point") == 0)
            {
                count++;
                printf("\nYour point= %d", count);
            }
            else if (strcmp(finaldis(c2, c), "You lose 1 point") == 0)
            {
                count--;
                printf("\nYour point= %d", count);
            }
            else
            {
                printf("\nYour point= %d", count);
            }
            break;
        case 2:
            strcpy(c, compchose(genrt(3)));
            printf("You choose %s\n", c2);
            printf("Computer chooses %s\n", c);
            if (strcmp(c, "Rock") == 0)
            {
                strcpy(c, "AAAA");
            }
            printf("%s", finaldis(c2, c));
            if (strcmp(finaldis(c2, c), "You got 1 point") == 0)
            {
                count++;
                printf("\nYour point= %d", count);
            }
            else if (strcmp(finaldis(c2, c), "You lose 1 point") == 0)
            {
                count--;
                printf("\nYour point= %d", count);
            }
            else
            {
                printf("\nYour point= %d", count);
            }
            break;
        case 3:
            strcpy(c, compchose(genrt(3)));
            printf("You choose %s\n", c2);
            printf("Computer chooses %s\n", c);
            if (strcmp(c, "Rock") == 0)
            {
                strcpy(c, "ZZZZ");
            }
            printf("%s", finaldis(c2, c));
            if (strcmp(finaldis(c2, c), "You got 1 point") == 0)
            {
                count++;
                printf("\nYour point= %d", count);
            }
            else if (strcmp(finaldis(c2, c), "You lose 1 point") == 0)
            {
                count--;
                printf("\nYour point= %d", count);
            }
            else
            {
                printf("\nYour point= %d", count);
            }
            break;
        }
    }
    while(1);
    return 0;
}