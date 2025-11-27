#include <stdio.h>
#include <stdbool.h>

//Declaring the structure
struct Question
{
    char question[200];
    int score;
    bool isCorrect;
    bool isBonusQn;
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