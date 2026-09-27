#ifndef QUESTIONS_H
#define QUESTIONS_H

#define MAX_OPTIONS 4

typedef struct
{
    int id;
    char question[200];

    char category[50];
    int difficulty;

    char options[MAX_OPTIONS][100];
    int correctAnswer;

    char explanation[250];

} Question;

extern Question questionBank[];
extern int questionCount;

#endif

