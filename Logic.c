#include <stdio.h>
#include <stdbool.h>

//Declaring the structure
struct Question
{
    char question[200];
    int score;
    bool isBonusQn;
    int correctOption;
};

//Function to add score for each correct answer
void AssignScore(struct Question qn)
{

    if(qn.isBonusQn)
    {
        qn.score = 10; //Qn for 10 marks if it is a bonus one(Every 3rd question will be a bonus)
    }
    else
    {
        qn.score = 5; //Qn for 5 marks if it is a normal one
    }
}

//Function to Check if the answer is correct or not
bool IsCorrectAnswer(struct Question qn, int choice)
{
    //Check if the entered choide is the same as the correcty choice
    if(choice == qn.correctOption)
    {
        return true; //If yes then return true
    }

    return false; //If no, return false
}

//Function for calculating score(Increase for right answer, Decrease for wrong answer)
void ScoreSystem(struct Question qn, int currentScore)
{
    int negativeScore = 2; //Negative score for normal qns
    int negativeScoreBonus = 4; //Negative score for bonus qns

    if(!IsCorrectAnswer && !qn.isBonusQn) //Wrong answer and not a bonus qn
    {
        currentScore -= negativeScore; //Decrease the currentScore by 2
    }
    else if(!IsCorrectAnswer && qn.isBonusQn) //Wrong answer for a bonus question
    {
        currentScore -= negativeScoreBonus; //Decrease the currentScore by 4
    }
    else //Only remaming condition is the correct answer
    {
        currentScore += qn.score; //Increase the current Score by the score assigned by the AssignScore function
    }
}



int main()
{
    //Initializing 10 different question structures
    struct Question que1;
    struct Question que2;   
    struct Question que3;   
    struct Question que4;   
    struct Question que5;   
    struct Question que6;   
    struct Question que7;   
    struct Question que8;   
    struct Question que9;   
    struct Question que10;   

    

}