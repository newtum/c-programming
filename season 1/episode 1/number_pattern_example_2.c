// Soruce code is provided by Newtum Solutions Private Limited for more details please visit to www.newtum.com

// For Details explaination of the code please watch the video first and then execute the examples

// Video is availabe at Amazon, YouTube DVD

// example-2 on number pattern using for loop

main()
{
    int i, j, k;
    for(i=10 ; i>=1 ; i--)
    {
        for(j=10 ; j>i ; j--)
        {
            printf("  ");
        }
        for(k=1 ; k<=i ; k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
}