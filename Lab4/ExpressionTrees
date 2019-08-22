#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

//Infix to Postfix

int prec(char c) 
    {//Precedence order Rules
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
    }


void infixToPostfix(string s) 
{   
    std::stack<char> st; 
    st.push('N'); 
    int l = s.length(); 
    string postfix; 
    for(int i = 0; i < l; i++) 
    { 
        if( (s[i])) 
        postfix+=s[i]; 
   
        else if(s[i] == '(') 
          
        st.push('('); 
          
        else if(s[i] == ')') 
        { 
            while(st.top() != 'N' && st.top() != '(') 
            { 
                char c = st.top(); 
                st.pop(); 
               postfix += c; 
            } 
            if(st.top() == '(') 
            { 
                char c = st.top(); 
                st.pop(); 
            } 
        } 
          
        else{ 
            while(st.top() != 'N' && prec(s[i]) <= prec(st.top())) 
            { 
                char c = st.top(); 
                st.pop(); 
                postfix += c; 
            } 
            st.push(s[i]); 
        } 
  
    } 
     
    while(st.top() != 'N') 
    { 
        char c = st.top(); 
        st.pop(); 
        postfix += c; 
    } 

    cout << "The postfix expression is";
    cout << postfix << endl; 


//Postfix to Tree

struct node
{
        char data;
        node *left;
        node *right;
};
 
int top = -1;
char arr[100];
node *arr[100];
 
int r(char inputchar)
{   //for checking symbol is operand or operator
    if (inputchar == '+' || inputchar == '-' || inputchar == '*' || inputchar
            == '/')
        return (-1);
    else if (inputchar >= 'a' || inputchar <= 'z')
        return (1);
    else if (inputchar >= 'A' || inputchar <= 'Z')
        return (1);
    else
        return (-1); //for error
}
 
//it is used for inseting an single element in a tree, i.e. is pushing of single element.
void push(node *tree)
{
    top++;
    arr[top] = tree;
}
 
node *pop()
{
    top--;
    return (arr[top + 1]);
}
 
void createexprtree(char *suffix)
{
    char symbol;
    node *newl, *ptr1, *ptr2;
    int flag; //flag=-1 when operator and flag=1 when operand
    symbol = suffix[0];
    for (int i = 1; symbol != NULL; i++)
    { 
        flag = r(symbol); //check symbol is operand or operator.
        if (flag == 1)//if symbol is operand.
        {
            newl = new node;
            newl->data = symbol;
            newl->left = NULL;
            newl->right = NULL;
            push(newl);
        }
        else
        { //If the symbol is operator
            ptr1 = pop();
            ptr2 = pop();
            newl = new node;
            newl->data = symbol;
            newl->left = ptr2;
            newl->right = ptr1;
            push(newl);
        }
        symbol = suffix[i];
    }
}
 

void postOrder(node *tree)
{
    if (tree != NULL)
    {
        postOrder(tree->left);
        postOrder(tree->right);
        cout << tree->data;
    }
}

//Converting character to integer for evaluation 
int toInt(string s)  
{  
    int num = 0;  
    if(s[0]!='-') 
        for (int i=0; i<s.length(); i++)  
            num = num*10 + (int(s[i])-48); 
    else
        for (int i=1; i<s.length(); i++)  
        { 
            num = num*10 + (int(s[i])-48);  
            num = num*-1; 
        } 
      
    return num;  
}  
  
//Tree Evaluation
int evaluate(node* root)  
{  
    if (!root)  
        return 0;  
    
    if (!root->left && !root->right)  
        return toInt(root->info);  
    
    int l_val = evaluate(root->left);  
  
    int r_val = evaluate(root->right);  
    
    if (root->data=="+")  
        return l_val+r_val;  
  
    if (root->data=="-")  
        return l_val-r_val;  
  
    if (root->data=="*")  
        return l_val*r_val;  
  
    return l_val/r_val;  
}  
  

int main()
{

int tc;
{cout<<"Enter the number of Testcases";}
cin>>tc;

while(tc)
{ 

int ip;
cout<<"Enter the number of input lines";
cin>>ip;

string inputline[ip];
string postfix[ip];

for(int i=0;i++;i<ip)
{ getline(cin, inputline[ip]; }
  postfix[ip]=infixToPostfix(inputline[ip]);
  createexprtree(postfix)
  evaluate(tree)
}

tc--;
}

return ;
}
