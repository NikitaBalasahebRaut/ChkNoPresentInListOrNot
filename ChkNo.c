


/*
    Accept N numbers from user and one number, and check whether that number is present in that array or not.
 */

/*
Input :
N : 8
Array :         12     45    -56      55       45       85      45      96
Number :      45
Output :        TRUE
 
 Input :
 N : 8
 Array :         12     45    -56      55       45       85      45      96
 Number :      55
 Output :        TRUE
 
 Input :
 N : 8
 Array :         12     45    -56      55       45       85      45      96
 Number :      58
 Output :        FALSE
 
 */
 
 #include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOLEAN;

BOOLEAN ChkNo(int arr[],int iSize,int iNo)
{
  int iStart = 0;
  int iEnd = 0;
  
    if(arr == NULL)
    {
        return -1;
    }
    if(iSize <= 0)
    {
        return -1;
    }
	
	for(iStart = 0,iEnd = iSize-1; iStart <= iEnd;iStart++,iEnd--)
	{
	   if(arr[iStart] == iNo)
	   {
		 break;
	   }
       if(arr[iEnd] == iNo)
	   {
		   break;
	   }
	}
	if((arr[iStart] == iNo) || (arr[iEnd] == iNo))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}           


 int main()
 {
   int iNo = 0;
   int *ptr = NULL;
   int iCnt = 0;
   int iValue = 0;
   BOOLEAN bRet = FALSE;
   
   printf("Enter The N Numbers \n");
   scanf("%d",&iNo);
   
   if(iNo == 0)
   {
	   printf("Error : Invalid Input \n");
	   return -1;
   }
   ptr = (int*) malloc (sizeof(int) * iNo);
   
   if(ptr == NULL)
   {
	   printf("Error : unable to allocate memory \n");
	   return -1;
   }
   printf("Enter the values\n");
   for(iCnt = 0; iCnt < iNo; iCnt++)
   {
      scanf("%d",&ptr[iCnt]);
   }
   
   printf("values are \n");
   for(iCnt = 0; iCnt < iNo; iCnt++)
   {
      printf("%d\n",ptr[iCnt]);
   }
   
   printf("Enter the no to cheack that no is present or not\n");
   scanf("%d",&iValue);
   
    bRet = ChkNo(ptr,iNo,iValue);
   
    if(bRet == TRUE)
	{
		printf("No is present \n");
	}
	else
	{
		printf("No is not present \n");
	}
   
      free(ptr);
 return 0;
 }
 
 
 /*
 
 output
 
 Enter The N Numbers
5
Enter the values
45
12
66
78
49
values are
45
12
66
78
49
Enter the no to cheack that no is present or not
66
No is present

D:\ProgramTopicWise\LB\3ProblemsOnNNumbers\ChkNoPresentOrNot>myexe
Enter The N Numbers
4
Enter the values
99
65
78
19
values are
99
65
78
19
Enter the no to cheack that no is present or not
78
No is present

*/