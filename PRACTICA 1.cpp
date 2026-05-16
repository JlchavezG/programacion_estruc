#include <iostream>
using namespace std;
int main() {
int N1, N2, N3;
cout<<"ingresa el primer numero: ";
cin>>N1;
cout<<"ingresa el segundo numero: ";
cin>>N2;
cout<<"ingresa el tercer numero: ";
cin>>N3;
if (N1 >=N2 && N1 >=N3) {
	cout<< "el mayor es:" <<N1;
}
else if (N2 >= N1 && N2 >=N3) {
	cout<<"el mayor es:" <<N2;
}
else {
cout<<"el mayor es:" <<N3;
}
if (N1 <=N2 && N1 <=N3) {
	cout<< "el menor es:" <<N1;
}
else if (N2 <= N1 && N2 <=N3) {
	cout<<"el menor es:" <<N2;
}
else {
cout<<"el menor es:" <<N3;
}
return 0;
}
