#include <stdio.h>
#include <stdbool.h>
#include <string.h>

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
    printf("\n");
}

//Start the game control
void StartGame()
{
    //Printing The option for either rules or to start the game
    printf("Welcome to The QUIZ GAME made my ARTH GUPTA AND TANISH BHADOLA \n");
    printf("Enter 1 For Rules \n");
    printf("Enter 2 to start the game! \n");
    printf("\n");

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
            printf("\n");
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
bool IsCorrectAnswer(struct Question *qn, int option)
{
    //Check if the entered choide is the same as the correcty choice
    if(option == qn->correctOption)
    {
        return true; //If yes then return true
    }

    return false; //If no, return false
}

//Function for calculating score(Increase for right answer, Decrease for wrong answer)
/*void CalculateScore(struct Question *qn, int currentScore)
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
}*/

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
    que1.isBonusQn = false;
    que2.isBonusQn = false;
    que3.isBonusQn = true;
    que4.isBonusQn = false;
    que5.isBonusQn = false;
    que6.isBonusQn = true;
    que7.isBonusQn = false;
    que8.isBonusQn = false;
    que9.isBonusQn = true;
    que10.isBonusQn = false;

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
    
    //FOR TANISH
    //MAKE THE CORRECT OPTION OF THE QUESTION THE SAME AS THIS
    que1.correctOption = 1;
    que2.correctOption = 3;
    que3.correctOption = 2;
    que4.correctOption = 4;
    que5.correctOption = 1;
    que6.correctOption = 4;
    que7.correctOption = 3;
    que8.correctOption = 4;
    que9.correctOption = 2;
    que10.correctOption = 1;
    //MAKE THE CORRECT OPTION SAME AS THIS

    //Assigning The Questions

    //FOR TANISH
    //JUST ADD ALL THE QUESTIONS HERE(WITHIN THE DOUBLE QUOTES)
    strcpy(que1.question, "What is 1 + 2"); //Q1
    strcpy(que2.question, "What is 1 + 2"); //Q2
    strcpy(que3.question, "What is 1 + 2"); //Q3
    strcpy(que4.question, "What is 1 + 2"); //Q4
    strcpy(que5.question, "What is 1 + 2"); //Q5
    strcpy(que6.question, "What is 1 + 2"); //Q6
    strcpy(que7.question, "What is 1 + 2"); //Q7
    strcpy(que8.question, "What is 1 + 2"); //Q8
    strcpy(que9.question, "What is 1 + 2"); //Q9
    strcpy(que10.question, "What is 1 + 2"); //Q10
    //ADD ALL THE QUESTIONS

    int points = 0; //Calculate the points
    int choice = 0; //Choice Entered By The User
    int negNor = 2; //Negative Marks for a wrong answer to a normal question
    int negBon = 4; //Negative Marks for a wrong answer to a bonus question
  
    //FOR TANISH
    //JUST CHANGE THE CORRECT AND INCORRECT OPTIONS HERE(ELSE ALL LOGIC IS WORKING)
    //REMEMBER THE CORRECT WILL BE ONE AS ASSIGNED BEFORE
    //Question 1
    printf("Q1) %s\n", que1.question);
    printf("1) 3 \n");
    printf("2) 5 \n");
    printf("3) 7 \n");
    printf("4) 9 \n");
    printf("Enter Your Choice: \n");
    scanf("%d", &choice);
    bool ans1 = IsCorrectAnswer(&que1, choice);
    
    if(ans1)
    {
        printf("Well Done! Correct Answer \n");
        points += que1.score;
    }
    else
    {
        printf("OOF! That's the wrong answer \n");
        points -= negNor;
    }

    printf("Total Points: %d \n", points);

    printf("\n");


    //Question 2
    printf("Q2) %s\n", que2.question);
    printf("1) 7 \n");
    printf("2) 5 \n");
    printf("3) 3 \n");
    printf("4) 9 \n");
    printf("Enter Your Choice: \n");
    scanf("%d", &choice);
    bool ans2 = IsCorrectAnswer(&que2, choice);
    
    if(ans2)
    {
        printf("Well Done! Correct Answer \n");
        points += que2.score;
    }
    else
    {
        printf("OOF! That's the wrong answer \n");
        points -= negNor;
    }

    printf("Total Points: %d \n", points);

    printf("\n");

    //Question 3
    printf("Q3) %s\n", que3.question);
    printf("1) 7 \n");
    printf("2) 3 \n");
    printf("3) 5 \n");
    printf("4) 9 \n");
    printf("Enter Your Choice: \n");
    scanf("%d", &choice);
    bool ans3 = IsCorrectAnswer(&que3, choice);
    
    if(ans3)
    {
        printf("Well Done! Correct Answer \n");
        points += que3.score;
    }
    else
    {
        printf("OOF! That's the wrong answer \n");
        points -= negBon;
    }

    printf("Total Points: %d \n", points);

    printf("\n");
    
    //Question 4
    printf("Q4) %s\n", que4.question);
    printf("1) 7 \n");
    printf("2) 9 \n");
    printf("3) 5 \n");
    printf("4) 3 \n");
    printf("Enter Your Choice: \n");
    scanf("%d", &choice);
    bool ans4 = IsCorrectAnswer(&que4, choice);
    
    if(ans4)
    {
        printf("Well Done! Correct Answer \n");
        points += que4.score;
    }
    else
    {
        printf("OOF! That's the wrong answer \n");
        points -= negNor;
    }

    printf("Total Points: %d \n", points);

    printf("\n");


    //Question 5
    printf("Q5) %s\n", que5.question);
    printf("1) 3 \n");
    printf("2) 7 \n");
    printf("3) 5 \n");
    printf("4) 9 \n");
    printf("Enter Your Choice: \n");
    scanf("%d", &choice);
    bool ans5 = IsCorrectAnswer(&que5, choice);
    
    if(ans5)
    {
        printf("Well Done! Correct Answer \n");
        points += que5.score;
    }
    else
    {
        printf("OOF! That's the wrong answer \n");
        points -= negNor;
    }

    printf("Total Points: %d \n", points);

    printf("\n");


    //Question 6
    printf("Q6) %s\n", que6.question);
    printf("1) 7 \n");
    printf("2) 9 \n");
    printf("3) 5 \n");
    printf("4) 3 \n");
    printf("Enter Your Choice: \n");
    scanf("%d", &choice);
    bool ans6 = IsCorrectAnswer(&que6, choice);
    
    if(ans6)
    {
        printf("Well Done! Correct Answer \n");
        points += que6.score;
    }
    else
    {
        printf("OOF! That's the wrong answer \n");
        points -= negBon;
    }

    printf("Total Points: %d \n", points);

    printf("\n");


    //Question 7
    printf("Q7) %s\n", que7.question);
    printf("1) 7 \n");
    printf("2) 5 \n");
    printf("3) 3 \n");
    printf("4) 9 \n");
    printf("Enter Your Choice: \n");
    scanf("%d", &choice);
    bool ans7 = IsCorrectAnswer(&que7, choice);
    
    if(ans7)
    {
        printf("Well Done! Correct Answer \n");
        points += que7.score;
    }
    else
    {
        printf("OOF! That's the wrong answer \n");
        points -= negNor;
    }

    printf("Total Points: %d \n", points);

    printf("\n");


    //Question 8
    printf("Q8) %s\n", que8.question);
    printf("1) 7 \n");
    printf("2) 9 \n");
    printf("3) 5 \n");
    printf("4) 3 \n");
    printf("Enter Your Choice: \n");
    scanf("%d", &choice);
    bool ans8 = IsCorrectAnswer(&que8, choice);
    
    if(ans8)
    {
        printf("Well Done! Correct Answer \n");
        points += que8.score;
    }
    else
    {
        printf("OOF! That's the wrong answer \n");
        points -= negNor;
    }

    printf("Total Points: %d \n", points);

    printf("\n");



    //Question 9
    printf("Q9) %s\n", que9.question);
    printf("1) 7 \n");
    printf("2) 3 \n");
    printf("3) 5 \n");
    printf("4) 9 \n");
    printf("Enter Your Choice: \n");
    scanf("%d", &choice);
    bool ans9 = IsCorrectAnswer(&que9, choice);
    
    if(ans9)
    {
        printf("Well Done! Correct Answer \n");
        points += que9.score;
    }
    else
    {
        printf("OOF! That's the wrong answer \n");
        points -= negBon;
    }

    printf("Total Points: %d \n", points);

    printf("\n");


    //Question 10
    printf("Q10) %s\n", que3.question);
    printf("1) 3 \n");
    printf("2) 7 \n");
    printf("3) 5 \n");
    printf("4) 9 \n");
    printf("Enter Your Choice: \n");
    scanf("%d", &choice);
    bool ans10 = IsCorrectAnswer(&que10, choice);
    
    if(ans10)
    {
        printf("Well Done! Correct Answer \n");
        points += que10.score;
    }
    else
    {
        printf("OOF! That's the wrong answer \n");
        points -= negNor;
    }

    printf("Total Points: %d \n", points);

    printf("\n");

    printf("Thanks For Playing! Hope You Enjoyed, Have A Nice Day! \n");

    return 0;



}