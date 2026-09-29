#include <iostream>
#include <vector>

void depthFirstSearch(const std::vector<std::vector<int>>& graph, int vertex, std::vector<bool>& visited) {
    visited[vertex] = true;
    std::cout << vertex << ' ';
    for (int neighbor : graph[vertex]) {
        if (!visited[neighbor]) {
            depthFirstSearch(graph, neighbor, visited);
        }
    }
}

int main() {
    const std::vector<std::vector<int>> graph{{1, 2}, {0, 3}, {0}, {1}};
    std::vector<bool> visited(graph.size(), false);
    depthFirstSearch(graph, 0, visited);
    std::cout << '\n';
    return 0;
}