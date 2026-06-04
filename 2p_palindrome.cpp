#include<iostream>
#include<string>
using namespace std;

int main(){
    string str="111010010111";
    int start=0,end=str.size()-1;
    bool isPalindrome=true;

    while(start<end){
        if(str[start]!=str[end]){
            isPalindrome=false;
            break;
        }
        start++;
        end--;
    }
    if(isPalindrome){
        cout<<"Palindrome";
    }else{
        cout<<"Not a Palindrome";
    }
    return 0;
}


