#include <iostream> 
using namespace std; 
  
template <typename T> 
class Array { 
private: 
    T *ptr; 
    int size; 
public: 
    Array(T arr[], int s); 
    void print(); 
}; 
  
template <typename T> 
Array<T>::Array(T arr[], int s) { 
    ptr = new T[s]; 
    size = s; 
    for(int i = 0; i < size; i++) 
    {
        ptr[i] = (int)arr[i];
	} 
	
	float temp=0;
	
	for(int i=0;i<size;i++)
	{
		temp=temp+ptr[i];
	}
	
	cout<<temp/s;
} 

  
int main() { 
    int arr[5] = {1, 2, 'c', 'b', 'a'}; 
    Array<int> a(arr, 5); 
    return 0; 
} 
