// Soruce code is provided by Newtum Solutions Private Limited for more details please visit to newtum.com

// For Details explaination of the code please watch the video first and then execute the examples

// Video is availabe at Amazon, YouTube DVD

// write a program using AND and OR Operator .



main()
{
    float income, tax_amount;
    int age, tax_percentage;
    char gender;
    tax_percentage=0;
    tax_amount=0;

    printf("Calculate INCOME TAX");
    printf("\nEnter value for Income : ");
    scanf("%f",&income);
    printf("\nEnter value for Age : ");
    scanf("%d",&age);
    printf("\nEnter Gender (m for Male, f for Female) : ");
    scanf(" %c",&gender);

    if(income > 500000)
    {
        tax_percentage = 40;
    }
    if(income > 200000)
    {
        tax_percentage = 30;
    }
    if(income > 100000 && age > 60 || gender == 'f')
    {
        tax_percentage = 10;
    }
    if(income > 100000 && age < 60 && gender == 'm')
    {
        tax_percentage = 20;
    }

    tax_amount = income * tax_percentage / 100;
    printf("\nINCOME Tax Amount is %f and Tax percentage is %d percent", tax_amount, tax_percentage);

}