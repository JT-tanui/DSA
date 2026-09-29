#include <iostream>
#include <utility>
#include <vector>

class DeletionExercise {
public:
    explicit DeletionExercise(std::vector<int> values) : values(std::move(values)) {}

    bool deleteAt(std::size_t position) {
        if (position >= values.size()) {
            return false;
        }

        for (std::size_t index = position; index + 1 < values.size(); ++index) {
            values[index] = values[index + 1];
        }
        values.pop_back();
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
    DeletionExercise exercise({10, 20, 30, 40});
    exercise.deleteAt(1);
    exercise.display();
    return 0;
}