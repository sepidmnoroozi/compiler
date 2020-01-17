#include <stdio.h>
#include <stdio.h>
int main()
{

void* returnAddress;
double * top = (double*) malloc(1000 * sizeof(double));
void ** labelsTop = (void**) malloc(1000 * sizeof(void*));
top += 1000;
labelsTop += 1000;
double TT0;
double grade;
double _rating;
goto _main;

//function body ----------- 
_main: //function decleration


 // function body:

_rating = 9;
grade = 10;
// if statement
//new
if(grade>16) goto L0;
goto L1;

L0: _rating = 4;
TT0 = _rating * _rating;
_rating = TT0;
goto L1; //next label

L1: //end of if statement - next
printf("%lf", _rating); 

// function ended
goto end;



end : return 0;
}