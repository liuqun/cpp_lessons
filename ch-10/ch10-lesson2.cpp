#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

enum WhatHappened {
	GOT_NEW_PET = 1,
	ADOPTING_NEXT_PET = 2,
};
struct AnimalRecord {
	int serial;
	int animalName;
};
int main()
{
	int what_happened=-1;
	int x=0;
	
	queue<int> dog_queue;
	queue<int> cat_queue;
	queue<int> *queues[3] = {&cat_queue, nullptr, &dog_queue};
	
	vector<int> pet_adoption_history;
	
	int serial;
	AnimalRecord rec;
	
	serial = 1;
	int got;
    while ((got = scanf("%d %d", &what_happened, &x)) == 2) {
        if (GOT_NEW_PET == what_happened) {
        	rec.serial = serial;
        	rec.animalName = x;
        	queues[x+1]->push(rec.serial);
        	queues[x+1]->push(rec.animalName);
        	serial++;
        	continue;
		}
		
		if (x<0 && !cat_queue.empty()) {
			cat_queue.pop();
			pet_adoption_history.push_back(cat_queue.front());
			cat_queue.pop();
			continue;
		}
		
		if (x>0 && !dog_queue.empty()) {
			dog_queue.pop();
			pet_adoption_history.push_back(dog_queue.front());
			dog_queue.pop();
			continue;
		}
		
		if (0 == x){    //���õ�һ��������ʽ
			//�Ƚ����ֶ���Ľ���ʱ��
		    queue<int> *which;
		    if(!cat_queue.empty() && !dog_queue.empty()) {//è�����ж���Ϊ��
		        which=cat_queue.front() < dog_queue.front() ? &cat_queue : &dog_queue;
		    } else if(dog_queue.empty() && !cat_queue.empty()) {//������Ϊ��&&è���в�Ϊ��
		        which=&cat_queue;
		    } else if(cat_queue.empty() && !dog_queue.empty()) {//è����Ϊ��&&�����в�Ϊ��
		        which=&dog_queue;
		    } else {
		    	//è�����ж�Ϊ�գ��޷������� 
		    	continue;
			}

			which->pop();
			pet_adoption_history.push_back(which->front());
			which->pop();
		}
        
    }
    for (auto pet : pet_adoption_history) {
    	cout << pet << " ";
	}
	cout << endl;
	return 0;
}

/*
è��������
��Ŀ����

�мҶ���������ֻ����è�͹��������������������
������������������ʽ��
��һ��Ϊֱ���������ж�������������������ģ�
�ڶ���Ϊѡ�������Ķ������ͣ�è�򹷣������������ֶ�������������������ġ�

��������

����һ���������д��������¼���

����һ��Ԫ��Ϊ 1 ��������ж��������������
�ڶ���Ԫ��Ϊ����ı�ţ�������������������è��

����һ��Ԫ��Ϊ 2 �������������������ڶ���Ԫ����Ϊ 0 �����ȡ��һ��������ʽ����Ϊ 1 ����ָ������������Ϊ -1 ��ָ������è��

�������

�밴˳�򷵻����������С������ֲ��Ϸ��Ĳ�������û�п��Է�������Ҫ��Ķ������������������ԡ�
*/

/*
��������

1 1
1 -1
2 0
2 -1



�������

1 -1
*/
