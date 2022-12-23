#include<iostream>
#include<vector>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

bool checkPalindrome(vector<int> arr){

    int n = arr.size();
    int s = 0;
    int e = n - 1;
    while(s <= e){

        if(arr[s] != arr[e]){
            return 0;
        }

        s++;
        e--;
    }

    return 1;
}

bool isPalindrome(Node* head){
    vector<int> arr;
    Node* temp = head;
    while(temp != NULL){
        arr.push_back(temp -> data);
        temp = temp -> next;
    }

    return checkPalindrome(arr);
}


class Solutions{
    private:
    Node* getMiddle(Node* head){
        Node* slow = head;
        Node* fast = head -> next;

        while(fast != NULL && fast -> next != NULL){
            fast = fast -> next -> next;
            slow = slow -> next;
        }

        return slow
    };

    Node* reverse(Node* head){
        Node* curr  = head;
        Node* prev = NULL;
        Node* next = NULL;

        while(curr != NULL){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;

        }
        return prev;
    }

    public:
    bool isPalind(Node* head){
        if(head == NULL || head -> next == NULL){
            return true;
        }
        //Step 1 Find Middle
        Node* middle = getMiddle(head);

        //Step 2 reverse list after Middle
        Node* temp = middle -> next;
        middle -> next = reverse(temp);

        //Compare both sides
        Node* head1 = head;
        Node* head2 = middle -> next;

        while(head2 != NULL){
            if(head1 -> data != head2 -> data){
                return false;
            }

            head1 = head1 ->next;
            head2 = head2 -> next;
        }

        //Step 4 repeat step 2
        temp = middle -> next;
        middle -> next = reverse(temp);

        return true;

    }
}



int main(){

}