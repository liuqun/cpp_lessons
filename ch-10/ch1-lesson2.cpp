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
		
		if (0 == x){    //采用第一种收养方式
			//比较两种动物的进入时间
		    queue<int> *which;
		    if(!cat_queue.empty() && !dog_queue.empty()) {//猫狗队列都不为空
		        which=cat_queue.front() < dog_queue.front() ? &cat_queue : &dog_queue;
		    } else if(dog_queue.empty() && !cat_queue.empty()) {//狗队列为空&&猫队列不为空
		        which=&cat_queue;
		    } else if(cat_queue.empty() && !dog_queue.empty()) {//猫队列为空&&狗队列不为空
		        which=&dog_queue;
		    } else {
		    	//猫狗队列都为空，无法收养！ 
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
猫狗收容所
题目描述

有家动物收容所只收留猫和狗，但有特殊的收养规则，
收养人有两种收养方式，
第一种为直接收养所有动物中最早进入收容所的，
第二种为选择收养的动物类型（猫或狗），并收养该种动物中最早进入收容所的。

输入描述

给定一个操作序列代表所有事件。

若第一个元素为 1 ，则代表有动物进入收容所，
第二个元素为动物的编号，正数代表狗，负数代表猫；

若第一个元素为 2 ，则代表有人收养动物，第二个元素若为 0 ，则采取第一种收养方式，若为 1 ，则指定收养狗，若为 -1 则指定收养猫。

输出描述

请按顺序返回收养的序列。若出现不合法的操作，即没有可以符合领养要求的动物，则将这次领养操作忽略。
*/

/*
样例输入

1 1
1 -1
2 0
2 -1



样例输出

1 -1
*/
