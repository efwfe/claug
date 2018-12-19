#include<stdio.h>
enum DAY
{
	MON=1,TUE,WED,THU,FRI,SAT,SUN
};
// 与python不同 第一个成员默认为整型0
enum season 
{
 spring,summer=3,autumn,winter
 };
 
 int main()
 {
 	enum DAY day;
	day = WED;
	printf("%d",day);
	return 1;
}
