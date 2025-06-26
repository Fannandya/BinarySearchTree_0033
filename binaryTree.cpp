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
        cout << "masukkan nilai: ";
        cin x;

        // step 1: bikin memori baru untuk new node
        node *newNode = new node();
    }
};