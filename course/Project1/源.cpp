#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class Node {
public:
    string name;
};

// 全局作用域
Node nodes[200];
int amap[200][200];

int main() {
    // init
    memset(amap, 0, sizeof(amap)); // 数组元素按字节置零
    // 'A' = 65
    nodes['A'].name = "A"; nodes['B'].name = "B"; nodes['C'].name = "C";
    nodes['D'].name = "D"; nodes['E'].name = "E"; nodes['F'].name = "F";

    // build map
    amap['A']['B'] = 1; amap['D']['A'] = 1; amap['A']['C'] = 1;
    amap['C']['F'] = 1; amap['F']['C'] = 1; amap['C']['E'] = 1;
    amap['E']['D'] = 1; amap['F']['E'] = 1; amap['F']['D'] = 1;
    amap['D']['B'] = 1;

    // 打印图
    cout << "\t";
    for (int i = 'A'; i <= 'F'; ++i)
        cout << to_string(i) << "\t";
    cout << endl;
    // i 在局部作用域
    for (int i = 'A'; i <= 'F'; ++i) {
        cout << i << ": \t";
        for (int j = 'A'; j <= 'F'; ++j) {
            cout << amap[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}