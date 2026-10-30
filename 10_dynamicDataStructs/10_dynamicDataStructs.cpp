#include <iostream>
using namespace std;
/*
class Stack {
	enum {empty=-1,full=9};
	int arr[full + 1];
	int topIndex;
public:
	Stack()
	{
		topIndex = empty;
	}
	//default delete
	//Stack() = default;
	Stack(const Stack& other) = delete;
	bool isFull() {
		return topIndex == full;
	}
	bool push(int el) {
		if (!isFull())
		{
			//topIndex++;
			arr[++topIndex]=el;
			return true;
		}
		return false;
	}
	
	bool isEmpty() {
		return topIndex==empty;
	}
	int pop() {
		if (!isEmpty())
		{
			return arr[topIndex--];
		}
	}


	int getCount() {
		return topIndex + 1;
	}
	void clear() {
		topIndex = empty;
	}

	int peek() {
		if (!isEmpty())
		{
			return arr[topIndex];
		}
	}

	void print() {
		for (int i = 0; i <= topIndex; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};
*/

/*
class Stack {
	enum{empty=-1};

	int* arr;
	int size;
	int topIndex;
public:
	Stack() = default;
	Stack(int s):size(s)
	{
		arr = new int[s];
		topIndex = empty;
	}

	bool isFull() {
		return topIndex == size-1;
	}
	bool push(int el) {
		if (!isFull())
		{
			arr[++topIndex] = el;
			return true;
		}
		return false;
	}

	bool isEmpty() {
		return topIndex == empty;
	}
	int pop() {
		if (!isEmpty())
		{
			return arr[topIndex--];
		}
	}

	int getCount() {
		return topIndex + 1;
	}
	void clear() {
		topIndex = empty;
	}

	int peek() {
		if (!isEmpty())
		{
			return arr[topIndex];
		}
	}

	void print() {
		for (int i = 0; i <= topIndex; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}










	~Stack()
	{
		if (arr!=nullptr)
		{
			delete[]arr;
		}
	}
};
*/
template<typename T>
class Stack {
	enum { empty = -1 };

	T* arr;
	int size;
	int topIndex;
public:
	Stack()
	{
		topIndex = empty;
	}
	Stack(int s) :size(s)
	{
		arr = new T[s];
		topIndex = empty;
	}
	Stack(initializer_list<T> list)
	{
		topIndex = empty;

		this->size = list.size();
		arr = new T[size];
		for (T elem : list)
		{
			arr[++topIndex] = elem;
		}
	}

	bool isFull() {
		return topIndex == size - 1;
	}
	bool push(T el) {
		if (!isFull())
		{
			arr[++topIndex] = el;
			return true;
		}
		return false;
	}

	bool isEmpty() {
		return topIndex == empty;
	}
	T pop() {
		if (!isEmpty())
		{
			return arr[topIndex--];
		}
	}

	int getCount() {
		return topIndex + 1;
	}
	void clear() {
		topIndex = empty;
	}

	T peek() {
		if (!isEmpty())
		{
			return arr[topIndex];
		}
	}

	void print() {
		for (int i = 0; i <= topIndex; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	void resize() {
		if (topIndex==size-1)
		{
			cout << "arr resized!" << endl;
			int newSize = size * 2;

			T* newArr = new T[newSize];
			for (int i = 0; i <= topIndex; i++)
			{
				newArr[i] = arr[i];
			}
			delete[]arr;

			arr = newArr;
			size = newSize;
		}
	}



	~Stack()
	{
		if (arr != nullptr)
		{
			delete[]arr;
		}
	}



};


int main()
{
	//1

	Stack<char>st(4);
	st.push('a');
	st.push('m');
	st.push('a');
	st.push('m');
	st.print();

	st.resize();
	st.push('m');
	st.push('m');
	st.push('m');

	//st.clear();

	st.print();

	Stack<char>st2({ 'd','i','m','a'});

	st2.print();



	//----------
	//Stack st(15);
	////Stack copy(st);
	//cout << "size: " << st.getCount() << endl;
	//for (int i = 0; i < 7; i++)
	//{
	//	st.push(rand() % 50);
	//}

	//cout << "size: " << st.getCount() << endl;
	//st.print();
	//while (!st.isEmpty())
	//{
	//	cout << "delete element: " << st.pop() << endl;
	//	st.print();
	//}
	//cout << "size: " << st.getCount() << endl;


}


