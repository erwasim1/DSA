#include<iostream>
using namespace std;
#define SPACE 10
class TreeNode{
    public:
    int value;
    TreeNode*left;
    TreeNode*right;
    TreeNode(){
        value=0;
        left=NULL;
        right=NULL;
    }
    TreeNode(int v){
        value=v;
        left=NULL;
        right=NULL;
    }    

    };

    class BST{
        public:
        TreeNode*root;
        BST(){
            root=NULL;
        }
        void insertNode(TreeNode *new_node){
            if(root==NULL){
                root=new_node;
                cout<<"Value inserted at root"<<endl;

            }
            else{
                TreeNode *temp=root;
                while(temp!=NULL){
                    if(new_node->value==temp->value){
                        cout<<"value already exist,Insert other element";
                        return;
                    }
                    else if ((new_node->value<temp->value) && (temp->left==NULL)){
                        temp->left=new_node;
                        cout<<"value inserted at left"<<endl;
                        break;
                    }
                    else if(new_node->value<temp->value){
                        temp=temp->left;
                    }
                    else if ((new_node->value>temp->value) && (temp->right==NULL)){
                        temp->right=new_node;
                        cout<<"value inserted at right"<<endl;
                        break;
                    }
                    else if(new_node->value>temp->value){
                        temp=temp->right;
                    } 
                }
            }

        }
        void print2D(TreeNode * r, int space) {
    if (r == NULL) // Base case  1
      return;
    space += SPACE; // Increase distance between levels   2
    print2D(r -> right, space); // Process right child first 3 
    cout << endl;
    for (int i = SPACE; i < space; i++) // 5 
      cout << " "; // 5.1  
    cout << r -> value << "\n"; // 6
    print2D(r -> left, space); // Process left child  7
  }

    void inorder( TreeNode*root){
    if(root==NULL){
       return;
    }
   
    inorder(root->left);
     cout<<root->value<<" ";
    inorder(root->right);
    }

    void preorder(TreeNode*root){
        if(root==NULL){
            return;
        }
        cout<<root->value<<" ";
        preorder(root->left);
        preorder(root->right);
    }
     void postorder(TreeNode*root){
        if(root==NULL){
            return;
        }
        
        postorder(root->left);
        postorder(root->right);
        cout<<root->value<<" ";
    }

     TreeNode*minval(TreeNode*Node){
            TreeNode*current=Node;
            while(current->left!=NULL)
                current=current->left;
                return current; 
            
     }

    TreeNode*Iterativesearching(int val){

       

        
        if(root==NULL){
            return root;
        }
        else{
            TreeNode*temp=root;
            while(temp!=NULL){
                if(temp->value==val){
                    return temp;
                }
                else if(temp->value<val){
                    temp=temp=temp->right;
                    
                }
                else{
                    temp=temp->left;
                }
            }
        return NULL;
        }

    }
    TreeNode*deleteNode(TreeNode*r,int v){
        if(r==NULL){
            return NULL;
        }
       else if(v<r->value) {
           r->left=deleteNode(r->left,v);

       }
        else if(v>r->value) {
           r->right=deleteNode(r->right,v);
           
       }
       else{
           if(r->left==NULL){
               TreeNode*temp=r->right;
              
               delete r;
               return temp;
           }
           else if(r->right==NULL){
               TreeNode*temp=r->left;
              
               delete r;
               return temp;
           }
           else{
               
              TreeNode* temp=minval(r->right);
               r->value=temp->value;
               r->right=deleteNode(r->right,temp->value);
           }
       }
       return r;
    }
    };

    int main(){
        BST obj;
        int option,val;
        do{
            cout<<"what operation do u want to perfom ? "<<"select option number Enter 0 for exit "<<endl;
            cout<<"1.Insertnode"<<endl;
            cout<<"2.searchnode"<<endl;
            cout<<"3.Deletenode"<<endl;
            cout<<"4.printBstvalues"<<endl;
            cout<<"5.clearscreen"<<endl;
            cout<<"0.Exitprogram"<<endl;
            cin>>option;
            TreeNode *new_node=new TreeNode();
            switch(option){
                case 0:
                    break;
                case 1:
                    cout<<"Insert"<<endl;
                    //inertion code
                    cout<<"Enter value of tree node to be inserted in BST: ";
                    cin>>val;
                    new_node->value=val;
                    obj.insertNode(new_node);
                    break;
                 case 2:
                    cout<<"enter the value u want to serching"<<"-> ";
                    cin>>val;
                   new_node=obj.Iterativesearching(val); 
                   if(new_node!=NULL)
                     {
                         cout<<"value is found"<<endl;
                     }
                    else{
                        cout<<"value is not found"<<endl;
                    } 
            case 3:
            cout<<"enter  the value u want to delete "<<endl;
            cin>>val;
            new_node=obj.Iterativesearching(val);
           
              if(new_node!=NULL)
                     {
                        obj.deleteNode(obj.root,val);
                        cout<<"value ius deleted";
                     }
                    else{
                        cout<<"value is not found"<<endl;
                    } 

                    case 4:
                    cout<<"display elements"<<endl;
                    obj.print2D(obj.root,5);
                    cout<<endl;
                   /* cout<<"in inorder ------>";
                    
                    obj.inorder(obj.root);
                    cout<<endl;
                     cout<<"in preorder ------>";
                    obj.preorder(obj.root);
                    cout<<endl;
                    cout<<"in postorder ------>";
                    obj.postorder(obj.root);*/
                     obj.inorder(obj.root);
                    cout<<endl;


            }

        }
        while(option!=0);
    }