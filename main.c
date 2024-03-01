#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BST.h"
int main( int argc, char** argv )
{ 
   unsigned int i; // counter to loop from 1-10
   int item; // variable to hold random values
   BST b;

	b.root= NULL;  b.size=0;// tree initially empty
   for ( i = 1; i < argc; ++i ) { 
      //insertNode( &b, atoi(argv[i]));
      insertNode_R(&b.root,atoi(argv[i]) );
   } // end for
/*
   if(strcmp(argv[1],"-pre") == 0){
      // traverse the tree preOrder
      printf("\nThe preOrder traversal is:\n" );
      preOrder( b.root );
   }
   else if(strcmp(argv[1],"-post") == 0){
      // traverse the tree postOrder
      printf("\nThe postnOrder traversal is:\n" );   
      postOrder( b.root );
   }
   else if(strcmp(argv[1],"-in") == 0){
      // traverse the tree inOrder
      printf("\nThe inOrder traversal is:\n" );
      inOrder( b.root );
   }
   else if(strcmp(argv[1],"-tree") == 0){
      tree( b.root, 0);
   }
*/
   
   printf("\nThe preOrder traversal is:\n" );
   preOrder( b.root );

  
   printf("\nThe postnOrder traversal is:\n" );   
   postOrder( b.root );

   
   
   printf("\nThe inOrder traversal is:\n" );
   inOrder( b.root );

   printf("\n");
   tree( b.root, 0);
   printf("\n");
} // end main

