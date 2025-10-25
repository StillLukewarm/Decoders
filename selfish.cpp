#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> questions(5);
    questions[0] = "You get the last slice of pizza at home. Do you take it? (1-5): ";
    questions[1] = "Your friend needs help studying, but you are tired. Will you still help? (1-5): ";
    questions[2] = "If you loan money to someone, do you expect something in return? (1-5): ";
    questions[3] = "If your friend succeeds more than you, do you feel bad? (1-5): ";
    questions[4] = "Do you care more about your goals than others' feelings? (1-5): ";

    cout << "\n--- SELFISHNESS QUIZ ---\n";
    cout << "Answer each question from 1 to 5:\n";
    cout << "1 = Not at all | 5 = Very much\n\n";

    int score = 0, input;

    for(int i = 0; i < 5; i++) {
        cout << questions[i];
        cin >> input;
        if(input < 1) {
            input = 1;
        }
        if(input > 5) {
            input = 5;
        }
        score += input;
    }

    int percent = (score * 100) / 25;

    cout << "\nYour Selfishness Score: " << percent << "/100\n";

    cout << "\nPersonality Interpretation:\n";

    if(percent <= 30) {
        cout << "You are very selfless. You put others first, sometimes too much.\n";
    } else if(percent <= 60) {
        cout << "You are balanced. You care about others but respect yourself too.\n";
    } else if(percent <= 80) {
        cout << "You are self-focused. You protect your own interests strongly.\n";
    } else {
        cout << "You are highly selfish. Your world revolves around you.\n";
    }

    cout << "\n----------------------------------\n";
    return 0;
}
