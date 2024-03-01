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
      printf("\npreOrder\n" );
      preOrder( b.root );
   }
   else if(strcmp(argv[1],"-post") == 0){
      // traverse the tree postOrder
      printf("\npostnOrder\n" );   
      postOrder( b.root );
   }
   else if(strcmp(argv[1],"-in") == 0){
      // traverse the tree inOrder
      printf("\ninOrder\n" );
      inOrder( b.root );
   }
   else if(strcmp(argv[1],"-tree") == 0){
      tree( b.root, 0);
   }
*/
   
   printf("\npreOrder\n" );
   preOrder( b.root );

  
   printf("\npostOrder\n" );   
   postOrder( b.root );

   
   
   printf("\ninOrder\n" );
   inOrder( b.root );

   printf("\ntree\n" );
   tree( b.root, -1);
   printf("\n");
   
} // end main

