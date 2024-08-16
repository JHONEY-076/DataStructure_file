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
////case1. 자식노드가 없는경우
////case2. 왼쪽 또는 오른쪽 자식노드만 있는 경우 
////case3. 자식 노드가 둘다 있는 경우
//TreeNode* delete_node(TreeNode* root, int key)
//{
//	//root의 값이 0일때 
//	if (root == NULL) {
//		return NULL;
//	}
//	
//	//key의 값이 root가 가리키는 key 값보다 작거나 클때 이동하는 구간
//	if (key < root->key)
//		root->left = delete_node(root->left, key);
//	else if (key > root->key)
//		root->right = delete_node(root->right, key);
//	else // root가 가리키는 값이 key 값이랑 같은경우 
//	{
//		// case 2.오른쪽 자식노드만 있는 경우 
//		if (root->left == NULL) {
//			TreeNode* temp = root->right;
//			free(root);
//			return temp;// 오른쪽 자식 노드의 값을 리턴 
//		}
//		// case 2. 왼쪽 자식노드만 있는 경우 
//		else if (root->right == NULL)
//		{
//			TreeNode* temp = root->left;
//			free(root);
//			return temp; //왼쪽 자식 노드의 값을 리턴
//		}
//		// case 1.자식 노드가 없는 경우 
//		else if (root->left == NULL && root->right == NULL) {
//			free(root);
//			return NULL;
//		}
//
//		//case 3. 자식 노드가 둘다 있는 경우
//		else {
//			TreeNode* temp = max_value_node(root->left); //왼쪽 자식 노드 중 최대값을 찾아 
//
//			root->key = temp->key;// 왼쪽 자식 중 최댓값을 삭제 노드로 대입 
//			root->left = delete_node(root->left, temp->key);//다시 제거하러 출발!!
//		}
//		}
//	return root;
//}
//
//
//void inorder(TreeNode* root)
//{
//	if (root)//NULL이 아닌 경우 
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
