#include"Stack.cpp"

int main(){

	Stack stack;
	cout << "Empty: " << stack.isEmpty()<<endl;
	stack.push(5);
	stack.push(10);
	stack.push(15);


	stack.show();

	cout<<stack.pop()<<endl;
	stack.show();
	cout << "Empty: " << stack.isEmpty() << endl;
	cout << stack.peek() << endl;
	stack.push(215);
	stack.push(165);
	stack.push(175);
	stack.show();


	stack.push(1215);
	stack.push(1165);
	stack.push(1175);
	stack.push(2215);
	stack.push(2165);
	stack.push(2175);
	stack.push(3215);
	stack.push(3165);
	stack.push(3175);
	stack.show();

	for (int i = 0; i < 15; i++)
		cout << stack.pop() << endl;
	stack.show();

	system("pause");
	return 0;
}
