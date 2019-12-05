#include <iostream>
#include <fstream>

using namespace std;
struct Node {
    char ch;
    Node *next;
};   // структра узла списка

Node *enter_list();   // ввод списка

int count(Node *);  // количество элементов списка

void append_list(Node *list_1_top, Node *list_2_top); // добавлене  второго  списка в конец первого

void append_node(Node *top, char ch = ' '); // добавление узла в конец списка , призваивание ch list->ch

Node *reverse_list(Node *top); // возвращает список элементы которого размещены в обратном порядке относительного введенного

void out_list_in_file(Node *top); //вывод списка в файл (output.txt)

void show_list(Node *top);  // вывод списка в консоль

Node *not_duplicate_list(Node *top);  // возвращает список элементы соседнии элементы которого не повторяються

void append_list(Node *&, Node *,char element); // добавляет все элементы второго списка после первого вхождения element первого списка


//void delete_element(Node *&top,int index); // удаление узла по индексу
