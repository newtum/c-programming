// Soruce code is provided by Newtum Solutions Private Limited for more details please visit to newtum.com

// For Details explaination of the code please watch the video first and then execute the examples

// Video is availabe at Amazon, YouTube DVD

// write a program which will do addition, subtraction, multiplication and division depending upon the user’s choice


main()
{

char option;
int input1, input2, operation, result;
printf("Please enter\n A for addition,\n S for subtraction,\n M for Multiplication,\n D for division,\n E for exit : ");
scanf("%c",&option);

printf("\nEnter value for input1 : ");
scanf("%d",&input1);
printf("\nEnter value for input2 : ");
scanf("%d",&input2);


    switch(option)
    {
    case 'A':
       
        result = input1 + input2;
        printf("%d + %d = %d", input1, input2, result);
        break;
    case 'S':
        result = input1 - input2;
        printf("%d - %d = %d", input1, input2, result);
        break;
    case 'M':
        result = input1 * input2;
        printf("%d * %d = %d", input1, input2, result);
        break;
    case 'D':
        result = input1 / input2;
        printf("%d / %d = %d", input1, input2, result);
        break;
    case 'E':
        exit(0);
    default:
        printf("Sorry Wrong choice");
                exit(0);
    }

}