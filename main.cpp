#include <iostream>
using namespace std;

struct node {
	int v;
	node* nxt;
};

node* init() {
	node* p = new node;
	p->nxt = NULL;
	return p;
}

void add(int v, node *p) {
	node *temp = p;
	node *nxt = new node;
	nxt->v = v;
	nxt->nxt = NULL;

	while(temp->nxt != NULL) temp = temp->nxt;
	temp->nxt = nxt;
}

void print(node* p) {
	node *temp = p->nxt;

	cout<<"x"<<endl;
	while(temp != NULL) {
		cout<<temp->v<<endl;
		temp = temp->nxt;
	}cout<<endl;
}

node* reverse(node* p) {
	node* q = p->nxt;
	node* t;
	p->nxt = NULL;

	while(true) {
		print(p);
		t = q;
		q = q->nxt;
		t->nxt = p->nxt;
		p = t;
	}
}

int main() {
	node* l = init();

	for(int i(0); i<10; i++) {
		add(i+1, l);
	}

	print(reverse(l));

	return 0;
}