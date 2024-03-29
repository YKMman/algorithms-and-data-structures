#include <iostream>

// Класс ListNode для представления узла в связном списке.
class ListNode {
public:
    std::string data; // Данные, хранящиеся в узле.
    ListNode* next; // Указатель на следующий узел.

    // Конструктор с параметром для инициализации данных.
    ListNode(std::string data) : data(data), next(nullptr) {}
};

// Класс LinkedList для представления связного списка.
class LinkedList {
private:
    ListNode* head; // Указатель на первый узел списка.

public:
    LinkedList(ListNode* head = nullptr) : head(head) {}

    // Метод для получения размера списка.
    int size() {
        int count = 0;
        ListNode* node = head;
        while (node) {
            count++;
            node = node->next;
        }
        return count;
    }

    // Метод для очистки списка.
    void clear() {
        head = nullptr;
    }

    // Метод для получения последнего узла списка.
    ListNode* getLast() {
        ListNode* last_node = head;
        if (last_node) {
            while (last_node->next) {
                last_node = last_node->next;
            }
        }
        return last_node;
    }

    // Метод для получения первого узла списка.
    ListNode* getFirst() {
        return head;
    }
};

int main() {
    ListNode* node1 = new ListNode("1");
    ListNode* node2 = new ListNode("2");
    ListNode* node3 = new ListNode("3");
    node1->next = node2;
    node2->next = node3;

    LinkedList list(node1);

    std::cout << list.getFirst()->data << std::endl;

    return 0;
}


// #include <iostream>: Подключает стандартную библиотеку ввода-вывода для использования std::cout.
// class ListNode: Определение класса ListNode, который представляет узел в связном списке.
// std::string data;: Член класса ListNode, хранящий данные типа std::string.
// ListNode* next;: Указатель на следующий узел в списке.
// ListNode(std::string data) : data(data), next(nullptr) {}: Конструктор класса ListNode, инициализирующий данные и устанавливая next в nullptr.
// class LinkedList: Определение класса LinkedList, который представляет связный список.
// ListNode* head;: Указатель на первый узел списка.
// LinkedList(ListNode* head = nullptr) : head(head) {}: Конструктор класса LinkedList, инициализирующий head с помощью переданного указателя или nullptr, если указатель не передан.
// int size(): Метод для подсчета количества узлов в списке.
// void clear(): Метод для очистки списка, устанавливая head в nullptr.
// ListNode* getLast(): Метод для получения последнего узла списка.
// ListNode* getFirst(): Метод для получения первого узла списка.
// main(): Главная функция программы, где создаются узлы и список, а затем выводится данные первого узла.