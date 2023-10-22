#include <iostream>
#include "quiz.h"
#include <fstream>
#include <cstdlib>
#include <cctype>

using namespace std;

void quizQuestion :: loading()
{
    ifstream file("content.txt");

    if(file.good() == false)
    {
        cout << "File cannot be open!" << endl;
    }

    int line_nr = (question_nr - 1) * 6 + 1;

    int actual_nr = 1;
    string line;

    while (getline(file, line))
    {
        if(actual_nr == line_nr)
        {
            question = line;
        }
         if(actual_nr == line_nr + 1)
        {
            a = line;
        }
         if(actual_nr == line_nr + 2)
        {
            b = line;
        }
         if(actual_nr == line_nr + 3)
        {
            c = line;
        }
         if(actual_nr == line_nr + 4)
        {
            d = line;
        }
         if(actual_nr == line_nr + 5)
        {
            corect = line;
        }
        actual_nr ++;  
    }
}
void quizQuestion :: ask_question()
{
    cout << endl << question << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << "________________________________________________" << endl;
    cout << "Anwser: ";
    cin >> anwser;
}
void quizQuestion :: check_anwser()
{   
    if(anwser == corect )
    {
        points = 1;
    }
    else points = 0;
}
