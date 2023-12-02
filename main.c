#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>



    char convertToUpperCase(char ch) {
    return (char)toupper((unsigned char)ch);
}
void guessTheNumber();
void Quiz();
void rockPaperScissor();
int isDuplicate(int array[], int size, int number);
int getComputerChoice();
void determineWinner(int userChoice, int computerChoice);
    int computerScore=0;
    int userScore=0;

void runForHalfSecond() {
    clock_t start_time = clock();  // Get the starting time

    // Loop until the elapsed time is greater than or equal to 0.5 seconds
    while ((clock() - start_time) / CLOCKS_PER_SEC < 0.5) {
      //do nth
    }
}

int main() {
    bool isExit = false;

    printf("Welcome to our gaming platform 🙏.\n\n");

    while (!isExit) {
        int Index;
        printf("\n\nChoose what do you want to play according to their Index:\n\n");
        printf("1. Guess the Number\n");
        printf("2. Quiz\n");
        printf("3. Rock Paper Scissor\n\n");
        printf("Press 0 to 'Quit'\n\n");
        printf("My Choice: ");
        scanf("%d", &Index);

        if (Index == 1) {
            guessTheNumber();
        } else if (Index == 2) {
            Quiz();
        } else if (Index == 3) {
            rockPaperScissor();
        } else if (Index == 0) {
            isExit = true;
        }
    }

    printf("Thank you for playing. Have a good Day.😊\n");
    return 0;
}

void guessTheNumber() {
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 10
    int secretNumber = rand() % 10 + 1;

    int guess;
    int attempts = 0;
    int maxAttempts = 3;  // Set your desired maximum number of attempts

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 10. Try to guess it.\n");

    while (attempts < maxAttempts) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess == secretNumber) {
            printf("Congratulations! You guessed the correct number (%d) in %d attempts.\n", secretNumber, attempts);
            break;
        } else if (guess < secretNumber) {
            printf("Too low.\n Try again.\n");
        } else {
            printf("Too high.\n Try again.\n");
        } 
         if (attempts == maxAttempts) {
        printf("Sorry, you've reached the maximum number of attempts. The correct number was %d.\n", secretNumber);
    }
    }

  
}



// Function to check if a number is already in the array
int isDuplicate(int array[], int size, int number) {
    for (int i = 0; i < size; i++) {
        if (array[i] == number) {
            return 1;  // Duplicate found
        }
    }
    return 0;  // No duplicate found
}



