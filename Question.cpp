// File Name: Question.cpp
//
// Author: Shreejal Bhattarai
// Collaborators: None
// Date: 9/25/2024
// Assignment Number: 1
// CS 2308 Fall 2024
//
// This program is a driver file that uses the Question.h as a class declaration file, Question.cpp
// as a member function file. 


#include "Question.h"
#include <iostream>
using namespace std;


//***********************************************************
// constructor name: Question.
// It has no parameters. It is a default constructor.
// returns: none
//***********************************************************

Question :: Question(){
        stem= "";
        key='X';
        value = 10;
        for (int i = 0; i < 4; i++) {
            answer[i] = "";
        }
        hint = "";

    }


//***********************************************************
// constructor name: Question(param1, param2, param3, param4)
// It has 4 parameters. s, ans[], k, h. These parameter cast values from user input to private
//variables to be used throughout the program
// returns: none
//***********************************************************
Question :: Question(string s, string ans[], char k, string h){
    stem = s;
    for(int i=0 ; i<4; i++){
        answer[i] = ans[i];
    }
    hint = h;
    key = k;
    value=10;
}


//***********************************************************
// function name: setStem(string s), getStem() const
//parameter for setStem: s, none
//parameter for getStem: none, none
//These two are getters and setters to set the stem trunk and access it when required.
//returns none
//***********************************************************
void Question :: setStem(string s){
        stem = s;
    }
    
string Question :: getStem() const{
        return stem;
    }


//***********************************************************
// function name: ask(int quesno)
//parameter 1: int quesno
//This function constructs the question using the question, and the answer array.
//returns none
//***********************************************************

    void Question :: ask(int quesno){
        cout<<quesno<<". "<<stem<<endl;
        for(int i=0;i<4;i++){
            cout<<static_cast<char>('A'+i)<<". "<<answer[i]<<endl;
        }
    }


//***********************************************************
// function name: setAnswers(string ans[]), getAnswer(int i) const
//parameter for setAnswers: int i
//parameter for getAnswers: ans[]
//These two are getters and setters to set the answers array and use when required.
//returns answer[i]
//***********************************************************

    void Question :: setAnswers(string ans[]){
        for(int i=0;i<4;i++){
            answer[i]=ans[i];
        }
    }
    
    string Question :: getAnswer(int i) const{
       return answer[i];
    }


//***********************************************************
// function name: setKey(char c), getKey() const
//parameter for getKey: char c
//parameter for getKey: none
//These two are getters and setters to set the answer character and use when required.
//returns key
//***********************************************************

    void Question :: setKey(char c){
        key = c;
    }
    
    char Question :: getKey() const{
        return key;
    }

//***********************************************************
// function name: getValue
//Parameters: none
//This is used to get pointsvalue variable to deduct points.
//returns none
//***********************************************************


    int Question :: getValue() const{
        return value;
    }


//***********************************************************
// function name: setHint(string h), getHint()
//parameter for setHint: string h
//parameter for getHint: none
//These two are getters and setters to set the hint line when called upon.
//returns none, the getHint returns hint
//***********************************************************


    void Question :: setHint(string h){
        hint = h;
    }
    
    string Question :: getHint(){
        value = value/2;
        return hint;
    }

