// Copyright 2020
//
//  Grade_Calc.cpp
//
//
//  Created by Simon Benzer on 5/17/20.
//

#include <stdio.h>
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::to_string;
using std::string;

int main(int argc, char* arg[]) {
    //initialize variables
    int gradeInput = 0;
    double percInput = 0;
    double finalGrade = 0;
    string string1 = "";
    string string2 = "";
    string string3 = "";
    
    //enter how many grading factors there are (quiz, test, homework, etc.)
    //use cin
    cout << "How many grading factors are there? ";
    cin >> gradeInput;
    const int kNumGradingFactors = gradeInput;
    
    //create arrays for grades
    double gradeArray[10] = {};
    double percArray[10] = {};
    
    //populate arrays with for loop and cin
    for(int i=0;i<kNumGradingFactors;i++) {
        string2 = "What percentage of your grade is factor " +to_string(i+1) +" worth? (decimal) ";
        cout << string2 << endl;
        cin >> percInput;
        percArray[i] = percInput;
        string1 = "What is the grade of factor " +to_string(i+1) +"? (whole number) ";
        cout << string1 << endl;
        cin >> gradeInput;
        gradeArray[i] = gradeInput;
        
    }
    
    //calculate grade
    for(int i=0;i<kNumGradingFactors;i++){
        finalGrade += gradeArray[i]*percArray[i];
    }
    //finalGrade = 100*finalGrade;
    
    //extra credit?
    cout << "Did you receive any extra credit? if yes, enter percent; if no, enter 0" << endl;
    int ec = 0;
    cin >> ec;
    finalGrade += ec;
    
    //display final grade
    string3 = "Your final grade is " +to_string(finalGrade) +" percent";
    cout << string3 << endl;
    if (finalGrade>=80){
        cout << "Congrats!" << endl;
    }
    
}
