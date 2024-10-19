#include<iostream>
using namespace std;

void fun(int n, string arr[]) {
    if (n == 0) {
        return;
    }
    int sum = n % 10;
    fun(n / 10, arr);
    cout << arr[sum] << " ";
}

int main() {
    int num;
    cin >> num;

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    fun(num, arr);

    return 0;
}