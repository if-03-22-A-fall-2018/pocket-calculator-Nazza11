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

   printf("Add(1), Subtract(2), Multiply(3), Divide(4) or End Program(-1): ");
   scanf("%d", &selection);

   return selection;
 }

 void getOperants(double* firstNumber, double* secondNumber){

   printf("First Number: ");
   scanf("%lf", firstNumber);

   printf("Second Number: ");
   scanf("%lf", secondNumber);
 }

 void printResults(double result){
   printf("Result: %lf\n", result);
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
      if (secondNumber != 0) {
        divide(firstNumber, secondNumber);
      } else {
        printf("Error! Division by 0!\n");
        displayMenu();
      }

      break;
      case -1:
      break;
    default :
      printf("Error!\n");
      displayMenu();
      break;
   }
 }

 int main(int argc, char const *argv[]) {
   int selection;
   double firstNumber;
   double secondNumber;

do {
  selection = displayMenu();
  if (selection != -1) {
    getOperants(&firstNumber, &secondNumber);
    execute(selection, firstNumber, secondNumber);
  }
} while(selection != -1);

   return 0;
 }
