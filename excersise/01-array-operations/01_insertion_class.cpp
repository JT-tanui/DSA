#include <iostream>
#include <utility>
#include <vector>

class InsertionExercise {
public:
    explicit InsertionExercise(std::vector<int> values) : values(std::move(values)) {}

    bool insertAt(std::size_t position, int value) {
        if (position > values.size()) {
            return false;
        }

        values.push_back(0);
        for (std::size_t index = values.size() - 1; index > position; --index) {
            values[index] = values[index - 1];
        }
        values[position] = value;
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
    InsertionExercise exercise({10, 20, 40, 50});
    exercise.insertAt(2, 30);
    exercise.display();
    return 0;
}