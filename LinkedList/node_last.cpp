#include <iostream>

using namespace std;


struct Node{
  int data;
  Node *link;
}

Node* Generate(int data){
  Node *temp = new Node();
  temp->data = data;
  temp->link = NULL;

  return temp;
}

Node* Insert(Node *head,int data){

if(head == NULL){
  head = Generate(data);
}else{
  Node *temp = head;
  while(temp->link != NULL){
    temp = temp->link;
  }
  temp->link = Generate(data);
}

  return head;
}


int main(){

Node *root = NULL;

}