void Quiz() {

      srand(time(NULL));
        // Array of questions
char *questions[] = {
    "Which programming language is often used for artificial intelligence?",
    "What does HTML stand for in web development?",
    "In computer programming, what is a 'loop'?",
    "What is the function of RAM in a computer?",
    "Which programming language is known for its use in data science?",
    "In networking, what does IP stand for?",
    "What is the purpose of a router in a computer network?",
    "Which protocol is used for secure communication over the internet?",
    "What is the default port for HTTP?",
    "What is the purpose of an operating system in a computer?",
    "In the OSI model, which layer is responsible for data compression and encryption?",
    "What is the difference between TCP and UDP in networking?",
    "What is the primary function of DNS in networking?",
    "Which programming language is often used for game development?",
    "What is the role of a firewall in network security?",
    "What is a software ?",
    "What is the purpose of a compiler in programming?",
    "Which data structure organizes data in a last-in, first-out (LIFO) manner?",
    "What is the significance of the 'main' function in C programming?",
    "What is the purpose of the 'git' version control system?",
    "What is an API in programming?",
    "What is the purpose of a subnet mask in networking?",
    "What is the role of an index in a database?",
    "Which programming language is commonly used for web development?",
    "What is the purpose of the 'if' statement in programming?",
    "What is the default programming language for Android app development?",
    "What is SQL used for in the context of databases?",
    "What is the primary purpose of the HTTP GET method?",
    "What is the purpose of the 'else' statement in programming?",
    "What is the role of a switch in a computer network?"
};

char *options[][4] = {
    {"A. Python", "B. Java", "C. C++", "D. Ruby"},
    {"A. HyperText Markup Language", "B. High-Level Text Machine Language", "C. HyperTransfer Markup Language", "D. HyperText Machine Language"},
    {"A. A sequence of instructions that is repeated until a certain condition is met", "B. A type of data structure", "C. A variable in programming", "D. A programming error"},
    {"A. Holds the data that is currently being used and processed", "B. Stores the computer's operating system", "C. Manages the computer's hard drive", "D. Controls the computer's display"},
    {"A. Java", "B. Python", "C. R", "D. C#"},
    {"A. Internet Protocol", "B. Internal Protocol", "C. Interconnect Protocol", "D. Intranet Protocol"},
    {"A. Connects different segments of a network", "B. Filters incoming and outgoing network traffic", "C. Manages the computer's display", "D. Stores data temporarily"},
    {"A. HTTPS", "B. FTP", "C. SMTP", "D. SSL"},
    {"A. 80", "B. 8080", "C. 443", "D. 21"},
    {"A. Manages hardware resources and provides a user interface", "B. Controls the flow of data between the computer and the network", "C. Manages the computer's memory", "D. Ensures the security of data in a computer"},
    {"A. Presentation layer", "B. Session layer", "C. Application layer", "D. Transport layer"},
    {"A. TCP is connection-oriented, while UDP is connectionless", "B. TCP is faster than UDP", "C. UDP is more reliable than TCP", "D. TCP is used for video streaming, while UDP is used for file transfer"},
    {"A. Translates human-readable domain names into IP addresses", "B. Manages the flow of data in a network", "C. Encrypts data for secure transmission", "D. Filters incoming and outgoing network traffic"},
    {"A. JavaScript", "B. Python", "C. C#", "D. Swift"},
    {"A. Monitors and controls incoming and outgoing network traffic", "B. Manages computer memory", "C. Executes instructions in a computer program", "D. Translates human-readable domain names into IP addresses"},
    {"A. The programs that run on a computer", "B. The physical components of a computer", "C. The data stored on a computer", "D. The instructions that tell the computer what to do"},
    {"A. It converts high-level programming code into machine code", "B. It manages computer memory", "C. It connects to the internet", "D. It creates user interfaces"},
    {"A. Stack", "B. Queue", "C. Linked List", "D. Tree"},
    {"A. It is where the program execution begins", "B. It is a reserved keyword in C programming", "C. It is used for mathematical calculations", "D. It is optional in C programs"},
    {"A. It tracks changes in the code and allows collaboration among developers", "B. It manages computer memory", "C. It connects to the internet", "D. It creates user interfaces"},
    {"A. Application Programming Interface", "B. Advanced Program Instruction", "C. Automated Programming Interface", "D. Application Process Integration"},
    {"A. It assigns IP addresses to devices on a network", "B. It controls the flow of data in a network", "C. It encrypts data for secure transmission", "D. It separates a network into smaller subnetworks"},
    {"A. It organizes data alphabetically", "B. It speeds up database queries", "C. It ensures data integrity", "D. It encrypts sensitive information"},
    {"A. Java", "B. Python", "C. C++", "D. JavaScript"},
    {"A. It monitors and controls incoming and outgoing network traffic", "B. It manages computer memory", "C. It executes instructions in a computer program based onn certain condition", "D. It translates human-readable domain names into IP addresses"},
    {"A. Java", "B. Kotlin", "C. Swift", "D. C++"},
    {"A. It stands for 'Structured Query Language' and is used for managing and manipulating relational databases", "B. It is a programming language for artificial intelligence", "C. It is a protocol for secure communication on the internet", "D. It is a markup language for creating web pages"},
    {"A. It retrieves data from a server", "B. It submits data to a server", "C. It is used for updating records in a database", "D. It is a method for encrypting data"},
    {"A. It handles the 'if' conditions in a program", "B. It is used for error handling", "C. It defines alternative actions based on a condition", "D. It is used for creating functions in a program"},
    {"A. It connects devices within the same local network", "B. It connects devices to the internet", "C. It manages the flow of data within a network", "D. It translates human-readable domain names into IP addresses"}
};

char *correctAnswers[] = {
    "A", "A", "A", "A", "B", "A", "A", "A", "A", "A",
    "A", "A", "A", "B", "A", "A", "A", "A", "A", "A",
    "A", "D", "A", "D", "C", "A", "A", "A", "C", "C"
};

      
int totalNumOfQues = sizeof(questions) / sizeof(questions[0]);
int uniqueNumbers[30] ;
    int life=0;
    int totalCorrectAns=0;
    int generatedNumbers = 0;

   


    while (generatedNumbers < totalNumOfQues) {
      int randomNumber = rand() % totalNumOfQues;


        if (!isDuplicate(uniqueNumbers, generatedNumbers, randomNumber)) {
            uniqueNumbers[generatedNumbers] = randomNumber;
            // printf("randomNumber:%d",randomNumber);
            generatedNumbers++;
        }
    }

        printf("Welcome to the Quiz Game!\n");


    for (int i = 0; i < totalNumOfQues; i++) {
        if (life<3)
{
                // Display the question and options
        printf("\nQuestion %d: %s\n", i +1, questions[uniqueNumbers[i]]);
 
              for (int j = 0; j < 4; j++) {
            printf("%s\n", options[uniqueNumbers[i]][j]);
        }
        

           // Get user's answer
        char userAnswer;  // Assuming the answer will be a single character (A, B, C, or D)
        printf("Your Answer: ");
        scanf(" %c", &userAnswer);
       userAnswer = convertToUpperCase(userAnswer);
         printf("\n checking...\n");
        runForHalfSecond();
            // Check the answer
        if (userAnswer == correctAnswers[uniqueNumbers[i]][0]) {
            printf("Correct!\n");  
            totalCorrectAns++;
            printf("\ntotalCorrectAns:%d\n",totalCorrectAns);
          
        } else {
            printf("Incorrect. The correct answer is: %s\n", correctAnswers[uniqueNumbers[i]]);
            life++;
              printf("\nlife:%d\n",life);
        }
    }else{
        break;
    }
    
}


if (totalCorrectAns == 0) {
      printf("\n Total correct answers: %d \n",totalCorrectAns);
    printf("\nVery very weak.🤮\n");
} else if (totalCorrectAns > 0 && totalCorrectAns <= 5) {
         printf("\n Total correct answers: %d \n",totalCorrectAns);
    printf("\nWeak 💩\n");
} else if (totalCorrectAns > 5 && totalCorrectAns <= 10) {
         printf("\n Total correct answers: %d \n",totalCorrectAns);
    printf("\nAverage 😬\n");
} else if (totalCorrectAns > 10 && totalCorrectAns <= 15) {
         printf("\n Total correct answers: %d \n",totalCorrectAns);
    printf("\nGood! 😉\n");
} else if (totalCorrectAns > 15 && totalCorrectAns <= 20) {
         printf("\n Total correct answers: %d \n",totalCorrectAns);
    printf("\nVery Good! 👍\n");
} else if (totalCorrectAns > 20 && totalCorrectAns <= 25) {
         printf("\n Total correct answers: %d \n",totalCorrectAns);
    printf("\nExpert! 💪\n");
} else if (totalCorrectAns > 25 && totalCorrectAns <= 30) {
         printf("\n Total correct answers: %d \n",totalCorrectAns);
    printf("\nLegend! 💖\n");
}

printf("\nQuiz completed! Thanks for playing.😇\n");


}

