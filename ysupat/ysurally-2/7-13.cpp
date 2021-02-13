#include <cstdio>
#include <queue>
#include <iostream>

using namespace std;
struct node {
    int data;
    node *lchild;
    node *rchild;
};
int result[25];
int cnt = 0;

node *newNode(int v) {
    node *Node = new node;
    Node->data = v;
    Node->lchild = Node->rchild = NULL;
    return Node;
}

void insert(node *&root, int x) {
    if (root == NULL) {
        root = newNode(x);
        return;
    }
    if (x > root->data) {
        insert(root->lchild, x);
    } else {
        insert(root->rchild, x);
    }
}

node *create(int data[], int n) {
    node *root = NULL;
    for (int i = 0; i < n; i++) {
        insert(root, data[i]);
    }
    return root;
}

bool flag = true;

void LayerOrder(node *root) {
    queue<node *> q;
    q.push(root);
    bool leaf = false;
    //leaf变量用来标记一个状态是否发生
    // （只要当前节点的左孩子和右孩子都为空或者左孩子不为空，右孩子为空时，这个状态就发生，
    // 只要发生了这个状态，以后访问到的节点必须都是叶节点）
    while (!q.empty()) {
        node *now = q.front();
        q.pop();
        result[cnt] = now->data;
        cnt++;
        if ((leaf && (now->lchild != NULL || now->rchild != NULL)) || (now->lchild == NULL && now->rchild !=NULL))//这些判断条件是所有的不满足是完全二叉树的条件。条件一（第二个||前面的条件）：上述的状态已经发生，但是当前访问到的节点不是叶节点（有左孩子或者右孩子）。条件二：当前节点有右孩子，没有左孩子
            flag = false;
        if (now->lchild != NULL) q.push(now->lchild);
        if (now->rchild != NULL) q.push(now->rchild);
        if ((now->lchild != NULL && now->rchild == NULL) ||
            (now->lchild == NULL && now->rchild == NULL))//这个if语句就是判断状态是否要发生
            leaf = true;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int data[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }
    node *root = create(data, n);
    LayerOrder(root);
    for (int i = 0; i < cnt - 1; i++) {
        cout << result[i] << " ";
    }
    cout << result[cnt - 1] << endl;
    if (flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}


