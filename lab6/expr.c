#include <stdio.h>
#include <stdlib.h>
#define MAXOP 100
#define NUMBER '0'
main(int argc, char *argv[])
{
   int getop(char s[]);
   void push(double);
   double pop(void);
   char s[MAXOP];
    printf("RYY calculator tell you the result:");
    int type;
    double op1,op2,op3;
    int ryy = 1;
    int a;
    a=argc;
    while((argc--)>0 &&ryy<a){
    type = getop(argv[ryy++]);
        switch (type)
        {
        case NUMBER:
            push(atof(argv[ryy-1]));
            break;
        case '+':
            push(pop() + pop());
            break;
        case '*':
            push(pop() * pop());
            break;
        case '-':
            op2 = pop();
            push(pop() - op2);
            break;
        case '/':
            op2 = pop();
            if (op2 != 0.0)
                push(pop() / op2);
            else
                printf("error:zero divisor\n");
            break;
        case '%':
			op2 = pop();
			op3 = pop();
			if ((int)op2 == op2  && (int)op3 == op3 && op2 != 0 )
				push((int)op3%(int)op2);
			else
				printf("error----------\n");
			break;
        case'c':
		     op2=pop();
		     push(op2);
		     push(op2);
		    break;
		case's':
		    op1=pop();
		    op2=pop();
		    push(op1);
		    push(op2);
		break;
        default:
            printf("error:unknown command %s\n", s);   
            break;
        }
    }
    printf("\t%.8g\n",pop());
    return 0;
}
#define MAXVAL 100
#include <ctype.h>
int sp = 0;
double val[MAXVAL];
void push(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else
    {
        printf("error:stack full,can't push %g\n", f);
    }
}
int getop(char s[])
{
    if (*s> '9' || *s < '0')
        return *s;
    else
       
        return NUMBER;
}
double pop(void)
{
    if (sp > 0)
        return val[--sp];
    else
    {
        printf("error:stack empty\n");
        return 0.0;
    }
}
