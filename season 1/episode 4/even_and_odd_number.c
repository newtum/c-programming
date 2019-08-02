//Soruce code is provided by Newtum Solutions Private Limited for more details please visit to newtum.com

//For Details explaination of the code please watch the video first and then execute the examples

// Video is availabe at Amazon,Youtube DVD

// write a program for give a number to the computer and he will say whether is odd or even
main()

{
    int a;

    int remainder;

    printf("Program to check number is Even or Odd");

    printf("\nPlease Enter Number : ");

    scanf("%d",&a);

    remainder = a %2;

    printf("Remainder of a & 2 is : %d",remainder);

    if (remainder==0)

    printf("\n%d is Even Number",a);

    else

    printf("\n%d is Odd Number",a);

}
