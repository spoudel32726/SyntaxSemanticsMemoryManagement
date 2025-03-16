function createCounter() {
    let count = 0;  // Local variable in outer scope
    return function increment() {  // Anonymous inner function
        count += 1;  // Implicitly accesses outer scope
        return count;
    };
}

// Test the counter
const counter = createCounter();
console.log(counter());  // Output: 1
console.log(counter());  // Output: 2
console.log(counter());  // Output: 3