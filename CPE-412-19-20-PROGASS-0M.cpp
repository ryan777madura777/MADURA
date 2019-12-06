//ID number: 505034
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int j=0, state=0;
    int table[6][2] = { {0,1}, {1,2}, {2,3}, {3,4} , {4,5}, {5,5} };
    int input;
    int flag = 0;
    char st[100];
    cin>>st;

        while (st[j] != '\0' && (st[j] == 'a' || st[j] == 'b') )
        {
            switch(st[j])
            {
            case 'a' :
                input=0;
                break;
            case 'b' :
                input=1;
                break;
            }
        state = table[state][input];
        // just wanna check the state in every character
        //        cout<<st[j]<<" State "<<state<<endl;
        if(state==5)
        {
            flag=1;
            break;
        }
        j++;
        }
        if(flag == 1)
        {
            cout<<"Accepted"<<endl;
        }
        else
        {
            cout<<"Not Accepted"<<endl;
        }
    return 0;
}