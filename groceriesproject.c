#include <stdio.h>

int main (){

/* what's needed
>>Total Amount paid by buyer
>>Balance given to the buyer
>>print out the total cost of all items bought
>>print out the items bought with their quantity


item list
. Tomatoes (2kgs @ 5000)
. Onions (2.5kgs @ 1500)
. Green Pepper (3kgs @ 2000)
. Carrots (1.5kgs @ 3000)
. Ginger (1kg @ 6000)
. Garlic (4kgs @ 500)
. Turmeric (2kgs @ 6000)
. Chilli (1kg @ 500)

*/

// NOTE: Buyer went with 100,000


char item1[] = "Tomatoes";
char item2[] = "Onions";
char item3[]= "Green Pepper";
char item4[] = "Carrots";
char item5[] = "Ginger";
char item6[] = "Garlic";
char item7[] = "Turmeric";
char item8[] = "Chilli";

// ask for prices and quantity of each item bought
float costOfTomatoes, costOfOnions, costOfGreenPepper, costOfCarrots, costOfGinger, costOfGarlic, costOfTurmeric, costOfChilli;
float quantityForItem1, quantityForItem2, quantityForItem3, quantityForItem4, quantityForItem5, quantityForItem6, quantityForItem7, quantityForItem8;

printf("Enter cost of %s: ", item1);
scanf("%f", &costOfTomatoes);
printf("Enter quantity for %s: ", item1);
scanf("%f", &quantityForItem1);

printf("\nEnter cost of %s: ", item2);
scanf("%f", &costOfOnions);
printf("Enter quantity for %s: ", item2);
scanf("%f", &quantityForItem2);

printf("\nEnter cost of  %s: ", item3);
scanf("%f", &costOfGreenPepper);
printf("Enter quantity for %s: ", item3);
scanf("%f", &quantityForItem3);

printf("\nEnter cost of %s: ", item4);
scanf("%f", &costOfCarrots);
printf("Enter quantity for %s: ", item4);
scanf("%f", &quantityForItem4);

printf("\nEnter cost of %s: ", item5);
scanf("%f", &costOfGinger);
printf("Enter quantity for %s: ", item5);
scanf("%f", &quantityForItem5);

printf("\nEnter cost of %s: ", item6);
scanf("%f", &costOfGarlic);
printf("Enter quantity for %s: ", item6);
scanf("%f", &quantityForItem6);

printf("\nEnter cost of %s: ", item7);
scanf("%f", &costOfTurmeric);
printf("Enter quantity for %s: ", item7);
scanf("%f", &quantityForItem7);


printf("\nEnter cost of %s: ", item8);
scanf("%f", &costOfChilli);
printf("Enter quantity for %s: ", item8);
scanf("%f", &quantityForItem8);





// Amount the user went with for shopping
float amountWentWith = 100000;

// total cost for all items bought
float totalAmount = (costOfTomatoes + costOfOnions + costOfGreenPepper + costOfCarrots + costOfGinger + costOfGarlic + costOfTurmeric + costOfChilli );

// balancee given to the user
float balanceReturned = amountWentWith - totalAmount;

// print out the totalcost and balance given
printf("\n\nTotal Amount paid is: %.2f", totalAmount);
printf("\n\nYour balance is :%.2f", balanceReturned);


// print out the items bought with respect to their quantities

printf("\n\nnYou bought the following items");

printf("\n\n%.1fkgs of %s",quantityForItem1, item1);
printf("\n\n%.1fkgs of %s",quantityForItem2, item2);
printf("\n\n%.1fkgs of %s",quantityForItem3, item3);
printf("\n\n%.1fkgs of %s",quantityForItem4, item4);
printf("\n\n%.1fkgs of %s",quantityForItem5, item5);
printf("\n\n%.1fkgs of %s",quantityForItem6, item6);
printf("\n\n%.1fkgs of %s",quantityForItem7, item7);
printf("\n\n%.1fkgs of %s",quantityForItem8, item8);


//Appreciate the user 
printf("\n\n                           Thank you for shopping with 256Enterprises LTD\n\n\n\n");

	return 0;
}
