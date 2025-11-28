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

//All the rules of the game
void GiveInstructions()
{
    printf("1) There will be a total of 10 questions. \n");
    printf("2) Every 3RD question will be a BONUS question(More difficult but will both reward and deduce more points) \n");
    printf("3) Every CORRECT answer to a NORMAL question will award 5 points \n");
    printf("4) Every CORRECT answer to a BONUS question will award 10 points \n");
    printf("5) Every INCORRECT answer to a NORMAL question will deduce 2 points \n");
    printf("6) Every INCORRECT answer to a BONUS question will deduce 4 points \n");
    printf("All the Best and have fun! \n");
}

//Start the game control
void StartGame()
{
    //Printing The option for either rules or to start the game
    printf("Welcome to The QUIZ GAME made my ARTH GUPTA AND TANISH BHADOLA \n");
    printf("Enter 1 For Rules \n");
    printf("Enter 2 to start the game! \n");

    int choice; //Variable to store choice by the user
    scanf("%d", &choice);
    
    //Switch case for either displaying the instructions(GiveInstruction() function) or start the game
    switch(choice)
    {
        case 1:
            GiveInstructions();
        break;
        case 2:
            printf("Best Of Luck!( You will need it ;-) ) \n");
        break;
        default:
            printf("Wrong Choice! Exiting \n");
        break;
    }
}

//Function to add score for each correct answer
void AssignScore(struct Question *qn)
{
    if(qn->isBonusQn)
    {
        qn->score = 10; //Qn for 10 marks if it is a bonus one(Every 3rd question will be a bonus)
    }
    else
    {
        qn->score = 5; //Qn for 5 marks if it is a normal one
    }
}

//Function to Check if the answer is correct or not
bool IsCorrectAnswer(struct Question *qn, int choice)
{
    //Check if the entered choide is the same as the correcty choice
    if(choice == qn->correctOption)
    {
        return true; //If yes then return true
    }

    return false; //If no, return false
}

//Function for calculating score(Increase for right answer, Decrease for wrong answer)
void ScoreSystem(struct Question *qn, int currentScore)
{
    int negativeScore = 2; //Negative score for normal qns
    int negativeScoreBonus = 4; //Negative score for bonus qns

    if(!IsCorrectAnswer && !qn->isBonusQn) //Wrong answer and not a bonus qn
    {
        currentScore -= negativeScore; //Decrease the currentScore by 2
    }
    else if(!IsCorrectAnswer && qn->isBonusQn) //Wrong answer for a bonus question
    {
        currentScore -= negativeScoreBonus; //Decrease the currentScore by 4
    }
    else //Only remaming condition is the correct answer
    {
        currentScore += qn->score; //Increase the current Score by the score assigned by the AssignScore function
    }
}

//Thinking about it ATM
void MultiplierSystem() 
{

}

//Thinking About Implementing It
void RandomBonusGenerator()
{

}

//Main Function
int main()
{

    //Display the instructions of the game
    StartGame();


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

    //Assigning every 3rd question as the bonus question
    que3.isBonusQn = true;
    
    que6.isBonusQn = true;

    que9.isBonusQn = true;

    //Assigning the scores to every question
    AssignScore(&que1);
    AssignScore(&que2);
    AssignScore(&que3);
    AssignScore(&que4);
    AssignScore(&que5);
    AssignScore(&que6);
    AssignScore(&que7);
    AssignScore(&que8);
    AssignScore(&que9);
    AssignScore(&que10);

    //Assigning the correct choice(Answer) to every question
    
    


    //Score System



    

    

    return 0;



}