#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <memory>

struct Entity {
    int id;
    std::string name;
    float health{100.0f};

    void take_damage(float amount) {
        health -= amount;
        std::cout << "[Entity " << name << "] Took " << amount 
                  << " damage. Remaining HP: " << health << "\n";
    }
};

int calculate_fibonacci(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1;
    for (int i = 2; i <= n; ++i) {
        int next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main(int argc, char* argv[]) {
    std::cout << "=== LLDB & Clang Toolchain Test ===" << "\n";

    // 1. Test standard containers and basic arithmetic
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    int total_sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    std::cout << "Sum of vector elements: " << total_sum << "\n";

    // 2. Test functions and step-in debugging
    int fib_input = 7;
    int fib_result = calculate_fibonacci(fib_input); // <-- Set a breakpoint here to step into
    std::cout << "Fibonacci(" << fib_input << ") = " << fib_result << "\n";

    // 3. Test pointers, memory, and struct inspection
    auto player = std::make_unique<Entity>(Entity{1, "PlayerOne", 100.0f});
    player->take_damage(25.5f);
    player->take_damage(35.0f); // <-- Set a breakpoint here to inspect `player` struct in debugger

    std::cout << "Final Player Status: " << player->name 
              << " | HP: " << player->health << "\n";

    std::cout << "=== All tests completed successfully ===" << "\n";
    return 0;
}