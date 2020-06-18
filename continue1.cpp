/*#include<iostream>
using namespace std;
int main(){
	int i;
	for (i=0;i<10;i++){
		if (i==5){
			continue;
		}
		else if (i==6){
			continue ;
		}
		}
		cout<<i<<"\n";
	}return 0;
}*/
#include <iostream>
using namespace std;
int main(){
int i = 0;
while (i<10){
	if (i==5)
	{
	i++;
		continue;
	}
	cout<< i<<"\n";
	i++;
}return 0;
}
