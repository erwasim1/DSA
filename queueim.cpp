#include<iostream>
using namespace std;
class Queue{
	private:
		int front;
		int rear;
		int arr[5];
		public:
	Queue(){
		int front=-1;
		int rear=-1;
		for(int i=0;i<5;i++){
			arr[i]=0;
		}
	}	
	bool Isempty(){
		if(front==-1 && rear==-1)
		return true;
		else 
		return false;
	}	
	bool IsFull(){
		if(rear==4)
		return true;
		else 
		return false;
	}
	
void Enqueue(int val){
	if(IsFull()){
		cout<<"the queue is full"<<endl;
		return ;
	
	}
	else if(Isempty()){
		rear=0;
		front=0;
		arr[rear]=val;
	}
	else{
		rear++;
		arr[rear]=val;
	}
}	
	
int dequeue(){
	int x;
	if(Isempty()){
		cout<<"the queque is empty"<<endl;
		return 0;
		
	}
	else if(front==rear){
	 x=arr[front];
	 arr[front]=0;
	 rear=-1;
	 front=-1;
	 return x;
	}
	else{
		x=arr[front];
		arr[front]=0;
		front++;
		return x;
	}
}	
	int count(){
		return(rear-front+1);
	}
	void display(){
		cout<<"all values in queqe are"<<endl;
		for(int i=0;i<5;i++){
			cout<<arr[i]<<" ";
		}
	}
};




int main(){
	int value;
	int option;
	Queue q1;
	do{
		cout<<"enter the option u want to perform,enter 0 for exit"<<endl;
		cout<<" 1.enque .2-deuqe .3-isempty .4-isfull .5-count .6-display"<<endl;
		cin>>option;
		switch(option){
			
			case 0:
				break;
				case 1:
					cout<<"enter the item for enquee"<<endl;
					cin>>value;
					q1.Enqueue(value);
					break;
					case 2:
						cout<<"deque element"<<q1.dequeue()<<endl;
						break;
						case 3:
							if(q1.Isempty())
							cout<<"que is empty"<<endl;
							else
							cout<<"que is not empty";
							break;
							case 4:
								if(q1.IsFull())
							cout<<"que is full"<<endl;
							else
							cout<<"que is not full"<<endl;
								break;
								case 5:
									cout<<"elements present in queue is"<<q1.count()<<endl;									
									break;
									case 6:
										cout<<" display function is called"<<endl;
										q1.display();
								
									
										break;
										default:
											cout<<"enter proper option"<<endl;
											break;
		}
		
		
	}while(option!=0);
	return 0;
}
