// ❓ Why const in Copy Constructor?

// Student(const Student &s)
// The const is used to ensure that the original object being copied is not modified 
// during  the copy process.

// 🔍 What does const Student &s mean?
// Student &s → Reference to another object of the same class.

// const → You promise not to change the original object inside the copy constructor.
// ✅ Why it's important:
// Safety: Prevents accidental changes to the original object.
// Allows copying of const objects:

const Student s1(10);
Student s2 = s1; // Only works if copy constructor takes const reference

// Best practice: Since we are only reading from the object during copy, it should not be 
// modified.

// 🚫 Without const:
// If you write:


Student(Student &s)  // No const

// You can't pass a const Student to it.
// It might allow unintentional changes to the original object.


// ✅ Always use:

Student(const Student &s)

// It's safe, efficient, and a standard practice in C++.

