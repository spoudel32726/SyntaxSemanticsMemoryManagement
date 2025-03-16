def create_counter():
    count = 0  # Local variable in outer scope
    def increment():
        nonlocal count  # Explicitly access outer scope
        count += 1
        return count
    return increment

# Test the counter
counter = create_counter()
print(counter())  # Output: 1
print(counter())  # Output: 2
print(counter())  # Output: 3