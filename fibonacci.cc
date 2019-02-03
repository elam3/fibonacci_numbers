#include <iostream>
using namespace std;





//unsigned long long int = 2**64 ~= 18,446,744,073,709,551,616
//src: http://www.cplusplus.com/doc/tutorial/variables/
const int MAX = 10003; //segmentation fault at 10004





void userInput(int&);
void fillFibonacciArray(unsigned long long int [], const int);
void printFibonacciArray(unsigned long long int [], const int);





int main() {
    int count = 0;
    userInput(count);
    unsigned long long int fib[count];
    fillFibonacciArray(fib, count);
    printFibonacciArray(fib, count);
    return 0;
}





void userInput(int& count) {
    cout << "The Fibonacci Sequence is the series of numbers:\n\t0,1,1,2,3,5, 8, 13, 21, 34 , ..."
        << "\nThe next number is found by adding the sum of the two numbers before it.\n"
        << "\n(Source: https://www.mathsisfun.com/numbers/fibonacci-sequence.html)\n" 
        << endl;

    cout << "How many digits of the fibbonacci sequence would you like to print? ";
    do {
        if (count < 0)
            cout << "Opps. Please no negative numbers.\nHow many numbers? ";
        else if (count > MAX)
            cout << "Opps. " << count << " is too large to compute.\nHow many numbers? ";

        cin >> count;
    } while (count < 0 || count > MAX);
}





void fillFibonacciArray(unsigned long long fib[], const int count) {
    for (int i = 0; i < count; i++) {
        if (i < 2)
            fib[i] = i;
        else
            fib[i] = fib[i - 1] + fib[i - 2];
    }
}





void printFibonacciArray(unsigned long long int fib[], const int count) {
    cout << endl << count << " numbers from the fibonacci sequence:\n"
        << "[";
    for (int i = 0; i < count; i++) {
        cout << fib[i] << ( (i < count - 1) ? ", " : ", ...]\n");
    }
}
