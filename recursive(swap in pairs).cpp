#include <cstdlib>

using namespace std;



struct ListNode {

	int val;
	ListNode(int x) :val(x),next(NULL) {};
	ListNode* next;

};

ListNode* swap(ListNode* head)
{
	if (head == NULL) return NULL;
	if (head->next== NULL)return head;
	ListNode* newhead;
	ListNode* next;
	newhead = head->next;
	
	
	head->next =swap(newhead->next);
	newhead->next = head;
	return newhead;
}
void main()
{
	
	ListNode A(1);
	A.next = new ListNode(2);
	A.next->next = new ListNode(3);
	A.next->next->next = new ListNode(4);
	ListNode* newone = swap(&A);



}