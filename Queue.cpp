#include<bits/stdc++.h>
using namespace std;


class que{
public:
    int rear;
    int fronte;
    int arr[5];

    que()
    {
        rear=0;
        fronte=0;
        for(int i=0;i<5;i++)
        {
          arr[i]=0;
        }
    }
void enqueue(int val)
{
    if (rear<5)//NOT FULL
    {
        arr[rear]=val;
        rear++;
    }
    if (rear==5)//FULL
    {
        cout << "NO SPACE"<<endl;
    }

}
void display()
{
    for(int i=0;i<5;i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;
}
void dequeue()
{
    if (rear==0)
    {
        cout << "QUEUE IS EMPTY "<<endl;
    }
    if(rear>=0)
    {
        rear--;
        arr[rear]=0;
    }
}
};
int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  
    
        que q;
        int val,option;
    while(4<5)
    {
        cout << "WHAT WANT TO PERFORM??"<<endl;
        cout << "1.ENQUEUE"<<endl;
        cout << "2.DISPLAY"<<endl;
        cout << "3.DEQUEUE"<<endl;
        cout << "4.CLEAR SCREEN"<<endl;
        cin >> option;
        switch(option)
        {
            case 1:
                cout<<"ENTER VALUE"<<endl;
                cin >>val;
                q.enqueue(val);
                break;
            case 2:
                q.display();
                break;
            case 3:
                q.dequeue();
                break;
            case 4:
                system("cls");
                break;
        }
    }
}
