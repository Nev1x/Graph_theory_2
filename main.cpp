#include <iostream>
#include <vector>
#include <algorithm>

// Структура для представления дуги
struct Edge {
    char start;  // Начальная вершина
    char end;    // Конечная вершина

    // Конструктор
    Edge(char s, char e) : start(s), end(e) {}
};

// Функция для сортировки
bool compareEdges(const Edge& a, const Edge& b) {
    if (a.start != b.start)
        return a.start < b.start;  // Сортировка по начальной вершине
    return a.end < b.end;          // Если начальные совпадают, сортировка по конечной вершине
}

int main() {
    // Исходный список дуг
    std::vector<Edge> edges = {
            {'C', 'A'},
            {'A', 'D'},
            {'A', 'B'},
            {'B', 'D'},
            {'C', 'B'}
    };

    // Сортировка дуг
    std::sort(edges.begin(), edges.end(), compareEdges);

    // Вывод отсортированного списка дуг
    std::cout << "Отсортированные дуги:" << std::endl;
    for (const auto& edge : edges) {
        std::cout << "(" << edge.start << ", " << edge.end << ")" << std::endl;
    }

    return 0;
}