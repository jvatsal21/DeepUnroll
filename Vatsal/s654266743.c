#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *right;
	struct node *left;
	struct node *parent;
	int key;
};
typedef struct node * Node;
#define NIL NULL

Node root;

Node treeMinimum(Node x){


}

Node treeSearch(Node u, int k){
	if(u == NIL || u->key == k)
		return u;
	if(u->key > k)
		return treeSearch(u->left, k);
	if(u->key < k)
		return treeSearch(u->right, k);
}

Node treeSuccessor(Node x){


}

void treeDelete(Node z){
	Node y; // node to be deleted
	Node x; // child of y



}

void insert(int k){
	Node y = NIL;
	Node x = root;
	Node z;

	z = (Node)malloc(sizeof(struct node));
	z->key = k;
	z->left = NIL;
	z->right = NIL;

	while(x != NIL){
		y = x;
		if(z->key < x->key)
			x = x->left;
		else
			x = x->right;
	}
	z->parent = y;
	if(y == NIL)
		root = z;
	else if(z->key < y->key)
		y->left = z;
	else
		y->right = z;


}

void inorder(Node u){
	if(u->left != NIL)
		inorder(u->left);
	printf(" %d",u->key);
	if(u->right != NIL)
		inorder(u->right);
}
void preorder(Node u){
	printf(" %d",u->key);
	if(u->left != NIL)
		preorder(u->left);
	if(u->right != NIL)
		preorder(u->right);
}


int main(){
	int n, i, x;
	char com[20];
	Node t;
	scanf("%d", &n);

	for ( i = 0; i < n; i++ ){
		scanf("%s", com);
		if ( com[0] == 'f' ){
			scanf("%d", &x);
			t = treeSearch(root, x);
			if ( t != NIL ) printf("yes\n");
			else printf("no\n");
		} else if ( com[0] == 'i' ){
			scanf("%d", &x);
			insert(x);
		} else if ( com[0] == 'p' ){
			inorder(root);
			printf("\n");
			preorder(root);
			printf("\n");
		} /*else if ( com[0] == 'd' ){
		  scanf("%d", &x);
		  treeDelete(treeSearch(root, x));
		  }*/
	}

	return 0;
}