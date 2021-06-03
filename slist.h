#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int lineconttype;
typedef struct linecode {
	lineconttype cont;
	struct linecode* next;
}linecode;
void slistpushback(linecode** p, lineconttype x);
void slistpopback(linecode** p);
void slistpushhead(linecode** p, lineconttype x);
void slistpophead(linecode** p);
void slistprint(linecode** p);
void slistpushmid(linecode** p, lineconttype x, lineconttype y);
void slistpopmid(linecode** p, lineconttype x);