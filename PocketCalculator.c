/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 2
 * Title:		 	HelloWorld
 * Author:	   Vinzent Kronreif
 * ----------------------------------------------------------
 * Description:
 * A simple Calculator where you can choose between Add,
 * Subtract, Multiply and Divide.
 * ----------------------------------------------------------
 */
 #include <stdio.h>
 #include <float.h>

 int displayMenu(){
   int selection;

   printf("Add(1), Subtract(2), Multiply(3) or Divide(4)");
   scanf("%d", &selection);

   return selection;
 }

 void getOperants(double* firstNumber, double* secondNumber){

   printf("Bitte erste Zahl eingeben: ");
   scanf("%lf", firstNumber);

   printf("Bitte zweite Zahl eingeben: ");
   scanf("%lf", secondNumber);
 }

 void printResults(double result){
   printf("Das Ergebnis ist: %lf\n", result);
 }

 void add(double firstNumber, double secondNumber){
   double sum;

   sum = firstNumber + secondNumber;

   printResults(sum);
}

 void subtract(double firstNumber, double secondNumber){
   double sum;

   sum = firstNumber - secondNumber;

   printResults(sum);
 }

 void multiply(double firstNumber, double secondNumber){
   double sum;

   sum = firstNumber * secondNumber;

   printResults(sum);
 }

 void divide(double firstNumber, double secondNumber){
   double sum;

   sum = firstNumber / secondNumber;

   printResults(sum);
 }

 void execute(int selection, double firstNumber, double secondNumber) {
   switch (selection) {
     case 1:
      add(firstNumber, secondNumber);
      break;
     case 2:
      subtract(firstNumber, secondNumber);
      break;
     case 3:
      multiply(firstNumber, secondNumber);
      break;
     case 4:
      divide(firstNumber, secondNumber);
      break;
     case -1:
      break;
    default :
      printf("Ungültige Eingabe!\n");
      displayMenu();
      break;
   }
 }

 int main(int argc, char const *argv[]) {
   int selection;
   double firstNumber;
   double secondNumber;

   selection = displayMenu();
   getOperants(&firstNumber, &secondNumber);
   execute(selection, firstNumber, secondNumber);

   return 0;
 }
