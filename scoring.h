#ifndef SCORING_H
#define SCORING_H

#include "game.h"

int calculatePoints(int difficulty, int challengeType);

void updateStreak(PlayerStats *player, int correct);

void updateScore(PlayerStats *player, int points);

#endif