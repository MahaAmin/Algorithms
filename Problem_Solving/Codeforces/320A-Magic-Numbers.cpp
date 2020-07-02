#include <iostream>
using namespace std;

int main(){
    // get input
    char input[10];
    cin>>input;

    // calculate length of array
    int length = 0;
    while(input[length] != '\0'){
        length++;
    }

    // logic
    bool flag = true;
    for(int i=0; i<length; i++){
        if(input[i] == '1')
            continue;
        else if(i > 0 && input[i] == '4' && input[i-1] == '1')
            continue;
        else if(i > 1 && input[i] == '4' && input[i-1] == '4' && input[i-2] == '1')
            continue;
        else{
            flag = false;
            break;
        }
        i++;
    }


    // output
    if(flag)
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
    return 0;
}