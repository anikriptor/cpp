#include <iostream>

int main() {

  std::cout << "Hello Mom!\n";
    // 1. Definition vs. Assignment
    int a;         // Default-initialization (contains indeterminate/garbage value)
    a = 10;        // Copy assignment

    // 2. Different forms of initialization
    int b = 5;     // Copy-initialization (inherited from C)
    int c(6);      // Direct-initialization

    // 3. List/Brace initialization (Preferred in modern C++)
    int d{7};      // Direct-list-initialization (explicit value)
    int e = {8};   // Copy-list-initialization

    // 4. Value-initialization & Zero-initialization
    int f{};       // Value-initialization (initializes to 0)

    // 5. Narrowing conversions prevention
    // Brace initialization prevents accidental data loss.
    // Uncommenting the next line will produce a compiler error:
    // int narrow{ 4.5 }; 

    // 6. [[maybe_unused]] attribute (C++17)
    // Silences compiler warnings if a variable is defined but never used
    [[maybe_unused]] int ignored_val{42};

    // Output values to verify initialization
    std::cout << "Assigned a: " << a << '\n';
    std::cout << "Copy initialized b: " << b << '\n';
    std::cout << "Direct initialized c: " << c << '\n';
    std::cout << "List initialized d: " << d << '\n';
    std::cout << "Copy-list initialized e: " << e << '\n';
    std::cout << "Zero-initialized f: " << f << '\n';

    // Input Output
    std::cout << "Input a number : ";
    std::cin >> ignored_val;
    std::cout << "Your value is " << ignored_val << '\n';


    // Double input in one line
    std::cout << "Input two numbers seperated by a space\n";
    int ab{},cd{};
    std::cin >> ab >> cd;
    std::cout << "You entered " << ab << " and " << cd << '\n';

    return 0;
}
