// Soruce code is provided by Newtum Solutions Private Limited for more details please visit to www.newtum.com

// For Details explaination of the code please watch the video first and then execute the examples

// Video is availabe at Amazon, YouTube DVD

// example on star pattern using for loop

main()
{
    int i, j, k;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>i;j--)
        {
                printf("  ");
        }
        for(k=1;k<(i*2);k++)
        {
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}