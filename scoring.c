#include "scoring.h"

int calculatePoints(int difficulty, int challengeType)
{
    int points = 100;

    /*
       Challenge Types:
       1 = Normal
       2 = Risk x2
       3 = Risk x3
       4 = Memory
       5 = Speed
    */

    if (difficulty == 2)
    {
        points += 50;
    }
    else if (difficulty == 3)
    {
        points += 100;
    }

    if (challengeType == 2)
    {
        points *= 2;
    }
    else if (challengeType == 3)
    {
        points *= 3;
    }
    else if (challengeType == 4)
    {
        points += 50;
    }
    else if (challengeType == 5)
    {
        points += 50;
    }

    return points;
}

void updateStreak(PlayerStats *player, int correct)
{
    if (correct)
    {
        player->currentStreak++;

        if (player->currentStreak > player->bestStreak)
        {
            player->bestStreak = player->currentStreak;
        }
    }
    else
    {
        player->currentStreak = 0;
    }
}

void updateScore(PlayerStats *player, int points)
{
    player->score += points;
}