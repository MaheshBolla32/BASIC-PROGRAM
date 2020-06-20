#include<iostream>
using namespace std;

class Calc
{
           int num1,num2;
	
	public:
	  
	  
	   char op;    //operator is declared in public coz it is used in switch
	    
		Calc()      //constructor
		
		{
            cout<<"Enter operation to be performed in the format 'number operator number'"<<endl;
			cin>>num1>>op>>num2;
		}
		
		void add();
		void subtract();
		void multiply();
		void divide();
		void mod();
	
};

    void Calc::add()
	{ 
	    cout<<"Answer: "<<num1+num2<<endl;
	}

	void Calc::subtract()
	{
		cout<<"Answer: "<<num1-num2<<endl;
	}
	
	void Calc::multiply()
	{
		cout<<"Answer: "<<num1*num2<<endl;
	}	
	
	void Calc::divide()
	{
		cout<<"Answer: "<<(float)num1/num2<<endl;
	}
	
	void Calc::mod()
	{
		cout<<"Answer: "<<num1%num2<<endl;
	}
	
	
	
	
	int main()
	{
		 int _condition=1;
		 
		 do{
			   Calc obj;
			   
			   switch (obj.op)

               {
				     case '+':
					       obj.add();
						   break;
		             case '-':
					       obj.subtract();
						   break;
					 case '*':
                           obj.multiply();
                           break;
                     case '/':
                           obj.divide();
                           break;
                     case '%':
                           obj.mod();
						   break;
					 default:	   
				           cout<<"You entered wrong character"<<endl;
			   }
			   
			   cout<<"Do you want to continue? \n1: Yes\n0: No\n" ;
			   cin>>_condition;
		   }while(_condition);
		   
		   
		   return 0;
}		   
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		                    
		
		
		
		
		
	