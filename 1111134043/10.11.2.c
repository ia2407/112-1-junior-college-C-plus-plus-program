// Fig. 4.6: fig04_06.c
// Calculating compound interest
#include <stdio.h>
#include <math.h>  

// function main begins program execution
int main( void )
{
   double amount=0; // amount on deposit
   float aim = 0;
   scanf_s("%f", &aim);
   double principal = 1000.0; // starting principal
   double rate = .05; // annual interest rate
   unsigned int year=0; // year counter

   // output table column heads
   printf( "%4s%21s\n", "Year", "Amount on deposit" );

   // calculate amount on deposit for each of ten years
   while (amount<aim)
   {
       ++year;
      // calculate new amount for specified year
      amount = principal * pow( 1.0 + rate, year );

      // output one table row
      printf( "%4u%21.2f\n", year, amount );   
   } // end for
} // end function main



/**************************************************************************
 * (C) Copyright 1992-2013 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/