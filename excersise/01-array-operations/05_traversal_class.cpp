#include <iostream>
#include <utility>
#include <vector>

class TraversalExercise {
public:
    explicit TraversalExercise(std::vector<int> values) : values(std::move(values)) {}

    void display() const {
        for (std::size_t index = 0; index < values.size(); ++index) {
            std::cout << "index " << index << ": " << values[index] << '\n';
        }
    }

private:
    std::vector<int> values;
};

int main() {
    const TraversalExercise exercise({10, 20, 30, 40});
    exercise.display();
    return 0;
}