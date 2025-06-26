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
