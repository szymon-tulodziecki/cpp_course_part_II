#include <iostream>

using namespace std;

class quizQuestion
{
    public:

    string question;
    string a, b, c, d;
    int question_nr;
    string anwser;
    string corect;
    int points;

    void loading();
    void ask_question();
    void check_anwser();

};






