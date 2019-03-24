#include "Tree.hpp"

using namespace ariel;

Tree::Tree()

{
    Troot=NULL;
}

Tree::Tree(Node n)

{
    Troot=&n;

}
Node::Node()
{
    value=0;
    right=left=NULL;
    size++;
}
Node::Node(int a)
{
    size++;
    value=a;
    right=left=NULL;
}
  int Tree:: size()

    {

    return 0;

    }

    int Tree:: parent(int a)

    {

        return 0;

    }

    int Tree:: left(int a)

    {

        return 0;

    }

    int Tree:: right(int a)

    {

        return 0;

    }
    
    
    void Tree::insert(int a)

    {
        if(!this.contains(a))
        {
            throw std::invalid_argument( "already exist!" );
        }
        else
        {
            Node n= new Node(a);
            HelpInsert(Troot,n);
        }
                   
    }

    void Tree::HelpInsert(Node* main,Node NewNode)
    {
        if(main==NULL) 
         {
         main=&NewNode;
         }
        else
        {
          if(main->value>NewNode->value)
            {
              HelpInsert(main->left,NewNode);
            }
          else
            {
                HelpInsert(main->right,NewNode);
            }    
        }
    }

    

    int Tree:: root()

    {

        return 0;

    }

    void Tree:: remove (int a)

    {

       

    }

    bool Tree:: contains(int a)

    {
        return false;

    }

    void Tree:: print()

    {

   

    }

