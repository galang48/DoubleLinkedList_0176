#include <iostream>
#include <string>
using namespace std;

struct Node 
{
    int noMhs;
    string name;
    Node *next;
    Node *prev;
};

Node *START = NULL;

void addNode() {
    Node* newNode = new Node(); // step 1: create a new mode
    cout << "\nEnter the role number of the student: ";
    cin >> newNode->noMhs;      // Assign value to the data field of the new node
    cout << "\nEnter the name of the student: ";
    cin >> newNode->name;       // Assign value to the data field of the new mode


    // Insert the new mode in the list
    if (START == NULL || newNode->noMhs <= START->noMhs) {
        
        if (START != NULL && newNode->noMhs == START->noMhs) {
            cout << "\033[31mDuplicate roll numbers not allowed\033[0m" << endl;
            return;
        }
    }
}
int main()
{
    
}

