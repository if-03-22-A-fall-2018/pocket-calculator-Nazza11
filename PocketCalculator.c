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
 int main(int argc, char const *argv[]) {
   int selection;
   double firstNumber;
   double secondNumber;

   selection = displayMenu();
   getOperants(&firstNumber, &secondNumber);
   execute(selection, firstNumber, secondNumber);

   return 0;
 }

 int displayMenu(){
   int selection;

   printf("Add(1), Subtract(2), Multiply(3) or Divide(4)");
   scanf("%d", &selection);

   return selection;
 }

 void getOperants(double* firstNumber, double* secondNumber){

   printf("Bitte erste Zahl eingeben: \n");
   scanf("%lf\n", &firstNumber);

   printf("Bitte zweite Zahl eingeben: \n");
   scanf("%lf\n", &secondNumber);
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

 void add(double firstNumber, double secondNumber){
   int sum;

   sum = firstNumber + secondNumber;
}

 void subtract(double firstNumber, double secondNumber){
   int sum;

   sum = firstNumber - secondNumber;

   printResults(sum);
 }

 void multiplay(double firstNumber, double secondNumber){
   int sum;

   sum = firstNumber * secondNumber;

   printResults(sum);
 }

 void divide(double firstNumber, double secondNumber){
   int sum;

   sum = firstNumber / secondNumber;

   printResults(sum);
 }

 void printResults(double result){
   printf("Das Ergebnis ist: %lf\n", result);
 }
