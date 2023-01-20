#include<iostream>
using namespace std;

class TrieNode{
    public:
    TrieNode* children[26];
    char data;
    bool isTerminal;
    TrieNode(char ch){
        data = ch;
        for(int i = 0; i <= 26; i++){
            children[i] = NULL;
        }

        isTerminal = false;
    }
};

class Trie{

    public:
    TrieNode* root;

    Trie(){
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* root , string word){
        //Base Case
        if(word.length() == 0){
            root -> isTerminal = true;
            return;
        }

        //Assumption word will be in CAPS
        int index = word[0] - 'a';
        TrieNode* child;

        //Present
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            //Absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        //Recursion
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root, word);
    }

    //Searching
    bool SearchUtil(TrieNode* root, string word){
        //Base Case
        if(word.length() == 0){
            return root->isTerminal;
        }

        int index = word[0] - 'a';
        TrieNode* child;
        if(root -> children[index] != NULL){
            child = root->children[index];
        }

        else{
            return false;
        }

        //Recursion
        return SearchUtil(child, word.substr(1));
    }

    bool searchWord(string word){
        return SearchUtil(root, word);
    }
};

int main(){

    Trie *t = new Trie();

    t->insertWord("abcd");
    cout << "Present or Not : " << t->searchWord("abcd") << endl; 


}