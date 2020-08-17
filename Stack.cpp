#include <iostream>
using namespace std;

class Stack{
private:
	int elements = 2;
	int* stack = new int[elements];
	int top = 0;

	void resize(){
		if (top  >= elements){
			int* temp = new int(elements * 2);
			int* delStack = stack;
			for (int i = 0; i < elements; i++){
				temp[i] = delStack[i];
			}
			stack = new int(elements * 2); 
			stack = temp;
			elements *= 2;
			delete[] delStack;
		}
		else{
			int* temp = new int(elements / 2);
			int* delStack = stack;
			for (int i = 0; i < top; i++){
				temp[i] = delStack[i];
			}
			stack = new int(elements / 2);
			stack = temp;
			elements /= 2;
			//delete[] delStack;
		}
		cout << "Resized: " << elements << endl;
	}

public:
	void push(int data){
		if (top >= elements)
			resize();
		stack[top++] = data;
	}

	int pop(){
		if (top <= 0){
			cout << "Empty List!";
			return 0;
		}
		else if (top < elements / 3){
			resize();
		}
			
		return stack[(top--)-1];
	}

	int peek(){
		return stack[top - 1];
	}

	void show(){
		cout << "top: " << top << endl;
		for (int i = (top-1); i >= 0; i--){
			cout << stack[i] << " ";
		}

		cout << endl;
	}

	int isEmpty(){
		return top <= 0;
	}




};