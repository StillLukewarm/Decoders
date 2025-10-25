#include <bits/stdc++.h>
using namespace std;

int calcHours(int sleep, int wake) {
    if(wake < sleep) wake += 24;
    return wake - sleep;
}

int main() {
    vector<int> slept(30);
    int day = 0;

    while(day < 30) {
        int s, w;
        cout << "\nDay " << day+1 << ":\n";
        cout << "When did you fall asleep? (0-23): ";
        cin >> s;
        cout << "When did you wake up? (0-23): ";
        cin >> w;

        slept[day] = calcHours(s, w);
        day++;

        cout << "\nSleep Graph (Hours Slept So Far)\n";
        for (int i = 0; i < day; i++) {
            cout << "Day " << i+1 << ": ";
            for (int j = 0; j < slept[i]; j++) {
                cout << "#";
            }
            cout << " (" << slept[i] << " hrs)\n";
        }

        int total = 0;
        for(int i = 0; i < day; i++) total += slept[i];

        int avg = total / day;

        cout << "\nAverage sleep so far: " << avg << " hours\n";
        cout << "--------------------------------------\n";
    }
    return 0;
}
