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
        Node n= new Node(a);
        HelpInsert(Troot,n);
    }

    void Tree::HelpInsert(Node* main,Node NewNode)
    {
        
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
        struct Node *current = root;	
        while(current->value != a)
        {
             if(current != NULL) 
             	{  //go to left tree
                   if(current->value > a)
                    {
                         current = current->left;

                    }     //else go to right tree
                  else 
            	    {                
            		current = current->right;

             	    }
         //not found
         	 if(current == NULL)
         	   {
            	       return false;
         	   }
               }			
       }
   return current;

    }

    void Tree:: print()

    {

   

    }

