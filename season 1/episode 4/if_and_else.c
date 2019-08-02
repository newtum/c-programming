//Soruce code is provided by Newtum Solutions Private Limited for more details please visit to newtum.com

//For Details explaination of the code please watch the video first and then execute the examples

// Video is availabe at Amazon,Youtube DVD

// Example on if and else.
main()

{
    float bill_amount;

    float discount;

    float final_bill;

    float actual_discount;

    printf("Calculate Discount Price");

    printf("\nEnter Bill Amount : ");

    scanf("%f",&bill_amount);

    if(bill_amount > 1000)
    {
         discount=10;
    }
    else
    {
         discount=0;
    }
    actual_discount = bill_amount * discount/100;

    final_bill=bill_amount-actual_discount;

    printf("\nDiscount on Bill Amount is %f \nactual discount is %f.\nFinal Bill is %f ",bill_amount, actual_discount, final_bill);

}
