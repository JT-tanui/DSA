#include <iostream>
#include <limits>
#include <queue>
#include <utility>
#include <vector>

std::vector<int> shortestPaths(const std::vector<std::vector<std::pair<int, int>>>& graph, int start) {
    const int infinity = std::numeric_limits<int>::max();
    std::vector<int> distances(graph.size(), infinity);
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<>> pending;
    distances[start] = 0;
    pending.push({0, start});

    while (!pending.empty()) {
        const auto [distance, vertex] = pending.top();
        pending.pop();
        if (distance != distances[vertex]) {
            continue;
        }
        for (const auto [neighbor, weight] : graph[vertex]) {
            if (distance + weight < distances[neighbor]) {
                distances[neighbor] = distance + weight;
                pending.push({distances[neighbor], neighbor});
            }
        }
    }
    return distances;
}

int main() {
    const std::vector<std::vector<std::pair<int, int>>> graph{
        {{1, 4}, {2, 1}}, {{3, 1}}, {{1, 2}, {3, 5}}, {}}
    };
    for (int distance : shortestPaths(graph, 0)) {
        std::cout << distance << ' ';
    }
    std::cout << '\n';
    return 0;
}