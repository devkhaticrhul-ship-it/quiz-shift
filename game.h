#ifndef GAME_H
#define GAME_H

typedef struct
{
    char playerName[50];

    int score;

    int totalQuestions;
    int correctAnswers;
    int incorrectAnswers;

    int currentStreak;
    int bestStreak;

    int riskChoices;
    int riskSuccesses;

    int memoryQuestions;
    int memoryCorrect;

    int speedQuestions;
    int speedCorrect;

} PlayerStats;

void initializePlayer(PlayerStats *player);

void startGame(PlayerStats *player);

#endif