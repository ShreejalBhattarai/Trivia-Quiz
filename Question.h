// File Name: Question.h
// Author: Shreejal Bhattarai
// Collaborators: None
// Date: 9/25/2024
// Assignment Number: 1
// CS 2308 Fall 2024
// This program is a  class declaration file, and it uses Question.cpp file
// as a member function file and driver file.


#include <string>

class Question{

 private:
    
    string stem;
    char key;
    int value;
    string answer[4];
    string hint;


 public:
    
    Question();
    
    Question(string stem, string answers[], char key, string hint);
    
    void setStem(string stem);
    
    string getStem() const;
    
    void ask(int quesno);

    void setAnswers(string answers[]);
    
    string getAnswer(int i) const;

    void setKey(char c);
    
    char getKey() const;

    int getValue() const;

    void setHint(string hint);
    
    string getHint(); 

};