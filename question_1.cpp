#include<iostream>
using namespace std;
namespace file1{
	int avg(int a, int b){
		return (a +b)/2;
	}
}

namespace file2{
	double avg(double a, double b){
		return (a+b)/2.0;
	}
}
int main(){
// using with directives
    {
    using namespace file1 ; // for integer average
    cout<< " average of two integer value of 3 and 6 is "<< avg(3,6)<< endl;
    }
    {
    using namespace file2 ;
    cout<< "floting average of two integer value of 3 and  6 is "<< avg(3,6)<< endl;
    }
    
// using without derivatives

    cout<< " integer average of two no. is " <<file1::avg(3,6)<<endl;
    cout<<" floating average of two no. id "<< file2::avg(3,6)<<endl;
    
    return 0;
}
