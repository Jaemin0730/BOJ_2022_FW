#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

struct Node {
	int data;
	Node* left;
	Node* right;
};

Node *insert(Node *node, int x) {
    if (node == NULL) {
        node = new Node();
        node->data = x;
        node->left = node->right = NULL;
    }
    else if (x <= node->data) {
        node->left = insert(node->left, x);
    }
    else {
        node->right = insert(node->right, x);
    }
    return node;
}

void postorder (Node* node) {
    if (node->left != NULL) {
        postorder(node->left);
    }
    if (node->right != NULL) {
        postorder(node->right);
    }
    cout << node->data << "\n";
}

int main(void)
{
    u;
    Node *root = NULL;
    int x;
    while (cin >> x) {
        if (x == EOF) {
            break;
        }
        root = insert(root, x);
    }
    postorder(root);
    return 0;
}