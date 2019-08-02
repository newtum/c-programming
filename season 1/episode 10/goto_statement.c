// Soruce code is provided by Newtum Solutions Private Limited for more details please visit to newtum.com

// For Details explaination of the code please watch the video first and then execute the examples

// Video is availabe at Amazon, YouTube DVD

// write the program goto statement .

// Explaination: A goto statement in C programming provides an unconditional jump from the 'goto' to a labeled statement 
// in the same function. it is not a good habit to use the goto statement in C, there may be some situations where the 
// use of the goto statement might be desirable.


main () {

   /* local variable definition */
   int a = 1;

   /* do loop execution */
   LOOP:do {
   
      if( a == 5) {
         /* skip the iteration */
         a = a + 1;
         goto LOOP;
      }
		
      printf("value of a: %d\n", a);
      a++;

   }while( a < 10 );
 

}