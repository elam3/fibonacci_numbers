#include <iostream>
using namespace std;
const int MAX = 10003; //unsigned long long int = 2**64 ~= 18 446 744 073 709 551 616; src: http://www.cplusplus.com/doc/tutorial/variables/





void userInput(int&);





int main() {
    int count = 0;
    userInput(count);

    //fib sequence
    unsigned long long int fib[count];
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
    do {
        if (count < 0)
            cout << "Opps. Please no negative numbers.\nHow many numbers? ";
        else if (count > MAX)
            cout << "Opps. " << count << " is too large to compute.\nHow many numbers? ";

        cin >> count;
    } while (count < 0 || count > MAX);
}
