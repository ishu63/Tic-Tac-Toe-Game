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
	
	printf("\t1 |2 |3\n");
	printf("\t--------\n");
	printf("\t4 |5 |6\n");
	printf("\t--------\n");
    printf("\t7 |8 |9\n");
    
    return 0;
}

int main()
{
	int i=1,j=1,k=0,pos,counter=0;
	char val[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
	printf("\nThis is a Tic Tac Toe Game:\n Remember this Positions to play this game :\n");
	print_board1(val);
    for(i=1;i<9;i++)
    {
    	start:
    		printf("\nWhere do you want to enter O:\t");
			scanf("%d",&pos);
    		if(pos<1 || pos>9)
    		{
    				printf("\nWron input!!!\nPlease enter correct position:\n");
    				goto start;
			}
    		if(val[pos-1]=='O' || val[pos-1]=='X')
    		{
    				printf("This position is already filled please enter correct possition: \n");
    				goto start;
			}
    		val[pos-1]='O';
	    	counter++;
	    	for(j=0;j<9;j++)
	    	{
	    			if((val[j]!='O' && val[j]!='X'))
	    			{
	    					val[j]='X';
	    					counter++;
	    					break;
	    			}	
	        }
	    	print_board(val);
	    	if(counter>=4)
	    	{
	    			if(counter%2!=0)//testing for O
	    			{
	    					if((val[0]=='X'&&val[1]=='X'&&val[2]=='X') ||
							   (val[3]=='X'&&val[4]=='X'&&val[5]=='X') ||
							   (val[6]=='X'&&val[7]=='X'&&val[8]=='X') ||
							   (val[0]=='X'&&val[3]=='X'&&val[6]=='X') ||
							   (val[1]=='X'&&val[4]=='X'&&val[7]=='X') ||
							   (val[2]=='X'&&val[5]=='X'&&val[8]=='X') ||
							   (val[0]=='X'&&val[4]=='X'&&val[8]=='X') ||
							   (val[2]=='X'&&val[4]=='X'&&val[6]=='X'))
	    					{
	    			  	      	printf("Yooo!!\nI win!!!!!!!\n");
	    			  	     	return 0;
					 		}
	    			}
	    			else
	    		     	{ 
	    		     	  	printf("%d",counter);
	    		     	  	if((val[0]=='O'&&val[1]=='O'&&val[2]=='O') ||
							   (val[3]=='O'&&val[4]=='O'&&val[5]=='O') ||
							   (val[6]=='O'&&val[7]=='O'&&val[8]=='O') ||
							   (val[0]=='O'&&val[3]=='O'&&val[6]=='O') ||
							   (val[1]=='O'&&val[4]=='O'&&val[7]=='O') ||
							   (val[2]=='O'&&val[5]=='O'&&val[8]=='O') ||
							   (val[0]=='O'&&val[4]=='O'&&val[8]=='O') ||
							   (val[2]=='O'&&val[4]=='O'&&val[6]=='O'))
	    				    {
	    					  printf("congo!!\n");
	    			          printf("You win!!!!!!!!\n");
	    			          return 0;
					        } 
	    		     	  
	    			    }
	    		}
	    		if(counter>=8)
	    		{
	    			printf("\n Draw!!!!!");
	    			return;
	    		}
	    }
    	getch();
    	return 0;
}

