#include<iostream>
#include<iomanip>
#include<vector>

int main() {
	std::vector<double> data1(1000,0.0), data2(1000,0.0);
	long double sum = 0.0;
	for (double i = 999.0; i > 2.0; --i) {
		
		sum += 1.0 / i;
		data1[i] = sum;
	}
	long double sum1 = 0.0;
	for (double i =2.0 ; i < 1000.0; i++) {

		sum1 += 1.0 / i;
		data2[i] = sum1;
	}
  std::cout << std::setprecision(51)<<"Down addition result = " << sum << '\n';
  std::cout << std::setprecision(51)<<"Up addition result =  " << sum1 << '\n';



	return 0;
}
