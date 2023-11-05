#define  _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void Initcontact(Contact* pc) {
	assert(pc);

	memset(pc->data, 0, sizeof(pc->data));
	pc->sz = 0;
}

void AddContact(Contact* pc) {
	assert(pc);
	if (pc->sz == 100) {
		printf("ͨѶ¼�������޷����\n");
		return;
	}
	printf("���������֣�>");
	scanf("%s", pc->data[pc->sz].name);
	printf("���������䣺>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰��>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ��>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("�ɹ�������ϵ��\n");

}

void ShowContact(const Contact* pc) {
	int i = 0;
	printf("%-10s\t%-4s\t%-5s\t%-13s\t%-20s\n","����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < pc->sz; i++) {
		printf("%-10s\t%-4d\t%-5s\t%-12s\t%-30s\n",	pc->data[i].name,
													pc->data[i].age,
													pc->data[i].sex,
													pc->data[i].tele,
													pc->data[i].addr);
	}
	printf("\n");

}

//void DelContact(Contact* pc) {
//	if (pc->sz == 0) {
//		printf("ͨѶ¼�ǿյ�\n");
//		return 0;
//
//	}
//
//	char name[MAX_NAME] = { 0 };
//	assert(pc);
//
//	printf("������Ҫɾ�����˵����֣�>");
//	int del = 0;
//	int i = 0;
//	int flag = 0;
//	scanf("%s", &name);
//	for (i = 0; i < pc->sz; i++) {
//		if (strcmp(pc->data[i].name, name) == 0) {
//			del = i;
//			flag = 1;
//			break;
//		}
//
//	}
//	if (flag == 0) {
//		printf("Ҫɾ������ϵ�˲�����\n");
//	}
//
//	for (i = del; i < pc->sz-1 ; i++) {
//		pc->data[i] = pc->data[i + 1];
//
//
//
//	}
//	pc->sz--;
//	
//	printf("�ɹ�ɾ����ϵ��\n");
//
//
//}
int FindByname(const Contact* pc, char name[]) {
	int i = 0;


	for (i = 0; i < pc->sz; i++) {
		if (strcmp(pc->data[i].name, name) == 0) {
			return i;
		}

	}
	return -1;//�Ҳ�����
}


void DelContact(Contact* pc) {
	if (pc->sz == 0) {
		printf("ͨѶ¼�ǿյ�\n");
		return 0;

	}

	char name[MAX_NAME] = { 0 };
	assert(pc);

	printf("������Ҫɾ�����˵����֣�>");
	scanf("%s", &name);
	
	int del = FindByname(pc, name);

	if (del == -1) {
		printf("Ҫɾ������ϵ�˲�����\n");
		return;
	}
	int i = 0;
	for (i = del; i < pc->sz - 1; i++) {
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;

	printf("�ɹ�ɾ����ϵ��\n");
}

void SearchContact(Contact* pc) {
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ���ҵ��˵�����");
	scanf("%s", name);
	int pos = FindByname(pc, name);
	if (pos == -1) {
		printf("Ҫ���ҵ��˲�����\n");

	}
	else {
		printf("%-10s\t%-4s\t%-5s\t%-13s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-10s\t%-4d\t%-5s\t%-12s\t%-30s\n", pc->data[pos].name,
													pc->data[pos].age,
													pc->data[pos].sex,
													pc->data[pos].tele,
													pc->data[pos].addr);
	}

}

void ModifyContact(Contact* pc) {
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ���ҵ��˵�����");
	scanf("%s", name);
	int pos = FindByname(pc, name);
	if (pos == -1) {
		printf("Ҫ���ҵ��˲�����\n");

	}
	else {
		printf("���������֣�>");
		scanf("%s", pc->data[pc->sz].name);
		printf("���������䣺>");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("�������Ա�>");
		scanf("%s", pc->data[pc->sz].sex);
		printf("������绰��>");
		scanf("%s", pc->data[pc->sz].tele);
		printf("�������ַ��>");
		scanf("%s", pc->data[pc->sz].addr);
		printf("�޸ĳɹ�\n");

	}
}