#include<iostream>
using namespace std;

// Time Complexity : O(1)

class queue{
	private:
		int *arr;
		int front;
		int rear;
		int size;
		
	public:
		queue(){
			size=100001;
			arr=new int[size];
			front=rear=0;
		}
		
		void enqueue(int element){
			if(rear==size){
				cout<<"queue is full"<<endl;
			}
			else{
				arr[rear]=element;
				rear++;
			}
		}
		
		int dequeue(){
			
		if(front=rear){
			cout<<"queue is empty"<<endl;
			return -1
		}else{
				int value= arr[front];
				arr[front]=-1;
				front++;
				if(front==rear){
					front=rear=0;
				}
			return value;
			}
		}

		bool isempty{

		if(front=rear){
			return  true;
		}
		else {
			return false;
		}

		}
	
};

int main(){
	return 0;
}
