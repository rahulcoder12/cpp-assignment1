#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main() {
    // Record the start time
    auto start = high_resolution_clock::now();

    // Set the common ratio
    int commonRatio = 4;

    // Get the number of terms 'n'
    int n=5;
    

    // Display the GP sequence with commas
    int term = 3; // First term
    cout << "GP sequence: ";
    
    for (int i = 0; i < n; ++i) {
        cout << term;

        // Add a comma for all terms except the last one
        if (i < n - 1) {
            cout << ", ";
        }

        // Calculate the next term in the sequence
        term *= commonRatio;
    }

    // Record the end time
    auto stop = high_resolution_clock::now();

    // Calculate and print the execution time
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "\nExecution Time: " << duration.count() << " milliseconds\n";

    return 0;
}
