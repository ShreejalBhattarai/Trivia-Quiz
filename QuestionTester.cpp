// File Name: QuestionTester.cpp
//
// Author: Mohammad Zaeed, Bao Vo
// Collaborators: Dr. Jill Seaman, Orhunova Polina
// Date: 15/09/2024
// Assignment Number:2
// CS 2308 Fall 2024
//
// Driver to test the Question class.

#include <iostream>
#include <iomanip>
using namespace std;

#include "questions.h"

int main()
{
    Question q1;
    q1.setStem("What name is given to half of a Byte (4 bits)?");
    string q1Answers [] = {"Nibble","Ort","Scrap","Snippet"};
    q1.setAnswers(q1Answers);
    q1.setKey('A');
    
    cout<< "q1 stem: " << q1.getStem() << endl;
    cout<< "q1 first answer: " << q1.getAnswer(0) << endl;
    cout<< "q1 last answer: " << q1.getAnswer(3) << endl;
    cout <<"q1 correct answer: " << q1.getKey() << endl;
    cout << endl;
    
    string q2Answers [] = {"China","India","Mexico","Australia"};
    Question q2("Which country is home to the Kangaroo?",q2Answers,'D',"It's a country that is a continent on its own.");
    

    cout << "Value of the question before hint (FYI: whenever you are taking a hint the points are reduced in half): "<< q2.getValue() << endl;
    cout << q2.ask();
    cout << "Hint: " << q2.getHint() << endl;
    cout << "Value of the question after the hint: " << q2.getValue() << endl;
}
/* Expected output:
 
 q1 stem: What name is given to half of a Byte (4 bits)?
 q1 first answer: Nibble
 q1 last answer: Snippet
 q1 correct answer: A

 Value of the question before hint (whenever you are taking a hint the points are reduced in half): 10
 Which country is home to the Kangaroo?
 A. China
 B. India
 C. Mexico
 D. Australia
 Hint: It's a country that is a continent on its own.
 Value of the question after the hint: 5

 */
