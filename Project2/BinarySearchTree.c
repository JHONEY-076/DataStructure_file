//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct TreeNode {
//	int key;
//	struct TreeNode* left, * right;
//}TreeNode;
//
//
//TreeNode* new_node(int item)
//{
//	TreeNode* temp = (TreeNode*)malloc(sizeof(TreeNode));
//	temp->key = item;
//	temp->left = temp->right = NULL;
//	return temp;
//}
//
//
//TreeNode* insert_node(TreeNode* node, int key)
//{
//	if (node == NULL) {
//		return new_node(key);
//	}
//
//	if (key < node->key) {
//		node->left = insert_node(node->left,key);
//	}
//	else if (key > node->key) {
//		node->right = insert_node(node->right, key);
//	}
//	return node;
//}
//
//
//TreeNode* search(TreeNode* node, int key)
//{
//	/*Binary Search*/
//	if (node == NULL) {
//		return NULL;
//	}
//
//	if (node->key == key) {
//		return node;
//	}
//	else if (node->key > key) {
//		return search(node->left, key);
//	}
//	else {
//		return search(node->right, key);
//	}
// 
//}
//
//TreeNode* max_value_node(TreeNode* node)
//{
//	TreeNode* cur = node;
//
//	while (cur->right != NULL) 
//		cur = cur->right;
//	return cur;
//}
//
//TreeNode* min_value_node(TreeNode* node)
//{
//	TreeNode* cur = node;
//
//	while (cur->left != NULL)
//		cur = cur->left;
//	return cur;
//}
//
//
//
//
////case1. �ڽĳ�尡 ���°��
////case2. ���� �Ǵ� ������ �ڽĳ�常 �ִ� ��� 
////case3. �ڽ� ��尡 �Ѵ� �ִ� ���
//TreeNode* delete_node(TreeNode* root, int key)
//{
//	//root�� ���� 0�϶� 
//	if (root == NULL) {
//		return NULL;
//	}
//	
//	//key�� ���� root�� ����Ű�� key ������ �۰ų� Ŭ�� �̵��ϴ� ����
//	if (key < root->key)
//		root->left = delete_node(root->left, key);
//	else if (key > root->key)
//		root->right = delete_node(root->right, key);
//	else // root�� ����Ű�� ���� key ���̶� ������� 
//	{
//		// case 2.������ �ڽĳ�常 �ִ� ��� 
//		if (root->left == NULL) {
//			TreeNode* temp = root->right;
//			free(root);
//			return temp;// ������ �ڽ� ����� ���� ���� 
//		}
//		// case 2. ���� �ڽĳ�常 �ִ� ��� 
//		else if (root->right == NULL)
//		{
//			TreeNode* temp = root->left;
//			free(root);
//			return temp; //���� �ڽ� ����� ���� ����
//		}
//		// case 1.�ڽ� ��尡 ���� ��� 
//		else if (root->left == NULL && root->right == NULL) {
//			free(root);
//			return NULL;
//		}
//
//		//case 3. �ڽ� ��尡 �Ѵ� �ִ� ���
//		else {
//			TreeNode* temp = max_value_node(root->left); //���� �ڽ� ��� �� �ִ밪�� ã�� 
//
//			root->key = temp->key;// ���� �ڽ� �� �ִ��� ���� ���� ���� 
//			root->left = delete_node(root->left, temp->key);//�ٽ� �����Ϸ� ���!!
//		}
//		}
//	return root;
//}
//
//
//void inorder(TreeNode* root)
//{
//	if (root)//NULL�� �ƴ� ��� 
//	{
//		inorder(root->left);
//		printf("%d ", root->key);
//		inorder(root->right);
//	}
//}
//
//
//int main(int argc, const char* argv[]) {
//
//	TreeNode* root = NULL;
//
//	root = insert_node(root, 20);
//	root = insert_node(root, 10);
//	root = insert_node(root, 25);
//	root = insert_node(root, 5);
//	root = insert_node(root, 15);
//	root = insert_node(root, 30);
//	inorder(root);
//	printf("\n\n");
//
//	delete_node(root, 15);
//
//	inorder(root);
//
//	if (search(root, 30))
//		printf("\n There is %d\n", 30);
//	else
//		printf("\n There isn't %d\n", 30);
//
//	return 0;
//
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
