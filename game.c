#include <stdio.h>
#include "game.h"
#include "questions.h"
#include "scoring.h"

void initializePlayer(PlayerStats *player)
{
    player->score = 0;

    player->totalQuestions = 0;
    player->correctAnswers = 0;
    player->incorrectAnswers = 0;

    player->currentStreak = 0;
    player->bestStreak = 0;

    player->riskChoices = 0;
    player->riskSuccesses = 0;

    player->memoryQuestions = 0;
    player->memoryCorrect = 0;

    player->speedQuestions = 0;
    player->speedCorrect = 0;
}

void startGame(PlayerStats *player)
{
    int answer;
    int i;
    int option;
    int points;

    initializePlayer(player);

    printf("\n========================================\n");
    printf("              QUIZ//SHIFT\n");
    printf("========================================\n");

    printf("\nEnter your name: ");
    scanf(" %49[^\n]", player->playerName);

    printf("\nWelcome, %s!\n", player->playerName);
    printf("Get ready. The rules will change later...\n");

    printf("\n========================================\n");
    printf("             NORMAL ROUND\n");
    printf("========================================\n");

    for (i = 0; i < questionCount; i++)
    {
        printf("\n----------------------------------------\n");
        printf("Question %d of %d\n", i + 1, questionCount);
        printf("----------------------------------------\n");

        printf("Category   : %s\n", questionBank[i].category);

        printf("Difficulty : ");

        if (questionBank[i].difficulty == 1)
        {
            printf("Easy\n");
        }
        else if (questionBank[i].difficulty == 2)
        {
            printf("Medium\n");
        }
        else
        {
            printf("Hard\n");
        }

        printf("\n%s\n\n", questionBank[i].question);

        for (option = 0; option < 4; option++)
        {
            printf("%d. %s\n",
                   option + 1,
                   questionBank[i].options[option]);
        }

        printf("\nEnter your answer (1-4): ");
        scanf("%d", &answer);

        player->totalQuestions++;

        if (answer == questionBank[i].correctAnswer)
        {
            player->correctAnswers++;

            points = calculatePoints(
                questionBank[i].difficulty,
                1
            );

            updateScore(player, points);
            updateStreak(player, 1);

            printf("\nCORRECT!\n");
            printf("+%d points\n", points);
            printf("Current Streak: %d\n",
                   player->currentStreak);
        }
        else
        {
            player->incorrectAnswers++;

            updateStreak(player, 0);

            printf("\nWRONG!\n");

            if (answer >= 1 && answer <= 4)
            {
                printf("Correct answer: %s\n",
                       questionBank[i].options[
                           questionBank[i].correctAnswer - 1
                       ]);
            }
            else
            {
                printf("Invalid option selected.\n");
                printf("Correct answer: %s\n",
                       questionBank[i].options[
                           questionBank[i].correctAnswer - 1
                       ]);
            }
        }

        printf("\nExplanation: %s\n",
               questionBank[i].explanation);

        printf("\n----------------------------------------\n");
        printf("Score        : %d\n", player->score);
        printf("Correct      : %d\n", player->correctAnswers);
        printf("Incorrect    : %d\n", player->incorrectAnswers);
        printf("Current Streak: %d\n", player->currentStreak);
        printf("Best Streak  : %d\n", player->bestStreak);
        printf("----------------------------------------\n");
    }

    printf("\n========================================\n");
    printf("             ROUND COMPLETE\n");
    printf("========================================\n");

    printf("Player       : %s\n", player->playerName);
    printf("Final Score  : %d\n", player->score);
    printf("Questions    : %d\n", player->totalQuestions);
    printf("Correct      : %d\n", player->correctAnswers);
    printf("Incorrect    : %d\n", player->incorrectAnswers);
    printf("Best Streak  : %d\n", player->bestStreak);

    printf("\n========================================\n");
    printf("        MORE CHALLENGES COMING...\n");
    printf("========================================\n");
}