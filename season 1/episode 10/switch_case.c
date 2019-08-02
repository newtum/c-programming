// Soruce code is provided by Newtum Solutions Private Limited for more details please visit to newtum.com

// For Details explaination of the code please watch the video first and then execute the examples

// Video is availabe at Amazon, YouTube DVD

// write a program which will accept input as a number, and will say you are in switch 1, switch 2 etc.

main()
{

int i;
printf("enter the value : ");
scanf("%d",&i);
    switch(i)
    {
    case 1:
        printf("You have pressed 1 st Switch");
        break;
    case 2:
        printf("You have pressed 2nd Switch");
        break;
    default:
          printf("default case");
    }

}
