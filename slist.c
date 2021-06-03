#define _CRT_SECURE_NO_WARNINGS
#include"slist.h"
linecode* buynewcode(lineconttype x)
{
	linecode* newcode = (linecode*)malloc(sizeof(linecode));
	if (newcode == NULL)
	{
		printf("������ʧ��\n");
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
	//�����¿ռ�鲢��ֵ
	linecode* tail = *pphead;
	linecode* newcode = buynewcode(x);
	if (*pphead == NULL)
	{
		*pphead = newcode;
	}
	else
	{
		//��β
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		//�����°��
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
		//��β
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
		printf("û�и��ַ�\n");
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
				printf("û�и��ַ�\n");
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