int getComputerChoice() {
    srand(time(NULL));
    return rand() % 3 + 1;  // Generates a random number between 1 and 3
}

// Function to determine the winner of the game
void determineWinner(int userChoice, int computerChoice) {
    printf("You chose: ");
    switch (userChoice) {
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissors\n");
            break;
        default:
            printf("Invalid choice\n");
            return;
    }

    printf("Computer chose: ");
    switch (computerChoice) {
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissors\n");
            break;
    }

    // Determine the winner
    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        printf("You win!\n");
        userScore++;
    } else {
        printf("Computer wins!\n");
        computerScore++;
    }
}



void rockPaperScissor() {
    int userChoice, computerChoice;
    int iteration=0;
     printf("Welcome to Rock-Paper-Scissors Game\n");
    while (iteration<3)
    {  
    printf("1. Rock\n2. Paper\n3. Scissors\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &userChoice);
    printf("Computer choosing...\n");
runForHalfSecond();
    // Get the computer's choice
    computerChoice = getComputerChoice();

    // Determine the winner and display the choices
    determineWinner(userChoice, computerChoice);
    printf("\n\n\t\t Your score:%d \t\t\t\t Computer score:%d\n\n\n",userScore,computerScore);
     iteration++;
    }
    
    if(computerScore>userScore){
        printf("Computer Wins!!\n");
    }else if(computerScore<userScore){
        printf("You Win!!!\n");
    }else{

        printf("It is a tie.\n");
    }
    printf("Thank you for playing.Have a good day!😊");

 
}



