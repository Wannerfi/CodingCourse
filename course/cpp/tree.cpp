#include <iostream>
#include <string>

using namespace std;

class Node {
public:
    Node(string n) : name(n) {
        count = 0;
    }
    void addChild(Node* child) {
        if (count >= 10)
            return;
        children[count++] = child;
    }
    string name;
    Node* children[10]; // 数组，数组成员是指向 Node 的指针
    int count;
};

// 后序遍历
void postorderPrint(Node* parent) {
    for (int i = 0; i < parent->count; ++i) {
        postorderPrint(parent->children[i]);
    }
    cout << parent->name << " ";
}

int main() {
    Node a("A"), b("B"), c("C"), d("D"), e("E"), f("F"), g("G"), 
        h("H"), i("I"), j("J"), k("K"), l("L"), m("M");

    // 建树
    a.addChild(&b); a.addChild(&c); a.addChild(&d);
    b.addChild(&e); b.addChild(&f); b.addChild(&g);
    c.addChild(&h);
    d.addChild(&i); d.addChild(&j);
    f.addChild(&k);
    j.addChild(&l); j.addChild(&m);

    // 遍历树
    postorderPrint(&a);
    return 0;
}