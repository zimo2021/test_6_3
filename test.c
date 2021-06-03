#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//int* addToArrayForm(int* num, int numSize, int k, int* returnSize) {
//	int kSize = 0;
//	//确定k的长度
//	int knum = k;
//	while (knum)
//	{
//		kSize++;
//		knum /= 10;
//	}
//	//开辟储存空间
//	int len = numSize>kSize ? numSize : kSize;
//	int* retarr = (int*)malloc(sizeof(int)*(len + 1));
//	//开始计算
//	int nexnum = 0;
//	int ret, numi = numSize;
//	int i = 0;
//	int x = len;
//	while (len--)
//	{
//		if (numi > 0)
//		{
//			ret = num[numi - 1] + k % 10 + nexnum;
//		}
//		else
//		{
//			ret = k % 10 + nexnum;
//		}
//		k /= 10;
//		if (ret >= 10)
//		{
//			ret -= 10;
//			nexnum = 1;
//			numi--;
//		}
//		else
//		{
//			numi--;
//			nexnum = 0;
//		}
//		retarr[i] = ret;
//		i++;
//	}
//	if (nexnum == 1)
//	{
//		retarr[x] = 1;
//		i++;
//	}
//	int left, right;
//	if (i == x)
//	{
//		left = 0, right = x-1;
//	}
//	else
//	{
//		left = 0, right = x;
//	}
//	while (left<right)
//	{
//		int tmp = 0;
//		tmp = retarr[left];
//		retarr[left] = retarr[right];
//		retarr[right] = tmp;
//		left++;
//		right--;
//	}
//	*returnSize = i;
//	return retarr;
//}
////int* addToArrayForm(int* num, int numSize, int k, int* returnSize) 
//int main()
//{
//	int i;
//	int arr[] = {1,2,0,0};
//	int num = sizeof(arr) / sizeof(int);
//	int k =34;
//	int ret = 0;
//	int* p = addToArrayForm(arr, num, k, &ret);
//	for (i = 0; i < ret; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	printf("\n");
//	return 0;
//}
//————————————————————————————————-
//链表
#include "slist.h"
//linecode* reverse(linecode* head) {
//	struct linecode* n1;
//	struct linecode* n2;
//	struct linecode* n3;
//	struct linecode* n4;
//	n1 = NULL;
//	n2 = head;
//	n3 = head->next;
//	n4 = n3->next;
//	n3 -> next = n2;
//	n2 -> next = n1;
//	while (n3 && n2)
//	{
//		n1 = n3;
//		n2 = n4;
//		if (n2)
//		{
//			n3 = n4->next;
//		}
//		if (n3)
//		{
//			n4 = n3->next;
//		}
//		if (n3 && n2)
//		{
//			n3 -> next = n2;
//			n2->next = n1;
//		}
//		if (n2 == NULL)
//		{
//			head = n1;
//		}
//		if (n3 == NULL)
//		{
//			n2->next = n1;
//			head = n2;
//		}
//	}
//	return head;
//}
//linecode* reverse(linecode* head) {
//	struct linecode* newhead = NULL;
//	struct linecode* n1, *n2;
//	n1 = head;
//	n2 = head->next;
//	newhead = n1;
//	newhead->next = NULL;
//	while (n2)
//	{
//		n1 = n2;
//		n2 = n2->next;
//		n1->next = newhead;
//		newhead = n1;
//	}
//	return n1;
//}
//linecode* remove1(linecode* head, lineconttype x)
//{
//	linecode* cur = head;
//	linecode* fron = NULL;
//	if (head == NULL)
//	{
//		return head;
//	}
//	else
//	{
//		//找头
//		while (cur->cont == x)
//		{
//			fron = cur;
//			cur = cur->next;
//			free(fron);
//			if (cur == NULL)
//			{
//				break;
//			}
//		}
//		head = cur;
//		while (cur)
//		{
//			if (cur->cont == x)
//			{
//				fron->next = cur->next;
//				free(cur);
//				cur = fron->next;
//			}
//			else
//			{
//				fron = cur;
//				cur = cur->next;
//			}
//		}
//	}
//	return head;
//}
//linecode* Midnum(linecode* head)
//{
//	linecode *ans, *end;
//	ans = head;
//	end = head;
//	while (end && end->next)
//	{
//		end = end->next->next;
//		ans = ans->next;
//	}
//	return ans;
//}
//linecode* Contback(linecode* head,int k)
//{
//	int m;
//	linecode *cur, *Test;
//	cur = head;
//	while (cur->next)
//	{
//		m = 0;
//		Test = cur;
//		while (Test)
//		{
//			m++;
//			Test = Test->next;
//		}
//		if (m == k)
//		{
//			break;
//		}
//		cur = cur->next;
//	}
//	return cur;
//}
//linecode* Conbine(linecode* head1, linecode* head2)
//{
//	linecode* head, *back = NULL, *fron = NULL;
//	int flag = 0;
//	if (head1->cont > head2->cont)
//	{
//		head = head2;
//		flag = 1;
//	}
//	else
//	{
//		head = head1;
//	}
//	if (flag == 0)
//	{
//		while (head2)
//		{
//			head1 = head;
//			back = head2->next;
//			while (head1 && ((head2->cont) > (head1->cont)))
//			{
//				fron = head1;
//				head1 = head1->next;
//			}
//			if (head1 == NULL)
//			{
//				fron->next = head2;
//				head2->next = NULL;
//				head2 = back;
//			}
//			else if (head2->cont == head1->cont)
//			{
//				head2->next = head1->next;
//				head1->next = head2;
//				head2 = back;
//			}
//			else
//			{
//				head2->next = head1;
//				fron->next = head2;
//				head2 = back;
//			}
//		}
//	}
//	else
//	{
//		while (head1)
//		{
//			head2 = head;
//			if (head1)
//			{
//				back = head1->next;
//			}
//			while (head2 && ((head1->cont) > (head2->cont)))
//			{
//				fron = head2;
//				head2 = head2->next;
//			}
//			if (head2 == NULL)
//			{
//				fron->next = head1;
//				head1->next = NULL;
//				head1 = back;
//			}
//			else if (head1->cont == head2->cont)
//			{
//				head1->next = head2->next;
//				head1->next = head2;
//				head1 = back;
//			}
//			else
//			{
//				head1->next = head2;
//				head2->next = head1;
//				head1 = back;
//			}
//		}
//	}
//	return head;
//}
//linecode* Conbine(linecode* tail1, linecode* tail2)
//{
//	linecode* head = NULL, *tail3;
//	if (tail1 == NULL)
//	{
//		return tail2;
//	}
//	else if (tail2 == NULL)
//	{
//		return tail1;
//	}
//	else
//	{
//		if (tail2->cont < tail1->cont)
//		{
//			head = tail2;
//			tail2 = tail2->next;
//		}
//		else
//		{
//			head = tail1;
//			tail1 = tail1->next;
//		}
//		tail3 = head;
//		while (tail1&&tail2)
//		{
//			if (tail1->cont <= tail2->cont)
//			{
//				tail3->next = tail1;
//				tail3 = tail3->next;
//				tail1 = tail1->next;
//			}
//			else
//			{
//				tail3->next = tail2;
//				tail3 = tail3->next;
//				tail2 = tail2->next;
//			}
//		}
//		if (tail1 == NULL)
//		{
//			tail3->next = tail2;
//		}
//		else
//		{
//			tail3->next = tail1;
//		}
//		return head;
//	}
//}
int main()
{
	linecode* s = NULL;
	linecode* k = NULL;
	//头插
	/*slistpushhead(&s, 'm');
	slistpushhead(&s, 'n');
	slistpushhead(&s, 'q');
	slistprint(&s);*/
	//头删
	/*slistpophead(&s);
	slistpophead(&s);*/

	/*slistprint(&s);*/
	//尾插
	//slistpushback(&s, 1);
	////slistpushback(&s, 'b');
	////slistpushback(&s, 'c');
	////slistpushback(&s, 'd');
	////slistpushback(&s, 'c');
	//slistpushback(&s, 2);
	//slistpushback(&s, 4);
	//slistpushback(&k, 1);
	//slistpushback(&k, 3);
	slistpushback(&k,0);
	slistprint(&s);
	slistprint(&k);
	linecode* m = Conbine(s, k);
	slistprint(&m);
	/*linecode* m = Contback(s,k);
	slistprint(&m);*/
	//尾删
	/*slistpopback(&s);
	slistpopback(&s);
	slistprint(&s);*/
	//中间插
	//slistpushmid(&s, 'a','b');//在'a'后加一个字符
	//slistpushmid(&s, 'a', 'c');//在'a'后加一个字符
	//slistprint(&s);
	//中间删
	//slistpopmid(&s, 'c');//将'c'字符删除
	//slistpopmid(&s, 'c');//将'c'字符删除

	/*slistprint(&s);*/

	return 0;
}