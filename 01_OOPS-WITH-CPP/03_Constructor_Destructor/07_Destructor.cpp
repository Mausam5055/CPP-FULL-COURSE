                    //Destructor :
// A destructor is a special function in C++ that is automatically called 
// when an object is destroyed. When we deifne a  dunamic contsruter 
// we also have to define a destructor , the ciomplier doesnt automacilly writes a 
// destructur for us to free the memory .Its main job is freeing up 
// the memory or closing files that were opened by the object.

// Key Points:
// 1.Name is same as the class name, but starts with ~ (tilde).
// 2.No return type and no parameters.
// 3.Runs automatically when:
// The object goes out of scope (e.g., end of the function) and
// The program ends.
// 4.Often used to deallocate memory allocated by a dynamic constructor.

// 5.Why is it needed with dynamic constructor?
// When you create a dynamic constructor that allocates memory with new, 
// the compiler does not automatically write a destructor for you to free 
// that memory.

// 6.If you don’t write one yourself, the memory will not be released — 
// this is called a memory leak.