#include <iostream>
using namespace std;
int main ()
{
    int score = 0, answer;
    cout <<" ============= " << endl;
    cout <<"    QUIZ APPLICATION" << endl;
    cout << "\nQ1. What is the capital of india";
    cout <<"1.Mumbai" <<  endl;
    cout <<"2.New Delhi" << endl;
    cout  <<"3. Kolkata"  << endl;
    cout <<"4.Chennai"  << endl;
    cout <<"Enter your answer:" ;
    cin >> answer;

    if(answer == 2)
    
        score++;
   cout <<"\nQ2.Which languaage is used for C++ programming?"<< endl;
    cout <<"1.HTML" << endl;
    cout <<"2.CSS."<< endl;
    cout <<"3.c++."<< endl;
    cout <<"4.SQL" << endl;
    cout <<"Enter your answer: ";
    cin >> answer;

    if(answer == 3)
    score++;
    cout <<"\nQ3. Which symbol is used for addition?";
    cout  << "1. +";
    cout <<"2. -";
    cout <<"3. *";
    cout <<"4./";
    cout <<"Enter your answer ";
    cin >> answer;

    if (answer == 1)
    score ++;

      cout <<"\nQ4.How many days are there in a week?"  << endl;
      cout << " 1. 5";
      cout <<"2. 6";
      cout <<"3.7";
      cout <<"4.5";

      cout <<"Enter  your answer:" ;
      cin >> answer;
      
      if(answer = 2)
      score++;

      cout <<"Which planet is known as the Red Planet?";
      cout <<"1.Mars" << endl;
      cout <<"2.Jupiter" << endl;
      cout <<"3. Earth" << endl;
      cout <<"4.Venus" << endl;
      cout <<"Enter your answer: ";
      cin >> answer;
      if(answer == 1)
    score++;
    cout <<"\n===============================" << endl;
    cout <<"Quiz Completed!"<< endl;
    cout <<"Your Score : "<< score <<" /5"<< endl;
    if(score == 5)

    cout <<"You got all answers correct." << endl;
      else if(score >=3)
      cout <<"Good Job!" << endl;
      else
      cout <<"Keep Practicing!" << endl;
      cout <<"==================" << endl;
      return 0;
}