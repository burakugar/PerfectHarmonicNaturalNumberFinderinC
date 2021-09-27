/* BURAK UGAR CSE 102 HW3 200104004100 ATTENTION: PLEASE MODIFY THE MAIN FOR THE PURPOSE OF USING EACH PART */
#include <stdio.h>
#include <stdlib.h> /* for the exit function to stop the program */
#include <math.h>

	/*********************************** FIBONACCI PART 1 *******************************************/


void calculate_fibonacci_sequence(){ /* this function implements iterations */
/* design of this function: controlling each time whether the user is entered * or not.  */
float first=0, sec=1, next; /*same values for fibonacci sequence's implmentation */
int i,n,s,flag=0;
char c,d,g;
printf("Please enter term(s) number:"); /* we arewaiting user to enter first character */
do {
s=scanf("%d",&n); /* s is the return value of the scanf which helps us to understand does user enter an integer or not */
	if(n<0 && s==1){ /* if s==1 but n which is the integer value's itself is not greater than 0 that means given value is negative int*/
		printf("Please enter positive term(s) number:");
		c=getchar(); /* we are waiting for the next input */
		}
	else if(n>0 && s==1){
		first=0; /* if s==1 but n which is the integer value's itself is  greater than 0 that means given value is positive int */
		sec=1;
    	printf("Fibonacci sequence:\n");
    		for (i = 1; i <= n; i++){ /* fibonacci sequence implementation */
    			next = first + sec;
    			first = sec;
   				sec = next; 
    			printf("%.0f\n", first);
				}
					printf("Please enter term(s) number:"); 
					c=getchar(); /* we are waiting for the next input */
						}
	else if(s==0){
    	c=getchar(); /* if user enters not an integer value s will be 0 and if c is also * then stop the program but c is not * then entered value is a char */
    	d=getchar();
    	if(c!='*'){
    	printf("Please enter numeric term(s) number:");
   			}
   		else{
   			break;
		   }
    }
  }
  while(c!='*' || d=='\n' ); /* until user enters * */
  }


/************************** SECOND PART (HARMONIC- PERFECT NUMBER DECISION) *************************/
int isPerfect(int number){ /* Function decides whether the given number is a perfect number or not */
    int remainder; 
	int sum = 0, i=1; /* structure: start from 1 and untill you reach the number-1 (no need to check the number's itself) check 
	whether the numbers between that interval is dividing the number or no, if it can then add it to sum*/
    while (i<number-1)
    {
        remainder = number % i;
	if (remainder == 0)
        {
        	sum+=i;
        }
        i++;
    }
    if (sum != number){
        return 0; /* at the end if the sum is not the number's itself then return 0 */
    }
    else
        return 1;
}
int isInteger(double number){ /* this function receives a double value as an input and decides whether is it int or not using typecast
property */
	
    if((number == (int)number)) /*(int)num : Type casting */
    {
    	return 1; /* we know if the typecasted value is equal the number's itself it is integer */
	}
	else{
		return 0;
	}
}

void findallProperties(int number){ /* this functions finds all the properties such as is the given number is perfect number or not,
it's natural divisors and also is it a harmonic divisor number or not */
	int i,count=0;
	double sum=0;
	double result;
	printf("Is perfect number?:"); /* perfect number implementation*/
	if(isPerfect(number)==1){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	printf("Natural Number Divisors:"); /* to find natural divisors we are looking the numbers between 1 and that number including itself*/
    for (i = 1; i <= number; ++i) {
		if (number % i == 0) { /* if the number/ tested number remains 0 than it is a divisor of that number */
            printf("%d ", i);
            sum += (double) 1/i; /* typecasting for getting the right sum */
            count++; /* counting the number of divisors */ 
        	}
    	}
    printf("\n");
    printf("Is Harmonic Divisor Number?:"); /*controlling the harmonic divisor number's property */
    result= (double)(count/sum); /* if the number of the div/ sum of them is a integer than this is a harmonic div number */
    if(isInteger(result)==1){
    	printf("Yes\n");
	}
	else{
		printf("No\n");
		}
    }
void decide_perfect_harmonic_number(){ /* this is the main function checks the both perfect and harmonic property that is given in the pdf */
	int n;
	printf("Please enter input number : "); /* function only does want user to enter an input and control if it is an int or not then
	calls the function findallProperties to do all job */
	scanf("%d",&n);
	if(isInteger==0){
		printf("Please enter a valid integer");
		exit(1);
	}
	findallProperties(n);
	}
										/******************** PART 3 *********************/	
void difference_max_min(){ /* this function finds the difference between max and min terms after decide them */
	int i=0; /* property: first get one value from the user than make it both min and max. then continue to take values and as you take
		the value if the current value is bigger than max then max it max, if the current value is less than min then make it min */ 
	float diff;
	float value;
	float max,min;
	printf("Please enter 5 numbers:");
	scanf("%f",&value);
	 max=value;
	 min=value;
	while (i < 4) {
       scanf("%f",&value); 
       if(value>max){
       	max=value;
	   }
	   else if(value<min){
	   	min=value;
	   }
    	i++;
		}
		printf("Maximum number is : %f\n",max);
		printf("Minumum number is : %f\n",min);
    	diff=max-min;
    	printf("Difference between maximum and minimum is %.2f\n",diff);
    }
			/******************** PART 4 *********************/
 void bmi_calculation (){
 	float kg,height,bmi;
	printf("Please enter weight(kg):");
	scanf("%f",&kg);
	printf("Please enter height(m):"); /* calculation the bmi index with given inputs */
	scanf("%f",&height);
	bmi=(float) kg/(height*height);
	
	if(bmi<16.0){
		printf("Your category is:Severely Underweight\n");
	}
	else if(bmi>=16.0&& bmi<18.4){
		printf("Your category is: Underweight\n");
	}
	else if(bmi>=18.5&& bmi<24.9){
		printf("Your category is: Normal\n");
	}
	else if(bmi>=25 && bmi<29.9){
		printf("Your category is: Overweight\n");
	}
	else if(bmi>30){
		printf("Your category is: Obese\n");
	}
 }
 

int main(){
/*calculate_fibonacci_sequence(); */
/*decide_perfect_harmonic_number();*/
/*difference_max_min();*/
/*bmi_calculation(); */

return 0;
}
