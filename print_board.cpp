#include<conio.h>
#include<stdio.h>

int print_board(char val[9])
{
	
	printf("\t%c |%c |%c\n",val[0],val[1],val[2]);
	printf("\t---------\n");
	printf("\t%c |%c |%c\n",val[3],val[4],val[5]);
	printf("\t---------\n");
    printf("\t%c |%c |%c\n",val[6],val[7],val[8]);
    
    return 0;
}

int main()
{   

    int i=1,j=1,k=0;
	char val[9]={'X',' ',' ',' ',' ',' ',' ',' ',' '};
	print_board(val);
    
    getch();
    return 0;
}
