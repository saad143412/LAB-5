#include<stdio.h>
void main()
{
	/*Programmer Name:Muhammad Saad
	  Reg.No:20MDELE163           || */
  	 
	printf("Programmer Name:Muhammad Saad\nReg.No:20MDELE163\n\n");
	
	int i;                      //declearation of enteger
	char name[15],rollno[10];   //declearation of Name & Reg.No
	printf("plz enter your Name and Reg.No:");
	scanf("%s %s",&name,&rollno);
	
	for(i=1;i<=7;i++)         //using For loop
	{
		printf("%d.%s   %s\n",i,name,rollno);
	}                        //End of For loop Block

}                           //End of main Block


