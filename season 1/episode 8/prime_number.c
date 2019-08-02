// Soruce code is provided by Newtum Solutions Private Limited for more details please visit to newtum.com

// For Details explaination of the code please watch the video first and then execute the examples

// Video is availabe at Amazon, YouTube DVD

// write a program to determine prime number.

main()
{
    int i, number;
    int mod;
    printf("Determine whether a number is prime or not\n");
    printf("Enter value for Number : ");
    scanf("%d", &number);

    for(i=2 ; i<number; i++)
    {
        mod=number%i;
        if(mod == 0)
         {
           printf("%d is Not a Prime number.\n",number);
             break;
         }
    }
    if(number==i)
    {
        printf("%d is a Prime number.", number);
    }
}
