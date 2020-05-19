#include<conio.h>
#include<stdio.h>
#include<string.h>
void display(int q,int score)
{
	switch(q)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		printf("\n\t\t*************************************************");
		printf("\n\t\t*        CONGRATULATIONS Correct Answer!!       *");
		printf("\n\t\t*************************************************");
		printf("\n\t\t*		YOUR SCORE = %d               *",score);
		printf("\n\t\t*************************************************\n\n");
		break;
		default:
		printf("\n Invalid choice");
			getch();
			exit(0);
	}
}

int goforchecking(int q,char ch)
{
	switch(q)
	{
		case 1: if((ch=='A')||(ch=='a'))
				return 1;
			else
				return 0;
			//break;
		case 2: if((ch=='C')||(ch=='c'))
				return 1;
			else
				return 0;
			//break;
		case 3: if((ch=='C')||(ch=='c'))
				return 1;
			else
				return 0;
			//break;
		case 4: if((ch=='B')||(ch=='b'))
				return 1;
			else
				return 0;
			//break;
		case 5: if((ch=='D')||(ch=='d'))
				return 1;
			else
				return 0;
			//break;
		case 6: if((ch=='C')||(ch=='c'))
				return 1;
			else
				return 0;
			//break;
		case 7: if((ch=='A')||(ch=='a'))
				return 1;
			else
				return 0;
			//break;
		default:
			printf("\n Invalid Choice!");
			getch();
			exit();
	}
return 0;
}



void goforexpert(int q)
{
	switch(q)
	{
	case 1: printf("\n Expert's Answer = A. Peacock");
		break;
	case 2: printf("\n Expert's Answer = C. Venus ");
		break;
	case 3: printf("\n Expert's Answer = C. Tokyo ");
		break;
	case 4: printf("\n Expert's Answer = B. Liver ");
		break;
	case 5: printf("\n Expert's Answer = D. U.S.A ");
		break;
	case 6: printf("\n Expert's Answer = C. 65 ");
		break;
	case 7: printf("\n Expert's Answer = A. Pacific Ocean ");
		break;
	default:printf("\n Invalid Choice ");
		getch();
		exit(0);

	}
}

