#include <cstdlib>
#include <stdio.h>
#include <string>

class MyTree {
public:
  class MyNode {
  private:
    int key;
    MyNode *left;
    MyNode *right;

  public:
    int value;

    MyNode(int k, int val) {
      key = k;
      value = val;
      left = NULL;
      right = NULL;
    }
    int Key() { return key; }
    bool IsLeaf() { return (left == NULL) && (right == NULL); }

    MyNode *next(int other) {
      if (other > key)
        return right;
      else
        return left;
    }

    std::string toString() { return std::to_string(key); }
  };

  MyNode *root;

  MyTree(int key, int value) { root = new MyNode(key, value); }

  bool IsEmpty() { return root == NULL; }

  int Search(int key) {
    MyNode *node = SearchNode(key);
    if (node == NULL)
      return -1;
    else
      return node->value;
  }

  MyNode *SearchNode(int key) { return SearchNode(root, key); }

  MyNode *SearchNode(MyNode *node, int key) {
    if (node == NULL)
      return NULL;
    else if (node->Key() == key)
      return node;
    else
      SearchNode(node->next(key), key);
  }
};

int main() {
  MyTree *t = new MyTree(7, 4);

  return 0;
}
