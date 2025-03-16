#include <iostream>
#include <functional>  // For std::function
using namespace std;

function<int()> createCounter() {
    int count = 0;  // Local variable in outer scope
    auto increment = [count]() mutable {  // Lambda captures count by value, mutable allows modification
        count += 1;
        return count;
    };
    return increment;
}

int main() {
    auto counter = createCounter();
    cout << counter() << endl;  // Output: 1
    cout << counter() << endl;  // Output: 2
    cout << counter() << endl;  // Output: 3
    return 0;
}