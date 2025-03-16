fn create_and_use_array(size: usize) -> Vec<i32> {
    let mut arr = Vec::with_capacity(size);  // Dynamic allocation with ownership
    for i in 0..size {
        arr.push(i as i32);  // Borrowing arr mutably
    }
    arr  // Ownership transferred to caller
}

fn main() {
    let array = create_and_use_array(5);
    println!("Array: {:?}", array);  // Borrowing for display
    // Memory automatically freed when array goes out of scope
}