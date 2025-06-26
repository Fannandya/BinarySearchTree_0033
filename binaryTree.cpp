#include <iostream>
using namespace std;

class node
{
public:
    int info;
    node *leftchild;
    node *rightchild;

    // konstruktor class node
    node()
    {
        leftchild = nullptr;  // membuat leftchild menjadi NULL
        rightchild = nullptr; // membuat rightchild menjadi NULL
    }
};

class binaryTree
{
public:
    node *ROOT;

    binaryTree()
    {
        ROOT = nullptr; // membuat ROOT menjadi NULL
    }

    void insert()
    {
        int x;
        cout << "masukkan nilai: " << endl;
        cin >> x;

        // step 1: bikin memori baru untuk new node
        node *newNode = new node();

        // step 2 assign value to the data field of new node
        newNode->info = x;

        // step 3 make the left and right child of the new node point
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        // step 4 locate the node which will be the parent of the node to be
        node *parent = nullptr;
        node *currentNode = nullptr;
        search(x, parent, currentNode);

        // step 5 if parent is NULL (tree is empty)
        if (parent == nullptr)
        {
            // 5a mark the new node as ROOT
            ROOT = newNode;

            // 5b exit
            return;
        }

        // step 6 if the value in the data field of new node is less than that of parent
        if (x < parent->info)
        {
            // 6a make the left child of parent point to the new node
            parent->leftchild = newNode;

            // 6b exit
            return;
        }

        // step 7 if the value in the data field of the
        // new node os greater than that of the parent
        else if (x > parent->info)
        {
            // 7a make the right child of parent point to the new node
            parent->rightchild = newNode;

            // 7b exit
            return;
        }
    }

    void search()
    {
        // this function the searches the current node of the specified node as
        currentNode = ROOT;
        parent = nullptr;
        while ((currentNode != nullptr) && (currentNode->info != element))
        {
            parent = currentNode;
            if (element < currentNode->info)
                currentNode = currentNode->leftchild;
            else
                currentNode = currentNode->rightchild;
        }
    }
