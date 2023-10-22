#include <iostream>
#include "quiz.h"
using namespace std;

int main()
{
    quizQuestion que[5];
    
    int resultPoints = 0;

    for(int i = 0; i < 5; i++)
    {
        que[i].question_nr = i + 1;
        que[i].loading();
        que[i].ask_question();
        que[i].check_anwser();
        
        resultPoints += que[i].points;
    }

    cout << endl;
    cout << "End of quiz! Your points: " << resultPoints;
    return 0;
}