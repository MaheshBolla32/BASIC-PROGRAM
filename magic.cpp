#include<iostream>
using namespace std;
    class Magicsquare
    {
		
		int n,row,column,i;
		int matrix[50][50];
		
		  public:
		   void getdata();
		    void initializematrix();
   		     void putdata();
		      void printmatrix();
			 
	};	
		void Magicsquare::getdata()
		{
			cout<<"Enter n for(n*n)matrix: ";
			cin>>n;
			cout<<endl;
			for (row = 1; row < n; row++)
			  {	
			
		        for(column = 0; column < n;column++)
				 {
                   cout<<"Enter  number in row("<<row+1<<"),column("<<column+1<<"):";
 				   cin>>matrix[row][column];
				   cout<<endl;
				 }
			  }
		
		void Magicsquare::initializematrix()
		{
			
		}
		
		
		
		
		
		
		
		
         return 0;
		 
	}