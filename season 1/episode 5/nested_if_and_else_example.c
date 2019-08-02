// Soruce code is provided by Newtum Solutions Private Limited for more details please visit to newtum.com

// For Details explaination of the code please watch the video first and then execute the examples

// Video is availabe at Amazon, YouTube DVD

// write a program using nested if and else .

main()
{
	float percentage;
	printf("\nEnter percentage : ");
    scanf("%f",&percentage);
	if (percentage >= 60)
    {
        printf("\nyou will get First division ");
    }
    else
    {
        if (percentage >= 49 && percentage <= 60)
        {
            printf("\nyou will get Second division ");
        }
        else
        {
            if (percentage >= 39 && percentage <= 50)
            {
                printf("\nyou will get Third division ");
            }
            else
            {
                if (percentage <= 40)
                {
                    printf("\nyou are Failed ");
                }
                else
                {

                }
            }
        }
    }

}
