#include <stdio.h>
#include "game.h"

int main()
{
    int choice;
    PlayerStats player;

    printf("========================================\n");
    printf("              QUIZ//SHIFT\n");
    printf("       THE QUIZ THAT CHANGES RULES\n");
    printf("========================================\n");

    do
    {
        printf("\n");
        printf("========== MAIN MENU ==========\n");
        printf("1. Start Game\n");
        printf("2. Rules\n");
        printf("3. Knowledge Profile\n");
        printf("4. High Scores\n");
        printf("5. Exit\n");
        printf("===============================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                startGame(&player);
                break;

            case 2:
                printf("\n--------------------------------\n");
                printf("             RULES\n");
                printf("--------------------------------\n");
                printf("Rules module will be connected here.\n");
                break;

            case 3:
                printf("\n--------------------------------\n");
                printf("       KNOWLEDGE PROFILE\n");
                printf("--------------------------------\n");
                printf("Profile module will be connected here.\n");
                break;

            case 4:
                printf("\n--------------------------------\n");
                printf("          HIGH SCORES\n");
                printf("--------------------------------\n");
                printf("High-score module will be connected here.\n");
                break;

            case 5:
                printf("\n========================================\n");
                printf("     Thanks for playing QUIZ//SHIFT!\n");
                printf("========================================\n");
                break;

            default:
                printf("\nInvalid choice.\n");
                printf("Please select an available option.\n");
        }

    } while (choice != 5);

    return 0;
}