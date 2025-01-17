#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int T = 1, K = 2, M = 3, i, Player = 0, Computer = 0, selection;
    srand(time(NULL));
    printf("Tas=1 , Paper=2, and Scissors=3 ");
    for(i=0;i<5;i++)
    {
        printf("Enter Your Selection:");
        scanf("%d",&selection);
        int computer = rand()%3+1;
        if(selection==1)
        {
            if(computer==1)
            {
                printf("It's a Draw");
            }
            else if(computer==2)
            {
                printf("Computer Won ");
                computer= computer + 1;
            }
            else if(computer==3)
            {
                printf("Player Won ");
                Player = Player + 1;
            }
            else
            {
                printf("Hatalı birşeyler var...");
            }
        }
        else if(selection==2)
        {
            if(computer==2)
            {
                printf("It's a Draw");
            }
            else if(computer==3)
            {
                printf("Player Won ");
                Player = Player + 1;
            }
            else if(computer==1)
            {
                printf("Computer Won ");
                Computer= Computer + 1;
            }
            else
            {
                printf("Hatalı birşeyler var...");
            }
        }
        else if(selection==3)
        {
            if(computer==3)
            {
                printf("Drawn");
            }
            else if(computer==2)
            {
                printf("Computer Won ");
                Computer= Computer + 1;
            }
            else if(computer==1)
            {
                printf("Player Won ");
                Player = Player + 1;
            }
            else
            {
                printf("Hatalı birşeyler var...");
            }
        }
        else
        {
            printf("You Entered Incorrectly ");
        }
        
        if(Computer > Player )
        {
            printf("Computer Won %d to %dn",Computer,Player);
        }
        else if(Computer < Player )
        {
            printf("Player Won %d to %dn",Player,Computer);
        }
        else if(Computer == Player )
        {
            printf("No Winner No Draw");
        }
    }
return 0;
}