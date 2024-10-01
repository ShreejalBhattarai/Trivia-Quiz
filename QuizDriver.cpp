// File Name: QuizDriver.cpp
// Author: Shreejal Bhattarai
// Collaborators: None
// Date: 9/25/2024
// Assignment Number: 1
// CS 2308 Fall 2024
// This program is a driver file that uses the Question.h as a class declaration file, Question.cpp
// as a member function file. 


#include<iostream>
#include<string>
#include<fstream>
#include "Question.h"

using namespace std;

int main(){

    string fileName;
    int numberQuestions;
    int TotalScore=0;
    char userAnswer;

  
    cout<<"Filename: ";
    cin>>fileName;
    ifstream fin;
    fin.open(fileName);
    if(!fin){
      cout<<"Error Opening the file"<<endl;
    }
    
    
    cout<<"Number of questions (1-10): "<<endl;
    cin>>numberQuestions;
    Question ques[numberQuestions];
    string q, a[4], hint;
    char k;  
    for (int i = 0; i < numberQuestions; ++i) {
        getline(fin, q);
        for(int i=0;i<4;i++){
           getline(fin, a[i]);          
          }
        getline(fin, hint);
        fin >> k;

        ques[i].setStem(q);
        ques[i].setHint(hint);
        ques[i].setKey(k);
        ques[i].setAnswers(a);

        getline(fin, q);


        ques[i].ask(i+1);

        cout << "Your answer (enter the letter, or H to ask for a Hint): ";
        
        cin >> userAnswer;
        userAnswer = toupper(userAnswer);  

        if (userAnswer == 'H') {
                cout << ques[i].getHint();
                cout << endl << "Your answer (enter the letter): ";
                cin>>userAnswer;
                userAnswer = toupper(userAnswer); 
            }
         
        if (userAnswer == ques[i].getKey()) {
            TotalScore += ques[i].getValue();
        }
        cout<<endl;
    }

    fin.close();
    
    cout << "Answers: \n";
    for (int i = 0; i < numberQuestions; ++i) {
        cout << ques[i].getKey() << " ";
    }
    cout << "\n\nYour score out of " << numberQuestions * 10 << ": " << TotalScore << endl;
    

    return 0;
}
