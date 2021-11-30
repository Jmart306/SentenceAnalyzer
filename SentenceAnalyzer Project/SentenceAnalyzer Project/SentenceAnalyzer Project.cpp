// SentenceAnalyzer Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <algorithm>

using namespace std;

int checkWordCount(char sent[500]);
int checkLetters(char sent[500]);
int howMany(char sent[500],char letter);


int main()
{
    char sentence[500];
    char chosenLetter;
    int wordCount{0}; 
    int letterCount{0};
    int ammountOfA = 0;

    cout << "Enter the sentence:";
    cin.getline(sentence, 500);

    wordCount = checkWordCount(sentence);
    letterCount = checkLetters(sentence);
   

    cout << "Word Count:" << wordCount << endl;
    cout << "Letter Count:" << letterCount << endl;
    cout << "How Many?(TYPE A LETTER):";
    cin >> chosenLetter; 
    ammountOfA = howMany(sentence, chosenLetter);
    cout << "There are " << ammountOfA << " " << chosenLetter << "'s in this sentence." << endl;
    return 0;
}

int checkWordCount(char sent[500]) 
{
    int i = { 0 }; int check{ 0 }; int wordCount{ 0 }; 
    for (i = 0; sent[i] != '\0'; i++)
    {
        if (sent[i] == ' ')
        {
            if (check != 0) { wordCount ++; }
            check = 0;
        }
        else
        {
            check++;
        }
    }
    if (check != 0)
    {
        wordCount++;
    }
    return wordCount;
}
int checkLetters(char sent[500]) 
{
    int letterCount = 0;
    for (int i = 0; sent[i] != '\0'; i++)
    {
        if (sent[i] != ' ') 
        {
            letterCount++;
        }
    }
    return letterCount;

}

int howMany(char sent[500], char letter)
{
    int countA = 0;
    for (int i = 0; sent[i] != '\0'; i++)
    {
        if (sent[i] == letter)
        {
            countA++;
        }
    }
    return countA;

}