void gofor5050(int q)
{
	switch(q)
	{
		case 1:
printf("\n Your Options are:");
printf("\n ************************      ***************************   ");
printf("\n * A. Peacock           *      * B. Swan                 *");
printf("\n ************************      *************************** ");
printf("\n ************************      ***************************");
printf("\n * C.                   *      * D.                      * ");
printf("\n ************************      ***************************");
break;
		case 2:
printf("\n Your Options are:");
printf("\n ***********************       ************************");
printf("\n * A.                  *       * B.      SATURN       * ");
printf("\n ***********************       ************************ ");
printf("\n ***********************       ************************");
printf("\n * C.    VENUS         *       * D.                   * ");
printf("\n ***********************       ************************ ");
break;

		case 3:
printf("\n Your Options are:");
printf("\n ***********************       ************************");
printf("\n * A.                  *       * B.      Mumbai       * ");
printf("\n ***********************       ************************ ");
printf("\n ***********************       ************************");
printf("\n * C.    Tokyo         *       * D.                   * ");
printf("\n ***********************       ************************ ");
break;
		case 4:
printf("\n Your Options are:");
printf("\n ***********************       ************************");
printf("\n * A.     PANCREAS     *       * B.      LIVER        * ");
printf("\n ***********************       ************************ ");
printf("\n ***********************       ************************");
printf("\n * C.                  *       * D.                   * ");
printf("\n ***********************       ************************ ");
break;
		case 5:
printf("\n Your Options are:");
printf("\n ***********************       ************************");
printf("\n * A.                  *       * B.                   * ");
printf("\n ***********************       ************************ ");
printf("\n ***********************       ************************");
printf("\n * C.  UNITED KINGDOM  *       * D.      U.S.A        * ");
printf("\n ***********************       ************************ ");
break;
		case 6:
printf("\n Your Options are:");
printf("\n ***********************       ************************");
printf("\n * A.                  *       * B.      60           * ");
printf("\n ***********************       ************************ ");
printf("\n ***********************       ************************");
printf("\n * C.    65            *       * D.                   * ");
printf("\n ***********************       ************************ ");
break;
		case 7:
printf("\n Your Options are:");
printf("\n ************************       ************************");
printf("\n * A.The Pacific Ocean  *       * B.                   * ");
printf("\n ************************       ************************ ");
printf("\n ************************       ************************");
printf("\n * C.The Atlantic Ocean *       * D.                   * ");
printf("\n ************************       ************************ ");
break;
default:
	printf("\n Invalid choice!! ");
	getch();
	exit(0);
	}
}
void main()
{
int validity=0,l50=0,le=0,q=0,score=0;
char name[25];
char ch;
int age,l,ll;

clrscr();
printf("\n                        WELCOME TO QUIZ GAME");
printf("\n Enter Your Name:");
gets(name);
printf("\n Entet Your Age:");
scanf("%d",&age);
printf("\n                         LETS START \n");
printf("\n **********************************************************");
printf("\n * Q1.Which is the National Bird of India?                * ");
printf("\n **********************************************************");
printf("\n  ");
printf("\n ************************      ***************************   ");
printf("\n * A. Peacock           *      * B. Swan                 *");
printf("\n ************************      *************************** ");
printf("\n ************************      ***************************");
printf("\n * C. Crow              *      * D. Sparrow              * ");
printf("\n ************************      ***************************");
q++;
if((l50==0)||(le==0))
{
	printf("\n Do u want to use  Lifeline: 1->YES  2->NO \n\t");
	scanf("%d",&l);
	if(l==1)
	{
		printf("\n Your Life line Are:");
		if(l50==0)
		{
		printf("\n **********");
		printf("\n 1. 50-50 * ");
		printf("\n ********** ");
		}
		if(le==0)
		{
		printf("\n ****************** ");
		printf("\n 2. Expert Advice *");
		printf("\n ******************");
		}
		printf("\n\t");
		scanf("%d",&ll);
			switch(ll)
				{
				case 1:gofor5050(q);
					l50++;
					printf("\n Enter Your Answer:");
					scanf(" %c",&ch);
					validity=goforchecking(q,ch);
					goto check1;

				case 2:goforexpert(q);
					le++;
					printf("\n Enter Your Answer:");
					scanf(" %c",&ch);
					validity=goforchecking(q,ch);
					goto check1;

				}
	}
	else if(l==2)
	{
	printf("\n Enter Your Answer:");
	scanf(" %c",&ch);
	validity=goforchecking(q,ch);
	goto check1;
	}
}
else
{
printf("\n********************************************************");
printf("\n*              You Have No lifelines left              *");
printf("\n********************************************************");
printf("\n* Give Your Answer:");
scanf("%c",&ch);
validity=goforchecking(q,ch);
goto check1;
}
check1:
if(validity==1)
{
score=score+1000;
display(q,score);
goto nextquestion2;
}
else
{
printf("\n*****************************************************************");
printf("\n*                        Wrong Answer                           *");
printf("\n*****************************************************************");
goto end;
}
nextquestion2:
printf("\n***********************************************************************");
printf("\n*  Q2. Which planet is known as the Morning Star or the Evening Star? *");
printf("\n***********************************************************************");
printf("\n");
printf("\n ***********************       ************************");
printf("\n * A.     JUPITAR      *       * B.      SATURN       * ");
printf("\n ***********************       ************************ ");
printf("\n ***********************       ************************");
printf("\n * C.    VENUS         *       * D.      NEPTUNE      * ");
printf("\n ***********************       ************************ ");
q++;
if((l50==0)||(le==0))
{
	printf("\n Do u want to use  Lifeline: 1->YES  2->NO \n\t");
	scanf("%d",&l);
	if(l==1)
	{
		printf("\n Your Life line Are:");
		if(l50==0)
		{
		printf("\n **********");
		printf("\n 1. 50-50 * ");
		printf("\n ********** ");
		}
		if(le==0)
		{
		printf("\n ****************** ");
		printf("\n 2. Expert Advice *");
		printf("\n ******************");
		}
		printf("\n\t");
		scanf("%d",&ll);
			switch(ll)
				{
				case 1:gofor5050(q);
					l50++;
					printf("\n Enter Your Answer:");
					scanf(" %c",&ch);
					validity=goforchecking(q,ch);
					goto check2;

				case 2:goforexpert(q);
					le++;
					printf("\n Enter Your Answer:");
					scanf(" %c",&ch);
					validity=goforchecking(q,ch);
					goto check2;

				}
	}
	else if(l==2)
	{
	printf("\n Enter Your Answer:");
	scanf(" %c",&ch);
	validity=goforchecking(q,ch);
	goto check2;
	}
}
else
{
printf("\n********************************************************");
printf("\n*              You Have No lifelines left              *");
printf("\n********************************************************");
printf("\n* Give Your Answer:");
scanf("%c",&ch);
validity=goforchecking(q,ch);
goto check2;
}

check2:
if(validity==1)
{
score=score+1000;
display(q,score);
goto nextquestion3;
}
else
{
printf("\n*****************************************************************");
printf("\n*                        Wrong Answer                           *");
printf("\n*****************************************************************");
goto end;
}
nextquestion3:
printf("\n**********************************************************************");
printf("\n*  Q3. The Most Populous city in world is ?                          *");
printf("\n**********************************************************************");
printf("\n");
printf("\n ***********************       ************************");
printf("\n * A.     Paris        *       * B.      Mumbai       * ");
printf("\n ***********************       ************************ ");
printf("\n ***********************       ************************");
printf("\n * C.    Tokyo         *       * D.      London       * ");
printf("\n ***********************       ************************ ");
q++;
if((l50==0)||(le==0))
{
	printf("\n Do u want to use  Lifeline: 1->YES  2->NO \n\t");
	scanf("%d",&l);
	if(l==1)
	{
		printf("\n Your Life line Are:");
		if(l50==0)
		{
		printf("\n **********");
		printf("\n 1. 50-50 * ");
		printf("\n ********** ");
		}
		if(le==0)
		{
		printf("\n ****************** ");
		printf("\n 2. Expert Advice *");
		printf("\n ******************");
		}
		printf("\n\t");
		scanf("%d",&ll);
			switch(ll)
				{
				case 1:gofor5050(q);
					l50++;
					printf("\n Enter Your Answer:");
					scanf(" %c",&ch);
					validity=goforchecking(q,ch);
					goto check3;

				case 2:goforexpert(q);
					le++;
					printf("\n Enter Your Answer:");
					scanf(" %c",&ch);
					validity=goforchecking(q,ch);
					goto check3;

				}
	}
	else if(l==2)
	{
	printf("\n Enter Your Answer:");
	scanf(" %c",&ch);
	validity=goforchecking(q,ch);
	goto check3;
	}
}
else
{
printf("\n********************************************************");
printf("\n*              You Have No lifelines left              *");
printf("\n********************************************************");
printf("\n* Give Your Answer:");
scanf("%c",&ch);
validity=goforchecking(q,ch);
goto check3;
}

check3:
if(validity==1)
{
score=score+1000;
display(q,score);
goto nextquestion4;
}
else
{
printf("\n*****************************************************************");
printf("\n*                        Wrong Answer                           *");
printf("\n*****************************************************************");
goto end;
}
nextquestion4:
printf("\n**********************************************************************");
printf("\n*  Q4. The Largest Gland in the Human Body is ?                      * ");
printf("\n**********************************************************************");
printf("\n");
printf("\n ***********************       ************************");
printf("\n * A.     PANCREAS     *       * B.      LIVER        * ");
printf("\n ***********************       ************************ ");
printf("\n ***********************       ************************");
printf("\n * C.    PITUITARY     *       * D.      ADRENAL      * ");
printf("\n ***********************       ************************ ");
q++;
if((l50==0)||(le==0))
{
	printf("\n Do u want to use  Lifeline: 1->YES  2->NO \n\t");
	scanf("%d",&l);
	if(l==1)
	{
		printf("\n Your Life line Are:");
		if(l50==0)
		{
		printf("\n **********");
		printf("\n 1. 50-50 * ");
		printf("\n ********** ");
		}
		if(le==0)
		{
		printf("\n ****************** ");
		printf("\n 2. Expert Advice *");
		printf("\n ******************");
		}
		printf("\n\t");
		scanf("%d",&ll);
			switch(ll)
				{
				case 1:gofor5050(q);
					l50++;
					printf("\n Enter Your Answer:");
					scanf(" %c",&ch);
					validity=goforchecking(q,ch);
					goto check4;

				case 2:goforexpert(q);
					le++;
					printf("\n Enter Your Answer:");
					scanf(" %c",&ch);
					validity=goforchecking(q,ch);
					goto check4;

				}
	}
	else if(l==2)
	{
	printf("\n Enter Your Answer:");
	scanf(" %c",&ch);
	validity=goforchecking(q,ch);
	goto check4;
	}
}
else
{
printf("\n********************************************************");
printf("\n*              You Have No lifelines left              *");
printf("\n********************************************************");
printf("\n* Give Your Answer:");
scanf("%c",&ch);
validity=goforchecking(q,ch);
goto check4;
}
check4:
if(validity==1)
{
score=score+1000;
display(q,score);
goto nextquestion5;

}
else
{
printf("\n*****************************************************************");
printf("\n*                        Wrong Answer                           *");
printf("\n*****************************************************************");
goto end;
}
nextquestion5:
printf("\n**********************************************************************");
printf("\n*  Q5. The System of Dual Citizenship exists in  ");
printf("\n**********************************************************************");
printf("\n");
printf("\n ***********************       ************************");
printf("\n * A.     INDIA        *       * B.      FRANCE       * ");
printf("\n ***********************       ************************ ");
printf("\n ***********************       ************************");
printf("\n * C.  UNITED KINGDOM  *       * D.      U.S.A        * ");
printf("\n ***********************       ************************ ");
q++;
if((l50==0)||(le==0))
{
	printf("\n Do u want to use  Lifeline: 1->YES  2->NO \n\t");
	scanf("%d",&l);
	if(l==1)
	{
		printf("\n Your Life line Are:");
		if(l50==0)
		{
		printf("\n **********");
		printf("\n 1. 50-50 * ");
		printf("\n ********** ");
		}
		if(le==0)
		{
		printf("\n ****************** ");
		printf("\n 2. Expert Advice *");
		printf("\n ******************");
		}
		printf("\n\t");
		scanf("%d",&ll);
			switch(ll)
				{
				case 1:gofor5050(q);
					l50++;
					printf("\n Enter Your Answer:");
					scanf(" %c",&ch);
					validity=goforchecking(q,ch);
					goto check5;

				case 2:goforexpert(q);
					le++;
					printf("\n Enter Your Answer:");
					scanf(" %c",&ch);
					validity=goforchecking(q,ch);
					goto check5;

				}
	}
	else if(l==2)
	{
	printf("\n Enter Your Answer:");
	scanf(" %c",&ch);
	validity=goforchecking(q,ch);
	goto check5;
	}
}
else
{
printf("\n********************************************************");
printf("\n*              You Have No lifelines left              *");
printf("\n********************************************************");
printf("\n* Give Your Answer:");
scanf(" %c",&ch);
validity=goforchecking(q,ch);
goto check5;
}

check5:
if(validity==1)
{
score=score+1000;
display(q,score);
goto nextquestion6;
}
else
{
printf("\n*****************************************************************");
printf("\n*                        Wrong Answer                           *");
printf("\n*****************************************************************");
goto end;
}
nextquestion6:
printf("\n**********************************************************************");
printf("\n*  Q6. Chief Justice of Supreme Court can hold office until          *");
printf("\n*      the age of ?                                                  *");
printf("\n**********************************************************************");
printf("\n");
printf("\n ***********************       ************************");
printf("\n * A.     58           *       * B.      60           * ");
printf("\n ***********************       ************************ ");
printf("\n ***********************       ************************");
printf("\n * C.    65            *       * D.      62           * ");
printf("\n ***********************       ************************ ");
q++;
if((l50==0)||(le==0))
{
	printf("\n Do u want to use  Lifeline: 1->YES  2->NO \n\t");
	scanf("%d",&l);
	if(l==1)
	{
		printf("\n Your Life line Are:");
		if(l50==0)
		{
		printf("\n **********");
		printf("\n 1. 50-50 * ");
		printf("\n ********** ");
		}
		if(le==0)
		{
		printf("\n ****************** ");
		printf("\n 2. Expert Advice *");
		printf("\n ******************");
		}
		printf("\n\t");
		scanf("%d",&ll);
			switch(ll)
				{
				case 1:gofor5050(q);
					l50++;
					printf("\n Enter Your Answer:");
					scanf(" %c",&ch);
					validity=goforchecking(q,ch);
					goto check6;

				case 2:goforexpert(q);
					le++;
					printf("\n Enter Your Answer:");
					scanf(" %c",&ch);
					validity=goforchecking(q,ch);
					goto check6;

				}
	}
	else if(l==2)
	{
	printf("\n Enter Your Answer:");
	scanf(" %c",&ch);
	validity=goforchecking(q,ch);
	goto check6;
	}
}
else
{
printf("\n********************************************************");
printf("\n*              You Have No lifelines left              *");
printf("\n********************************************************");
printf("\n* Give Your Answer:");
scanf("%c",&ch);
validity=goforchecking(q,ch);
goto check6;
}

check6:
if(validity==1)
{
score=score+1000;
display(q,score);
goto nextquestion7;
}
else
{
printf("\n*****************************************************************");
printf("\n*                        Wrong Answer                           *");
printf("\n*****************************************************************");
goto end;
}
nextquestion7:
printf("\n**********************************************************************");
printf("\n*  Q7. Largest Ocean in the World is ?                               *");
printf("\n**********************************************************************");
printf("\n");
printf("\n ************************       ************************");
printf("\n * A.The Pacific Ocean  *       * B.  The Indian Ocean * ");
printf("\n ************************       ************************ ");
printf("\n ************************       ************************");
printf("\n * C.The Atlantic Ocean *       * D. The Antartic      * ");
printf("\n ************************       ************************ ");
q++;
if((l50==0)||(le==0))
{
	printf("\n Do u want to use  Lifeline: 1->YES  2->NO \n\t");
	scanf("%d",&l);
	if(l==1)
	{
		printf("\n Your Life line Are:");
		if(l50==0)
		{
		printf("\n **********");
		printf("\n 1. 50-50 * ");
		printf("\n ********** ");
		}
		if(le==0)
		{
		printf("\n ****************** ");
		printf("\n 2. Expert Advice *");
		printf("\n ******************");
		}
		printf("\n\t");
		scanf("%d",&ll);
			switch(ll)
				{
				case 1:gofor5050(q);
					l50++;
					printf("\n Enter Your Answer:");
					scanf(" %c",&ch);
					validity=goforchecking(q,ch);
					goto check7;

				case 2:goforexpert(q);
					le++;
					printf("\n Enter Your Answer:");
					scanf(" %c",&ch);
					validity=goforchecking(q,ch);
					goto check7;

				}
	}
	else if(l==2)
	{
	printf("\n Enter Your Answer:");
	scanf(" %c",&ch);
	validity=goforchecking(q,ch);
	goto check7;
	}
}
else
{
printf("\n********************************************************");
printf("\n*              You Have No lifelines left              *");
printf("\n********************************************************");
printf("\n* Give Your Answer:");
scanf(" %c",&ch);
validity=goforchecking(q,ch);
goto check7;
}

check7:
if(validity==1)
{
score=score+1000;
display(q,score);
goto nextquestion8;
}
else
{
printf("\n*****************************************************************");
printf("\n*                        Wrong Answer                           *");
printf("\n*****************************************************************");
goto end;
}
nextquestion8:
if(q==7)
{
printf("\n***************************************************************");
printf("\n*                       CONGRATULATIONS !!                    *");
printf("\n***************************************************************");
printf("\n*                         YOU WON !!                          *");
printf("\n***************************************************************");
printf("\n*                      YOUR FINAL SCORE IS: %d             *",score);
printf("\n***************************************************************");
getch();
}
else
{
end:
printf("\n*****************************************************************");
printf("\n*                         GAME OVER !!                          *");
printf("\n*****************************************************************");
printf("\n*                      YOUR FINAL SCORE IS: %d                *",score);
printf("\n*****************************************************************");
getch();
}
}