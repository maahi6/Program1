
  /*
  @Title: Program to find the type of any variable
  @Written by : Noor Fatima.
  */
  
  
  
  #include<iostream>
  #include<typeinfo>
  using namespace std;
  int main()
  
  {
  	int marks =50;
	string name="Noor Fatima";
  	float average=50.3;
  	char grade='A';
  	
  	cout<<"the data type of marks is="<<typeid(marks).name()<<endl;
  	cout<<"the data type of name is="<<typeid(name).name()<<endl;
  	cout<<"the data type of average is="<<typeid(average).name()<<endl;
  	cout<<"the data type of grade is="<<typeid(grade).name()<<endl;
  	return 0;
  }
  
  
