#include<bits/stdc++.h>
using namespace std;
#define SPACE 10

// INSERT VALUES IN BINARY SEARCH TREE
class treenode{
   public:
       int value;
       treenode* left;
       treenode* right;

       treenode()
       {
           left=NULL;
           right=NULL;
           value=0;
       }
};
class BST{
public:
    treenode* root;
    treenode* temp;

    BST()
    {
        root=NULL;
    }

    //FUNCION TO INSERT ANY VALUE


    void inserte(treenode* new_node)
    {
        if (root==NULL)
        {
            root=new_node;
            cout << "ROOT NODE CREATED"<<endl;
        }
        else
        {
            temp=root;
            while(temp!=NULL)
            {
                if (temp->value > new_node->value && temp->left==NULL)
                {
                    temp->left=new_node;
                    cout << "NODE INSERTED TO LEFT of "<< temp->value<<endl;
                    break;
                }
                else if(temp->value > new_node->value)
                {
                    temp=temp->left;
                }
                else if(temp->value < new_node->value && temp->right==NULL)
                {
                    temp->right=new_node;
                    cout << "NODE INSERTED TO RIGHT "<<temp->value<<endl;
                    break;
                }
                else if (temp->value < new_node->value)
                {
                    temp=temp->right;
                }
            }
        }
    }

    /// MOVE IN NODE for pre order (we can move in different order by changing value of cout << r;)
    void preorder(treenode* r)
    {
        if (r==NULL)
            return;
        else
        {
            cout << r->value<<" "<<r<<endl;
            preorder(r->left);
            preorder(r->right);
        }

    }

    /// SEARCH ANY ELEMENT
    void searche(int val)
    {
        temp = root;
        if (temp->value==val)
        {
            cout << " VALUE FOUND .... iTS IN ROOT NODE";
        }
        else
        {
            while(temp!=NULL)
            if(val>temp->value)
            {
                temp=temp->right;
            }
            else if (val<temp->value)
            {
                temp=temp->left;
            }
            else
            {

                cout << "VALUE FOUND BELOW AT "<<temp;
                break;
            }
        }

    }
    treenode* minvaluenode(treenode* r)
    {
        while(r->left!=NULL)
        {
            r=r->left;

        }
        return(r);
    }
    treenode* deletenode(treenode* r,int val)
    {
        if (r==NULL)
            return r;
        else if (val>r->value)
        {
            r->right=deletenode(r->right,val);
        }
        else  if (val<r->value)
        {
            r->left=deletenode(r->left,val);
        }
        else
        {
            if (r->left==NULL) /// only 1 child present right (which may be NULL)
            {
                temp=r->right;
                delete r;
                return temp;
            }
            else if (r->right==NULL) /// only 1 child present left (which may nr null)
            {
                temp=r->left;
                delete r;
                return temp;
            }
            else /// IT HAS 2 CHILD ::: THE RULE IS TO FIND THE LOWEST TERM IN RIGHT SUBTREE AND REPLACE IT WITH THAT NODE
            {
                temp = minvaluenode(r->right);
                r->value=temp->value;  /// ASSIGNING VALUE OF NODE TO BE REPLACED WITH LOWEST RIGHT SUBTREE NODE
                r->right=deletenode(r->right,temp->value);
            }
        }
        return r;
    }
          void print2D(treenode * r, int space) {
        if (r == NULL) // Base case  1
          return;
        space += SPACE; // Increase distance between levels   2
        print2D(r->right, space); // Process right child first 3
        cout << endl;
        for (int i = SPACE; i < space; i++) // 5
          cout << " "; // 5.1
        cout << r -> value << "\n"; // 6
        print2D(r -> left, space); // Process left child  7
      }


};


int main()
{
	   #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  

    BST B;
    int i,value;
    treenode T;
    treenode* r;
    r=NULL;
    treenode* k;
    cout << "BINARY TREE"<<endl;


    /// INSERTING VALUES
    i=0;
    while(i<6)/// only 6 elements allowed
    {
        treenode* new_node=new treenode();
        int x;
        cout << "PLEASE ENTER VALUE :-"<<endl;
        cin >> x;
        new_node->value=x;
        B.inserte(new_node);
        i++;
    }

    //PRE ORDER

    {
        B.preorder(B.root);
    }

    //SEARCHING ANY ELEMENT

    {
       cout << "WHAT WANT TO SEARCH??"<<endl<<"enter value";
       cin >> value;
       B.searche(value);
       B.print2D(B.root,5);
    }

    /// DELETION

    {
        cout << "VALUE TO BE DELETED"<<endl;
        int del;
       cin >> del;
       k=B.deletenode(B.root,del);
       B.print2D(B.root,5);

    }


}
