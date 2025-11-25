#include <iostream>
#include <vector>
using namespace std;

bool faillecture_faulty(const vector<int>& attendance_records) {
    int absent_count = 0;
    for (int i = 1; i < attendance_records.size(); ++i) {
        absent_count += attendance_records[i] == 0;
    }
    return absent_count >= 3;
}

bool faillecture_correct(const vector<int>& attendance_records) {
    int absent_count = 0;
    for (int i = 0; i < attendance_records.size(); ++i) {
        absent_count += attendance_records[i] == 0;
    }
    return absent_count >= 3;
}

void print_attendance(const vector<int>& attendance) {
    cout << "{";
    for (int i = 0; i < attendance.size(); ++i) {
        cout << attendance[i];
        if (i < attendance.size() - 1) cout << ", ";
    }
    cout << "}";
}

