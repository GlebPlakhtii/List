#include "header.h"

using namespace std;

Node *enter_list() {
    Node *first, *current;
    char answer;
    cout << "enter first char : ";
    first = current = new Node;
    cin >> current->ch;
    cout << "do you want new char? (n for exit)";
    cin >> answer;
    while (answer != 'n') {
        current->next = new Node;
        current = current->next;
        cout <<
             "enter char : ";
        cin >> current->ch;
        cout << "do you want to enter new char (n for exit)";
        cin >> answer;
    }
    current->next = nullptr;
    return first;
}

int count(Node *list) {
    int result = 0;
    if (!list) {
        cout << "List is empty";
    }
    while (list != nullptr) {
        result++;

        list = list->next;
    }
    return result;
}

void append_list(Node *list_1_top, Node *list_2_top) {
    Node *current = list_2_top;
    while (current != nullptr) {
        append_node(list_1_top, current->ch);
        current = current->next;

    }


}

void append_node(Node *top, char ch) {

    Node *current = new Node;
    current = top;
    while (current->next != nullptr) {
        current = current->next;


    }
    current->next = new Node;
    current = current->next;
    current->ch = ch;


}

Node *reverse_list(Node *top) {
    Node *r_l_top = new Node;
    Node *r_l_current = r_l_top;
    Node *current = top;
    for (int i = count(top) - 1; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            current = current->next;


        }
        r_l_current->ch = current->ch;

        append_node(r_l_top);
        r_l_current = r_l_current->next;
        current = top;

    }
    r_l_current->ch = current->ch;


    return r_l_top;


}

void out_list_in_file(Node *top) {
    ofstream fout("output.txt");
    Node *current = top;
    while (current != nullptr) {
        fout << current->ch << endl;
        current = current->next;
    }
    fout.close();
}



void show_list(Node *top) {
    Node *current = top;
    cout << endl<<endl;
    while (current != nullptr) {
        cout << current->ch << '\t';
        current = current->next;
    }
    cout << endl<<endl;
}


Node *not_duplicate_list(Node *top) {
    Node *current = top;
    Node *new_list_top = new Node;
    Node *new_list_current = new_list_top;

    new_list_top->ch = top->ch;

    current = current->next;

    while (current != nullptr) {

        if (new_list_current->ch != current->ch) {
            new_list_current->next = new Node;
            new_list_current = new_list_current->next;
            new_list_current->ch = current->ch;
        }
        current = current->next;

    }
    return new_list_top;

}



void append_list(Node *&list_1_top, Node *list_2_top, char element){
    Node *list_1_current = list_1_top;
    Node *list_2_current = list_2_top;


    while (list_1_current->ch != element && list_1_current->next != nullptr){
        list_1_current=list_1_current->next;
    }
    Node *tmp=list_1_current->next;
    list_1_current->next=list_2_current;
    while(list_1_current->next!= nullptr){
        list_1_current=list_1_current->next;
    }
    list_1_current->next=tmp;


}

//Node *append_list(Node *list_1_top, Node *list_2_top, char element) {
//
//    Node *new_list_top = new Node;
//    Node *new_list_current = new_list_top;
//    Node *list_1_current = list_1_top;
//    Node *list_2_current = list_2_top;
//
//    new_list_current->ch = list_1_current->ch;
//    list_1_current=list_1_current->next;
//
//    while (list_1_current->ch != element && list_1_current->next != nullptr) {
//        new_list_current->next = new Node;
//        new_list_current = new_list_current->next;
//        new_list_current->ch = list_1_current->ch;
//        list_1_current = list_1_current->next;
//    }
//    Node *tmp = list_1_current->next;
//
//    while (list_2_current != nullptr) {
//        new_list_current->next = new Node;
//        new_list_current = new_list_current->next;
//        new_list_current->ch = list_2_current->ch;
//        list_2_current = list_2_current->next;
//    }
//    while (tmp != nullptr) {
//        new_list_current->next = new Node;
//        new_list_current = new_list_current->next;
//        new_list_current->ch = tmp->ch;
//        tmp = tmp->next;
//
//    }
//    return new_list_top;
//
//
//}

//Node *append_list(Node *list_1_top, Node *list_2_top, char element) {
//
//    Node *new_list_top = new Node;
//    Node *new_list_current = new_list_top;
//    Node *list_1_current = list_1_top;
//    Node *list_2_current = list_2_top;
//
//    new_list_current->ch = list_1_current->ch;
//    list_1_current=list_1_current->next;
//
//    while (list_1_current->ch != element && list_1_current->next != nullptr) {
//        new_list_current->next = new Node;
//        new_list_current = new_list_current->next;
//        new_list_current->ch = list_1_current->ch;
//        list_1_current = list_1_current->next;
//    }
//    Node *tmp = list_1_current->next;
//
//    while (list_2_current != nullptr) {
//        new_list_current->next = new Node;
//        new_list_current = new_list_current->next;
//        new_list_current->ch = list_2_current->ch;
//        list_2_current = list_2_current->next;
//    }
//    while (tmp != nullptr) {
//        new_list_current->next = new Node;
//        new_list_current = new_list_current->next;
//        new_list_current->ch = tmp->ch;
//        tmp = tmp->next;
//
//    }
//    return new_list_top;
//
//
//}
