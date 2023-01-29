#include <stdio.h>
#include <stdlib.h>

struct Node 
{
		int data;
		struct Node *next;
};

void addNodeHead(struct Node **node);
void addNodeTail(struct Node **node);
// TODO: delete insert search
void freeNode(struct Node *node);
void printNode(struct Node *node);

int main()
{
		struct Node *head = NULL;
		addNodeHead(&head);
		addNodeHead(&head);
		addNodeTail(&head);
		printNode(head);
		freeNode(head);
		return 0;
}

// 两层指向 修改传进来指针所指向的指针
void addNodeHead(struct Node **node)
{
		struct Node *n;
		n =	(struct Node *)malloc(sizeof(struct Node));
	   	if (n==NULL)
		{	
			printf("内存分配失败!!!");	
			exit(1);
		}	
		printf("请输入int类型数据:");
		scanf("%d",&n->data);

		if (*node == NULL)
		{
				*node = n;
				(*node)->next = NULL;
		}
		else
		{
				// 让新节点成为头节点
				n->next = *node;
				*node = n;
		}
}

void printNode(struct Node *node)
{
	struct Node *this = node;
	while(this)
	{
		printf("%d\n",this->data);
		this = this->next;
	}
}

void freeNode(struct Node *node)
{
		struct Node *n,*deleteMe;
		deleteMe = node;
		// 先保存下一个节点 删除当前节点之后循环
		while(deleteMe)
		{
			n = deleteMe -> next; 	
			printf("释放 %d\n",deleteMe->data);
			free(deleteMe);
			deleteMe = n;	
		}
}
	
/*
void addNodeTail(struct Node **node)
{
		struct Node *n;
		static struct Node *tail;
		n =	(struct Node *)malloc(sizeof(struct Node));
	   	if (n==NULL)
		{	
			printf("内存分配失败!!!");	
			exit(1);
		}	
		printf("请输入int类型数据:");
		scanf("%d",&n->data);

		if (*node == NULL)
		{
				*node = n;
				(*node)->next = NULL;
		}
		else
		{
				tail->next = n;
				n.next = NULL;
		}

		tail = n;
}
*/
void addNodeTail(struct Node **node)
{
		struct Node *n,*tail;
		n =	(struct Node *)malloc(sizeof(struct Node));
	   	if (n==NULL)
		{	
			printf("内存分配失败!!!");	
			exit(1);
		}	
		printf("请输入int类型数据:");
		scanf("%d",&n->data);

		if (*node == NULL)
		{
				*node = n;
				(*node)->next = NULL;
		}
		else
		{
				// 找到最后的尾结点插入
				tail = *node;		
				while(tail->next != NULL)
				{
					tail = tail->next;	
				}
				tail->next = n;
				n->next = NULL;
		}
}
