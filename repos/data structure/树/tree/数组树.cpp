//结构数组表示二叉树：静态链表
//DEV无法通过
#include <stdio.h>
#include <stdlib.h>

#define MaxTree 10
#define ElementType char
#define Tree int
#define Null -1


struct TreeNode {
	ElementType Element;
	Tree Left;
	Tree Right;
} T1[MaxTree], T2[MaxTree];

//创建二叉树
Tree BuildTree(struct TreeNode T[]) {
	int i, N, Root = 0;
	char cl, cr;
	int check[MaxTree] = {0}; //为判断根节点
	scanf("%d\n", &N);
	if (N) {
		for (i = 0; i < N; i++) {
			scanf("%c %c %c", &T[i].Element, &cl, &cr);
			if (cl != '-') {
				T[i].Left = cl - '0'; //把输入的字符型转换成int
				check[T[i].Left] = 1; //设为1就不是根节点
			} else
				T[i].Left = Null;
			if (cr != '-') {
				T[i].Right = cr - '0';
				check[T[i].Right] = 1;
			} else
				T[i].Right = Null;
		}
		for (i = 0; i < N; i++) {
			if (!check[i])
				break;
		}
		Root = i;
	}
	return Root;
}

//判断两二叉树同构
int Isomorphic(Tree R1, Tree R2) {
	if (R1 == Null && R2 == Null)
		return 1;
	if ((R1 == Null && R2 != Null) || (R1 != Null && R2 == Null))
		return 0;
	if (T1[R1].Element != T2[R2].Element )
		return 0;
	if ((T1[R1].Left == Null) && (T2[R2].Left == Null))
		return Isomorphic(T1[R1].Right, T2[R2].Right );
	if (((T1[R1].Left != Null) && (T2[R2].Left != Null))
	        && ((T1[T1[R1].Left].Element) == (T2[T2[R2].Left].Element)))
		return (Isomorphic(T1[R1].Left, T2[R2].Left) && Isomorphic(T1[R1].Right, T2[R2].Right));
	else
		return (Isomorphic(T1[R1].Left, T2[R2].Right) && Isomorphic(T1[R1].Right, T2[R2].Left));
}

int main() {
	Tree R1, R2;
	R1 = BuildTree(T1);
	R2 = BuildTree(T2);
	if (Isomorphic(R1, R2)) {
		printf("是同构树\n");
	} else
		printf("不是同构树\n");

	return 0;
}
