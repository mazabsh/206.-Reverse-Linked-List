#include<iostream> 

using namespace std; 

struct ListNode{
public: 
   int val; 
   ListNode* next; 
   ListNode(): val(0), next(nullptr){}
   ListNode(int _val): val(_val), next(nullptr){}
   ListNode(int _val, ListNode* _next): val(_val), next(_next){}
};
class Solution{
public: 
    ListNode* reverseList(ListNode* head) {
      if(!head) return head; 
      ListNode* prev = nullptr; 
      ListNode* curr = head; 
      while(curr){
        ListNode* nextNode = curr ->next; 
        curr -> next= prev; 
        prev = curr; 
        curr = nextNode; 
      }
      return prev; 
    }
};
void printList(ListNode* head){
  
  while (head) {
        cout << head->val;
        if (head->next) cout << "->";  // only print arrow if not last node
        head = head->next;
    }
    cout << endl;
}
int main(){
  ListNode* head= new ListNode(1); 
  head -> next= new ListNode(2); 
  head -> next -> next = new ListNode(3); 
  head ->next ->next ->next = new ListNode(4); 
  head ->next ->next ->next ->next  = new ListNode(5); 
  printList(head); 
  Solution sol; 
  ListNode* ans = sol.reverseList(head); 
  printList(ans); 
  

  return 0; 
}
