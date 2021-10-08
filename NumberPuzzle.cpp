#include <iostream>

using namespace std;

void Crazy8() {
    const int SumF = 1000;
    int answer = 0;
    int numbers[8] = { 0 };
    int x = 0;
    int y = 0;
    int sum = 0;
    cout << "Using only addition, add eight 8s to get the number 1,000" << endl;
    cout << "==========================================================" << endl;
    cout << "Enter first number: ";
    cin >> numbers[0];
    answer = numbers[0];
    //cout << answer;
    //cout << "Array sum is: " << answer << endl;

    while (answer != SumF) {
        cout << "Enter another Number: ";
        x++;
        cin >> numbers[x];

        answer = answer + numbers[x];

        cout << "Your sum is: " << answer << endl;


        if (answer > 1000) {
            cout << "Answer exceeded 1000";
            break;
        }
        if (x == 7 ) {
            break;
        }

    }


    while (answer != SumF) {
        cout << "Try Again..." << endl;
        cout << "========================================================" << endl;
        Crazy8();
    }

    cout << "Congratulations!!"<< endl;
    cout << "============================================================" << endl;

}

void AgeGap() {
    const int answer1 = 7;
    const int answer2 = 17;
    int guess1;
    int guess2;
    cout << "Two years ago, I was three times as old as my brother was." << endl << "In three years' time, I will be twice as old as my brother."<<endl << endl;
    cout << "What is the age of the younger brother? " << endl;
    cin >> guess1;
    cout << "What is the age of the older brother? " << endl;
    cin >> guess2;

    while ((guess1 != answer1) || (guess2 != answer2)) {

        cout << "Try Again";
        cout << "==========================================================" << endl;
        cout << "Two years ago, I was three times as old as my brother was. In three years' time, I will be twice as old as my brother." << endl;
        cout << "What is the age of the younger brother? " << endl;
        cin >> guess1;
        cout << "What is the age of the older brother? " << endl;
        cin >> guess2;

        if ((guess1 == answer1) && (guess2 == answer2)) {
            cout << "That is correct!" << endl;
            cout << "=======================================================" << endl;
        }

    }
    
}

void HouseNumbers() {
    cout << "My twin lives at the reverse of my house number." << endl << "The difference between our house numbers ends in two." << endl << "What are the lowest possible numbers of our house number?" << endl;
    int answer1 = 19;
    int answer2 = 91;
    int guess1;
    int guess2;

    cout << "Enter first answer: " << endl;
    cin >> guess1;
    cout << "Enter second answer: " << endl;
    cin >> guess2;

    while ((guess1 != answer1) && (guess2 != answer2)) {
        if ((guess1 == answer2) && (guess2 == answer1)) {
            break;
        }
        cout << "Try Again" << endl;
        cout << "Enter first answer: " << endl;
        cin >> guess1;
        cout << "Enter second answer: " << endl;
        cin >> guess2;
    }
    cout << "You are correct!" << endl;
    cout << "==============================================================" << endl;
}

int main()
{
    Crazy8();
    AgeGap();
    HouseNumbers();

    return 0;
}

