#include "header.h"

int main() {
    Node *top_1,*top_2;  //создание двух указателей на первый элемент списка

    cout<<endl;
    top_1=enter_list();
    cout<<"list 1: ";       // заполнение списка и вывод
    show_list(top_1);



    top_2=enter_list();
    cout<<"list 2: ";           // заполнение списка и вывод
    show_list(top_2);



    out_list_in_file(top_1);  // вывод первого списка в файл output.txt;


    Node *reverse_list_1_top=reverse_list(top_1);  // создание реверсивного списка первому
    cout<<"reverse list: ";
    show_list(reverse_list_1_top);


    Node * not_duplicate_list_top=not_duplicate_list(top_1);
    cout<<"list without duplicate neighboring elements:";      //список без повторяющихся соседних элементов
    show_list(not_duplicate_list_top);


    cout<<"enter element: ";
    char answer;
    if(cin>>answer){
        append_list(top_1,top_2,answer);    //добавление второго списка в конец первого
        cout<<"list_1 + list_2 after"<<answer;
        show_list(top_1);

    }
    else {

        append_list(top_1, top_2);    //добавление второго списка в конец первого
        cout << "list_1 + list_2:";
        show_list(top_1);
    }



    return 0;
}
