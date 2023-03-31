#include <iostream>
#include <stack>
using namespace std;
void UndoBack();
void RedoF();
void newComm();
stack<string> undoStr;
stack<string> redoStr;

void UndoBack()
{
    if (undoStr.size() == 0)
    {
        cout << "\nCommand not avaliable.";
    }
    else
    {
        redoStr.push(undoStr.top());
        undoStr.pop();
    }
}
void RedoF()
{
    if (redoStr.size() == 0)
    {
        cout << "\nCommand not avaliable.";
    }
    else
    {
        undoStr.push(redoStr.top());
        redoStr.pop();
    }
}
void newComm()
{
    string command;
    cout << "\nEnter new command: ";
    cin >> command;
    undoStr.push(command);
    redoStr.empty();
}

int main()
{

    cout << "\n*************************";
    cout << "\n-> PAWAN NEGI - 22MCA0348 <-";
    cout << "\n*************************";
    int choice;
    do
    {
        if (undoStr.size() == 0)
        {
            cout << "\n\nLast Command-> "
                 << "NO COMMANDS FOUND\n";
        }
        else
        {
            cout << "\n\nLast Command-> " << undoStr.top() << "\n";
        }
        cout << "\n1. New Command\n2. Undo\n3. Redo\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            newComm();
            break;
        case 2:
            UndoBack();
            break;
        case 3:
            RedoF();
            break;
        case 4:
            cout << "\nExiting...";
            break;
        default:
            cout << "\nInvalid option!!!";
        }
    } while (choice != 4);
    return 0;
}