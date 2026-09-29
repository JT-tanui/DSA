#include <iostream>
#include <utility>
#include <vector>

class SearchExercise {
public:
    explicit SearchExercise(std::vector<int> values) : values(std::move(values)) {}

    int find(int target) const {
        for (std::size_t index = 0; index < values.size(); ++index) {
            if (values[index] == target) {
                return static_cast<int>(index);
            }
        }
        return -1;
    }

private:
    std::vector<int> values;
};

int main() {
    const SearchExercise exercise({10, 20, 30, 40});
    std::cout << exercise.find(30) << '\n';
    return 0;
}