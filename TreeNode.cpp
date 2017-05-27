#include <iostream>
#include "TreeNode.h"
#include <string.h>


using namespace std;


TreeNode::TreeNode(){
  left = NULL;
  right = NULL;
  parent = NULL;
  color = 0;
  //0 Is red
  //1 is black
}


TreeNode::~TreeNode(){
  
}

int TreeNode::getColor(){
  return color;
}

void TreeNode::setColor( int newColor){
  color = newColor;
}
void TreeNode::setLeft(TreeNode* newLeft){
  left = newLeft;
}

void TreeNode::setRight(TreeNode* newRight){
  right = newRight;
}

TreeNode* TreeNode::getLeft(){
  return left;
}

TreeNode* TreeNode::getRight(){
  return right;
}

int TreeNode::getValue(){
  return value;
}

void TreeNode::setValue(int newvalue){
  value = newvalue;
}


TreeNode* TreeNode::getParent(){
  return parent;
}

void TreeNode::setParent(TreeNode* newParent){
  parent = newParent;
}




