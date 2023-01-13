#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size = 0;
   

    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i = 1; i <= size ; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deletion(){
        if(size == 0){
            cout<<"Nothing to delete" << endl;
            return;
        }

        //Step -1 Put last element to 1st Index
        arr[1] = arr[size];
        //Step -2 Remove last element
        size--;

        //Step -3 Take root Node to its correct position
        int i = 1;
        while(i<size){
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;

            if(leftIndex<size && arr[i]<arr[leftIndex]){
                swap(arr[i],arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndex < size && arr[i] < arr[rightIndex]){
                swap(arr[i], arr[rightIndex]);
            }

            else{
                return;
            }
        }

    }
};


int main(){
    heap h;
    h.insert(20);
    h.insert(50);
    h.insert(10);
    h.insert(23);
    h.insert(34);
    h.print();
    h.deletion();
    cout << "Delete Hogya kya" << endl;
    h.print();
}