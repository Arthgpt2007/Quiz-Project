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
    printf("5) Every INCORRECT answer to a NORMAL question will deduct 2 points \n");
    printf("6) Every INCORRECT answer to a BONUS question will deduct 4 points \n");
    printf("All the Best and have fun! \n");
    printf("\n");
}

//Start the game control
void StartGame()
{
    //Printing The option for either rules or to start the game
    printf("Welcome to The QUIZ GAME made by ARTH GUPTA AND TANISH BHADOLA \n");
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

//Function To Inititalize All Questions
void QuestionInitialization(struct Question *que, char *text, int correctOption, bool isBonus)
{
    strcpy(que->question, text);
    que->correctOption = correctOption;
    que->isBonusQn = isBonus;
    AssignScore(que);
}

//Function to Display the questions
void DisplayQuestions(int quesNo, struct Question *que, char options[][50])
{
    printf("\n");
    //Displaying the question number and the question
    printf("Q%d) %s\n", quesNo, que->question);

    //Displaying The Options
    for(int i = 0; i < 4; i++)
    {
        printf("%d) %s\n", i + 1, options[i]);
    }
}

//Function To check the correct answer and add the points or deduct it
void Evaluate(struct Question *que, int *points, int negNor, int negBon)
{
    int choice; //User Entered Choice
    printf("Enter your choice: ");
    scanf("%d", &choice);

    bool isCorrect = IsCorrectAnswer(que, choice); //Checking if the user entered option is correct or not

    if(isCorrect)
    {
        printf("Well Done! Correct Answer \n");
        *points += que->score;
    }
    else
    {
        printf("OOPS! Thats the wrong answer \n");
    
        //Deduct Marks based on the ocndition if it is a bonus question or not
        if(que->isBonusQn)
        {
            *points -= negBon;
        }
        else
        {
            *points -= negNor;
        }
    }

    printf("Total Points: %d \n", *points);
}

//Main Function
int main()
{

    //Display the instructions of the game
    StartGame();


    //Initializing 10 different question structures
    struct Question ques[10];   

    //Initializing all Questions
    QuestionInitialization(&ques[0], "In the given statement, “hyundai.engine.bolts = 89”; Which of the following is True?", 4, false);
    QuestionInitialization(&ques[1], "What is the correct syntax to declare a function that returns an integer?", 2, false);
    QuestionInitialization(&ques[2], "If a function does not return any value, it should be declared as?", 3, true);
    QuestionInitialization(&ques[3], "What does this mode mean? 'r' ", 2, false);
    QuestionInitialization(&ques[4], "Which of the following is TRUE about arrays in C?", 2, false);
    QuestionInitialization(&ques[5], "Which statement accesses the last element of an array named arr of size n?", 4, true);
    QuestionInitialization(&ques[6], "A function that calls itself is known as?", 1, false);
    QuestionInitialization(&ques[7], "What is stored in uninitialized array elements?", 2, false);
    QuestionInitialization(&ques[8], "In C, what is the size of the array arr declared as int arr[10]; ?", 3, true);
    QuestionInitialization(&ques[9], "What is the correct declaration for a pointer variable that will hold the reference to an opened file in C?", 1, false);


    int points = 0; //Initializing points as 0
    int negNor = 2; //Negative Marks for Normal Questions
    int negBon = 4; //Negative Marks for Bonus Questions

    //3-D Array for Options List
    char options[10][4][50] = {
        {"bolts is a structure variable", "engine is a structure variable", "hyundai is a structure variable", "both b & c"},
        {"int function;", "int function()", "function int()", "int function[]"},
        {"empty", "nil", "void", "null"},
        {"Write only", "Read only", "Read + Write", "Append"},
        {"Array size can be changed at runtime", "Array name is a pointer constant", "Arrays can store different data types", "Array indexing starts from 1"},
        {"arr[n]", "arr[n+1]", "arr[-1]", "arr[n-1]"},
        {"Recursive function", "Loop function ", "Return function", "Inline function"},
        {"0", "Garbage value", "-1", "Null"},
        {"10 bytes", "cannot determine ", "40 bytes", "80 bytes"},
        {"FILE *file_ptr;", "char *file_ptr;", "struct File *file_ptr;", "int *file_ptr;"}
    };

    //Structure For Questions using For Loop
    for(int i = 0; i < 10; i++)
    {
        DisplayQuestions(i + 1, &ques[i], options[i]);
        Evaluate(&ques[i], &points, negNor, negBon);
        printf("\n");
    }

    printf("\n");
    printf("Thanks For Playing The Game! Hope You Enjoyed \n");
    return 0;
}