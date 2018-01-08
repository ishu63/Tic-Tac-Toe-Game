#include<conio.h>
#include<stdio.h>

int print_board(char val[9])
{
	
	printf("\t%c |%c |%c\n",val[0],val[1],val[2]);
	printf("\t--------\n");
	printf("\t%c |%c |%c\n",val[3],val[4],val[5]);
	printf("\t--------\n");
    printf("\t%c |%c |%c\n",val[6],val[7],val[8]);
    
    return 0;
}

int print_board1(char val[9])
{
	
	printf("\t\t%c |%c |%c\n",val[0],val[1],val[2]);
	printf("\t\t--------\n");
	printf("\t\t%c |%c |%c\n",val[3],val[4],val[5]);
	printf("\t\t--------\n");
    printf("\t\t%c |%c |%c\n",val[6],val[7],val[8]);
    
    return 0;
}

int main()
{
	int i=1,j=1,k=0;
	char val[9]={'X',' ',' ',' ',' ',' ',' ',' ',' '};
	printf("This is the intial state:");
	print_board(val);
	printf("This are all posibilities after that state:");
    for(i=1;i<9;i++)
    {           
			printf("%d):\n",i);
    		val[i]='O';
			print_board(val);
        	for(k=1;k<9;k++)
       	 	{
                	if(val[k]!='X' && val[k]!='O')
                	{
                			printf("\t%d):\n",k);
                    		val[k]='O';
            				print_board1(val);
                			val[k]=' ';
                    }
            }
			val[i]=' ';	
			j++;
    }
	getch();
	return 0;
}

