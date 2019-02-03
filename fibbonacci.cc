#include <iostream>
using namespace std;





void userInput(int&);





int main() {
    int count;
    userInput(count);

    //fib sequence
    int fib[count];
    for (int i = 0; i < count; i++) {
        if (i < 2)
            fib[i] = i;
        else
            fib[i] = fib[i - 1] + fib[i - 2];
    }

    //print sequence
    cout << count << " numbers from the fibonacci sequence:\n"
        << "[";
    for (int i = 0; i < count; i++) {
        cout << fib[i] << ( (i < count - 1) ? ", " : ", ...]\n");
    }
    return 0;
}





void userInput(int& count) {
    cout << "How many digits of the fibbonacci sequence would you like to request? ";
    cin >> count;
}
