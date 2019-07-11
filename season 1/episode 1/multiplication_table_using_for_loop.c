// Soruce code is provided by Newtum Solutions Private Limited for more details please visit to newtum.com

// For Details explaination of the code please watch the video first and then execute the examples

// Video is availabe at Amazon, YouTube DVD

// write a program print multiplication table using for loop.

main()
{
    int input, i,result;
    printf("Enter an number: ");
    scanf("%d",&input);
    for(i=1; i<=10; ++i)
    {
        result = input * i;
        printf("%d * %d = %d \n", input, i, result);
    }
}
