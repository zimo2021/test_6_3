#define _CRT_SECURE_NO_WARNINGS
#include"slist.h"
linecode* buynewcode(lineconttype x)
{
	linecode* newcode = (linecode*)malloc(sizeof(linecode));
	if (newcode == NULL)
	{
		printf("申请结点失败\n");
		exit(-1);
	}
	else
	{
		newcode->cont = x;
		newcode->next = NULL;
		return newcode;
	}
}
void slistpushback(linecode** pphead, lineconttype x)
{
	//创建新空间块并赋值
	linecode* tail = *pphead;
	linecode* newcode = buynewcode(x);
	if (*pphead == NULL)
	{
		*pphead = newcode;
	}
	else
	{
		//找尾
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		//串联新板块
		tail->next = newcode;
	}
}
void slistprint(linecode** p)
{
	linecode* tail = *p;
	if (tail == NULL)
	{
		printf("NULL\n");
		return;
	}
	while (tail->next)
	{
		printf("%d->", tail->cont);
		tail = tail->next;
	}
	printf("%d->", tail->cont);
	printf("NULL\n");
}
void slistpopback(linecode** ppback)
{
	linecode* tail = *ppback;
	linecode* prev = *ppback;
	if (*ppback == NULL)
	{
		free(*ppback);
	}
	else
	{
		//找尾
		while (tail->next)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;
	}
}
void slistpushhead(linecode** pphead, lineconttype x)
{
	linecode* newcode = buynewcode(x);
	newcode->next = *pphead;
	*pphead = newcode;
}
void slistpushmid(linecode** p, lineconttype x, lineconttype y)
{
	linecode* newcode = buynewcode(y);
	if (*p == NULL)
	{
		*p = newcode;
	}
	linecode* goal = *p;
	while (goal->cont != x)
	{
		goal = goal->next;
	}
	newcode->next = goal->next;
	goal->next = newcode;
}
void slistpopmid(linecode** p, lineconttype x)
{
	linecode* goal = *p;
	linecode* prev = *p;
	if (*p == NULL)
	{
		printf("没有该字符\n");
		exit(-1);
	}
	else
	{
		while (goal->cont != x )
		{
			prev = goal;
			goal = goal->next;
			if (goal->next == NULL)
			{
				printf("没有该字符\n");
				return;
			}
		}
		prev->next = goal->next;
		free(goal);
	}

}
void slistpophead(linecode** pphead)
{
	if (*pphead == NULL)
	{
		return;
	}
	else
	{
		linecode* p = *pphead;
		*pphead = p->next;
		free(p);
	}
}
