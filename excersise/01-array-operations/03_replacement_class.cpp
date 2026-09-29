#include <iostream>
#include <utility>
#include <vector>

class ReplacementExercise {
public:
    explicit ReplacementExercise(std::vector<int> values) : values(std::move(values)) {}

    bool replaceAt(std::size_t position, int replacement) {
        if (position >= values.size()) {
            return false;
        }

        values[position] = replacement;
        return true;
    }

    void display() const {
        for (int value : values) {
            std::cout << value << ' ';
        }
        std::cout << '\n';
    }

private:
    std::vector<int> values;
};

int main() {
    ReplacementExercise exercise({10, 20, 30, 40});
    exercise.replaceAt(2, 99);
    exercise.display();
    return 0;
}