#include <iostream>
#include <vector>
using namespace std;


struct Node{
  int value;
  Node* next;

  Node(int n){
    value = n;
    next = nullptr;
  }

  Node(int n, Node* p){
    value = n;
    next = p;
  }

};

class CircLinkedList{
private:
  Node* head;
  Node* tail;
  int size = 0;

public:
  CircLinkedList(){
    head  = nullptr;
    tail = nullptr;
  }

  void append(int val){
    Node* add = new Node(val);
    add->next = nullptr;

    if (head == nullptr){
      head = add;
      head->next = head;
      tail=head;
      size+=1;
      return;
    }

    tail->next = add;
    add->next = head;
    tail = add;
    size+=1;
  }

  int& operator[](int index){
    if (head==nullptr){
      throw range_error("Can't access element from empty list");
    }

    Node* current = head;
    for (int i=0; i<index; i++){
      current = current->next;
    }
    return current->value;

    if (index>=size){
      index = 0;
    }
  }

  void print(){
    Node* current = head;
    cout << "[";
    while (current->next != head){
      cout << current->value << ",";
      current = current->next;
    }
    cout << current->value << ",...]" << endl;
  }

  ~CircLinkedList(){
      Node* current;
      Node* next;

      current = head;

      while (current != head){
          next = current->next;
          delete current;
          current = next;
      }
  }

  CircLinkedList(int n){
      head  = nullptr;
      tail = nullptr;
      size = 0;
      for (int i=1; i<=n; i++){
          append(i);
      }
  }


  vector<int> josephus_sequence(int k){
    vector<int> vec;
    Node *current = head;
    Node* current2 = head;

    while (current != current->next){
      for (int i = 0; i < k-1; i++){
        current2 = current;
        current = current->next;
      }

      vec.push_back(current->value);
      current2->next = current->next;
      current = current2->next;
    }

    int lastman = current->value;
    vec.push_back(lastman);
    delete current;
    for (int i=0; i<size; i++){
      cout << vec[i] << endl;
    }

    size-=1;
    return vec;
  }

};


int last_man_standing(int n, int k){
    CircLinkedList list(n);
    list.josephus_sequence(k);
    return 0;
}

int main(){

  cout << last_man_standing(68,7);

  return 0;
}
