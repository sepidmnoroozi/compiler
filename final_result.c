#include <stdio.h>
#include <stdio.h>
int main()
{

void* returnAddress;
double * top = (double*) malloc(1000 * sizeof(double));
void ** labelsTop = (void**) malloc(1000 * sizeof(void*));
top += 1000;
labelsTop += 1000;
double TT0, TT1, TT2, TT3, TT4, TT5, TT6;
goto _main;

//function body ----------- 
_main: //function decleration


 // function body:
double comb_;
double n;
double r;
n = 5;
r = 2;
comb_=TT0;
printf("%lf", comb_); 
printf("%lf", n); 

// function ended
goto end;

//function body ----------- 
combination: //function decleration

// fetching arguments

n = *top; // pop n
top = top + 1;
r = *top; // pop r
top = top + 1;

 // function body:
// if statement
//new
if(r==0) goto L2;
goto L1;

L1: // logical calculation (OR)
if(r==n) goto L2;
goto L3;

L2: // push return value to stack
top = top - 1; // push 1
*top = 1;

returnAddress = *labelsTop; // pop return address
labelsTop = labelsTop + 1;

goto *returnAddress; // return from function

goto L3; //next label

L3: //end of if statement - next
// push return value to stack

top = top - 1; // push comb_
*top = comb_;

top = top - 1; // push n
*top = n;

top = top - 1; // push r
*top = r;

top = top - 1; // push n
*top = n;

top = top - 1; // push r
*top = r;

labelsTop = labelsTop - 1; // push address{L4}
*labelsTop = &&L4;

// store argumentsTT1 = n - 1;
TT2 = r - 1;

top = top - 1; // push TT2
*top = TT2;

top = top - 1; // push TT1
*top = TT1;



 goto ;
// return label:
L4:;
// load return value
TT3 = *top; // pop TT3
top = top + 1;

  varaiables:
r = *top; // pop r
top = top + 1;

n = *top; // pop n
top = top + 1;

r = *top; // pop r
top = top + 1;

n = *top; // pop n
top = top + 1;

comb_ = *top; // pop comb_
top = top + 1;



top = top - 1; // push comb_
*top = comb_;

top = top - 1; // push n
*top = n;

top = top - 1; // push r
*top = r;

top = top - 1; // push n
*top = n;

top = top - 1; // push r
*top = r;

labelsTop = labelsTop - 1; // push address{L5}
*labelsTop = &&L5;

// store argumentsTT4 = n - 1;

top = top - 1; // push r
*top = r;

top = top - 1; // push TT4
*top = TT4;



 goto ;
// return label:
L5:;
// load return value
TT5 = *top; // pop TT5
top = top + 1;

  varaiables:
r = *top; // pop r
top = top + 1;

n = *top; // pop n
top = top + 1;

r = *top; // pop r
top = top + 1;

n = *top; // pop n
top = top + 1;

comb_ = *top; // pop comb_
top = top + 1;


TT6 = TT3 + TT5;
top = top - 1; // push TT6
*top = TT6;

returnAddress = *labelsTop; // pop return address
labelsTop = labelsTop + 1;

goto *returnAddress; // return from function


// function ended
returnAddress = *labelsTop; // pop return address
labelsTop = labelsTop + 1;

goto *returnAddress; // return from function



end : return 0;
}