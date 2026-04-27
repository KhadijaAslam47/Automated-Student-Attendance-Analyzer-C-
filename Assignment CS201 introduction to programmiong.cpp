#include <iostream>
using namespace std;

int main() {

    // Step 1: Hard-code Name and ID
    cout << "Name: Khadija Aslam" << endl;
    cout << "Student ID: BC260201059" << endl;

    long long id = 260201059;

    // Step 2: Extract digits
    int d1 = (id / 100000000) % 10;
    int d3 = (id / 1000000) % 10;
    int d5 = (id / 10000) % 10;
    int d7 = (id / 100) % 10;
    int d9 = id % 10;

    cout << "\nExtracted Digits: ";
    cout << d1 << " " << d3 << " " << d5 << " " << d7 << " " << d9 << endl;

    int total = 10;

    int p1 = d1 * 10;
    int p2 = d3 * 10;
    int p3 = d5 * 10;
    int p4 = d7 * 10;
    int p5 = d9 * 10;

    int cleared = 0, warning = 0, detained = 0;

    // Heading
    cout << "\n\n----------------------- ATTENDANCE REPORT --------------------\n";
    cout << "Course\t\tAttended\tTotal\tPercentage\tStanding\n";

    // Mathematics
    cout << "Mathematics\t" << d1 << "\t\t" << total << "\t" << p1 << "%\t\t";
    if (p1 >= 75) { cout << "CLEARED\n"; cleared++; }
    else if (p1 >= 50) { cout << "WARNING\n"; warning++; }
    else { cout << "DETAINED\n"; detained++; }

    // Physics
    cout << "Physics\t\t" << d3 << "\t\t" << total << "\t" << p2 << "%\t\t";
    if (p2 >= 75) { cout << "CLEARED\n"; cleared++; }
    else if (p2 >= 50) { cout << "WARNING\n"; warning++; }
    else { cout << "DETAINED\n"; detained++; }

    // English
    cout << "English\t\t" << d5 << "\t\t" << total << "\t" << p3 << "%\t\t";
    if (p3 >= 75) { cout << "CLEARED\n"; cleared++; }
    else if (p3 >= 50) { cout << "WARNING\n"; warning++; }
    else { cout << "DETAINED\n"; detained++; }

    // Programming
    cout << "Programming\t" << d7 << "\t\t" << total << "\t" << p4 << "%\t\t";
    if (p4 >= 75) { cout << "CLEARED\n"; cleared++; }
    else if (p4 >= 50) { cout << "WARNING\n"; warning++; }
    else { cout << "DETAINED\n"; detained++; }

    // Islamic Studies
    cout << "Islamic Studies\t" << d9 << "\t\t" << total << "\t" << p5 << "%\t\t";
    if (p5 >= 75) { cout << "CLEARED\n"; cleared++; }
    else if (p5 >= 50) { cout << "WARNING\n"; warning++; }
    else { cout << "DETAINED\n"; detained++; }

    // Summary
    cout << "\n-------- SUMMARY -------\n";
    cout << "CLEARED: " << cleared << endl;
    cout << "WARNING: " << warning << endl;
    cout << "DETAINED: " << detained << endl;

    return 0;
}
