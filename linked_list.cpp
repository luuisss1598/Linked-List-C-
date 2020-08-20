#include <iostream>
using namespace std;

class Node
{
    public:
        int info;
        Node* move;
};

void showList(Node* show);

int main()
{
    Node* head = nullptr;
    Node* middle = nullptr;
    Node* last = nullptr;

    head = new Node();
    middle = new Node();
    last = new Node();

    head->info = 1;
    head->move = middle;

    middle->info = 2;
    middle->move = last;

    last->info = 3;
    last->move = NULL;

    showList(head);

}

void showList(Node* xx)
{
    cout << endl;
    while (xx != NULL)
    {
        cout << xx->info << " ";
        xx = xx->move;

    }
    cout << endl<<endl;
    cout << "this is the end...." << endl;
}