#include<stdio.h>
#include<conio.h>
main()
{
	char a;
	printf("Enter a Character : ");
	scanf("%c",&a);
	switch(a){
	case'a':
	case'e':
	case'i':
	case'o':
	case'u':
		printf("This is vowel ");
		break;
	default:
		printf("This is consonant");
    }
    getch();
}
