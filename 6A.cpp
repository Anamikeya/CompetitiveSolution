#include<iostream>
#include<algorithm>

int main()
{
	int length[4] = {0};
	for(int i = 0; i < 4; i++)
		std::cin >> length[i];

	std::sort(length, length + 4);	
	int fd,sd;
	fd = length[1] + length[2] - length[3];
	sd = length[0] + length[1] - length[2];

	if(fd > 0 || sd > 0)
		std::cout << "TRIANGLE";
	else if(fd == 0 || sd == 0)
		std::cout << "SEGMENT";
	else
		std::cout << "IMPOSSIBLE";
	int a;
	std::cin >> a;
	return 0;

}
#include<iostream>
int gcd (int a, int b){return (b == 0) ? a : gcd (b, a%b);}
int mian()
{
    int first, second;
    std::cin >> first >> second;
    const int  numsides = 6;
    int nom = numsides - first + 1, den = numsides;
    int div = gdc(nom, den);
    nom = nom/div;
    den = den/div;
    std::cout << nom << "/" <<den;
    return 0;
    
}
#include <cstdio>

int gcd (int a, int b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    int first, second; scanf("%d %d", &first, &second);
    if(first < second){first = second;}

    const int numSides(6);
    int nom(numSides - first + 1), den(numSides);
    int div(gcd(nom, den)); nom /= div; den /= div;
    printf("%d/%d", nom, den);
    return 0;
}