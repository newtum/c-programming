//Soruce code is provided by Newtum Solutions Private Limited for more details please visit to newtum.com

//For Details explaination of the code please watch the video first and then execute the examples

// Video is availabe at Amazon,Youtube DVD

// write a program which calculates simple interest.

main()
{
	
    float principal, rate;
    int year; printf("Enter the principal Amount : ");
    scanf("%f",&principal);
    printf("Enter the Rate Of Interest : ");
    scanf("%f",&rate);
    printf("Enter duration in Years : ");
    scanf("%d",&year);
    float SI=(principal * rate * year) / 100;
    printf("\nprincipal amount : %f, \nRate Of Interest : %f , \nYears : %d ", principal, rate, year);
    printf("\nSimple interest : %f", SI);

}
