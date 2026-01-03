#include <iostream>
using namespace std;

struct Node
{
    ChatGptModule module;
    Node *next;
};

struct Chat
{
    int messageId;
    string question;
    string answer;
};

struct ChatGptModule
{
    Chat chat;
    string createdAtDate;
    string createdAtTime;
};

void prepend(const ChatGptModule &Chat)
{
    Node *newnode = new Node();
}

void traverse()
{
}

void removeNodeByMessage(int id)
{
}
int main()
{
    ChatGptModule = 
}