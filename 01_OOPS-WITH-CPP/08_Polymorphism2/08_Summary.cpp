// 🔖 Final Summary

// Base Class Pointer:
// 1.Can point to both Base and Derived class objects.
// 2.Without virtual functions → Always calls Base class functions.

// Virtual Functions:
// 1.Declared with keyword virtual in Base class.
// 2.Allow runtime polymorphism → Correct function (Base or Derived) is 
// called depending on the object.
// 3.Only applicable for function overriding.

// Usage:
// 1.Helps achieve dynamic binding.
// 2.Very useful in inheritance when we want derived functions to be accessed through Base pointers.