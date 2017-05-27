#include <iostream>

#ifndef TREENODE_H
#define TREENODE_H



class TreeNode{
 public:
  TreeNode();
  ~TreeNode();
  TreeNode* getRight();
  TreeNode* getLeft();

  void setLeft(TreeNode* newLeft);
  void setRight(TreeNode* newRight);
  int getValue();
  void setValue(int newvalue);
  void setParent(TreeNode* newParent);
  TreeNode* getParent();
  int getColor();
  void setColor(int newColor);
 private:
  
  TreeNode* left;
  TreeNode* right;
  int value;
  TreeNode* parent;
  int color;
};

#endif
