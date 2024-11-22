#include <stdio.h>
int main(){
	int number , reverse ,thousand, hundred, ten,unit;
	   printf("nhap so 4 chu so : ");
    	scanf("%d", &number);
	thousand =number/1000;
	hundred = (number/100)%10;
	ten=(number/10)%10;
	unit= number%10;
	reverse =thousand*1 + ten*100 + unit*1000 + hundred*10;
	printf("so nhap vao la : %d\n", number);
	printf("so dao nguoc cua so %d la: %d\n", number,reverse);
    
    return 0;
}
