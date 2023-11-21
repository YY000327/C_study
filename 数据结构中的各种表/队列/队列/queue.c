#define  _CRT_SECURE_NO_WARNINGS 1
#include  "queue.h"


// ��ʼ������ 
void QueueInit(Queue* q) {
	assert(q);
	q->_front = q->_rear = NULL;
	q->size = 0;

}
// ��β����� 
void QueuePush(Queue* q, QDataType data) {
	assert(q);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL) {
		perror("malloc failed");
		exit(-1);
	}
	if (q->_rear == NULL) {
		q->_front = q->_rear = newnode;
	}
	else {
		q->_rear->_next = newnode;
		q->_rear = newnode;
	}
	q->size++;
}
// ��ͷ������ 
void QueuePop(Queue* q) {
	assert(q);
	assert(q->_front);
	QNode* del = q->_front;
	q->_front = q->_front->_next;
	free(del);
	if (q->_front == NULL)
		q->_rear == NULL;
	q->size--;
	
}
// ��ȡ����ͷ��Ԫ�� 
QDataType QueueFront(Queue* q) {
	assert(q);
	assert(q->_front);
	return q->_front->_data;
}
// ��ȡ���ж�βԪ�� 
QDataType QueueBack(Queue* q) {
	assert(q);
	assert(q->_rear);
	return q->_rear->_data;
}
// ��ȡ��������ЧԪ�ظ��� 
int QueueSize(Queue* q) {
	assert(q);
	return q->size;
}
// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
int QueueEmpty(Queue* q) {
	assert(q);
	return q->_front == NULL;
}
// ���ٶ��� 
void QueueDestroy(Queue* q) {
	assert(q);
	QNode* cur = q->_front;
	while (cur) {
		QNode* next = cur->_next;
		free(cur);
		cur = next;
	}
	q->_front = q->_rear = NULL;
	q->size = 0;

}
