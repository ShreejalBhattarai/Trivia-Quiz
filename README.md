# Trivia Quiz Program in C++

## Overview

This C++ program implements a trivia quiz game that displays multiple-choice questions, accepts user answers, and provides a final score along with the correct answers. The game reads trivia questions from a text file, presents them to the user, and calculates a score based on their answers. The program also allows users to request hints for each question, reducing the score for that particular question if the hint is used.

**Problem Description**

The program prompts the user to input a filename containing trivia questions and the number of questions to attempt (1-10). It reads the questions, choices, correct answer keys, and hints from the file, and asks the user to answer each question. At the end of the quiz, it displays the correct answers and the user's score.

**Features**

- Multiple-choice trivia questions (A, B, C, D)
- Option to ask for a hint (penalty of -5 points per hint)
- Final score calculation based on user input
- Displays the answer key at the end
- Question Class

The Question class is the core of this trivia game, representing each trivia question. The class contains:


Private Member Variables:

- A stem for the question text
- An array of 4 possible answers
- A hint to help the user
- The correct answer key (A, B, C, or D)
- The point value (initially set to 10 points)

  
Public Member Functions

- Constructor: Two constructors are provided. One initializes with no values, and the other allows initializing with the question stem, answers, key, and hint.
- setStem: Sets the question stem.
- getStem: Returns the question stem.
- setAnswers: Sets the 4 multiple-choice answers.
- getAnswer(int i): Returns a single answer at index i.
- setKey: Sets the correct answer key.
- getKey: Returns the correct answer key.
- getValue: Returns the current point value of the question.
- setHint: Sets the hint for the question.
- getHint: Halves the point value and returns the hint text.
- ask: Composes the question and answer options for display, formatted as:

1. Question?
A. Answer1
B. Answer2
C. Answer3
D. Answer4


## How the Program Works

- Input: The user enters the filename containing the questions and the number of questions to attempt.
- Quiz: The program reads each question from the file, displays it, and asks the user for their answer (or a hint). If the user asks for a hint, the score for that question is reduced.
- Output: At the end of the quiz, the program displays the correct answers and the user’s score.
- File Format

**The input file for the quiz must follow this format:**

Question text
Answer 1
Answer 2
Answer 3
Answer 4
Hint text
Correct answer letter (A, B, C, or D)


Example:
What do you use to measure an angle?
Compass
Protractor
Ruler
T-Square
It's the tool used in geometry class.
B


**Sample Execution**

Filename: trivia.txt
Number of questions (1-10): 3

1. What do you use to measure an angle?
A. Compass
B. Protractor
C. Ruler
D. T-Square
Your answer (enter the letter, or H for a Hint): B

2. The Great Sphinx has the head of a human and the body of a what?
A. Camel
B. Eagle
C. Lion
D. Alligator
Your answer (enter the letter, or H for a Hint): H
Hint: It can't fly or swim.
Your answer (enter the letter): C

3. What is the flat rubber disc used in a game of ice hockey?
A. Birdie
B. Dart
C. Tile
D. Puck
Your answer (enter the letter, or H for a Hint): D

Answers: B C D
Your score out of 30: 25


## Instructions

Clone the repository to your local machine.
git clone https://github.com/shreejal17/trivia-quiz.git

Compile the program.
g++ -o quiz QuizDriver.cpp Question.cpp

Run the program.
./quiz

##NEW ADD
makefile has been added and can be used to run the program. 
Example:
make 
./object
These two commands will now compile and run the program.

**Requirements**

C++11 or later
A text file with trivia questions in the specified format
Notes

**Hints can only be used once per question and reduce the score for that question by 5 points.**
**The program accepts both uppercase and lowercase input for the answer and hint request.**
