#include<stdio.h>
#include<string.h>

int main(void)
{
	char word[10] = "dump";
	word[1] = 'a';
	puts(word);

	char letter1 = *(word + 2);
	char letter2 = word[2];
	char letter = 2[word]; // less common than the above statement of word[3].


	// char letter3 = *(word - 1); not working.
	
	


	// printf("%c\n", letter);

	printf("%c\n", letter1);
	printf("%c\n", letter2);
	// printf("l3 is %c\n", letter3);
	



	char* ptr;
	char c;

	ptr = word; // p is a pointer points to first element of the char array word.
	            // and word is called as constant pointer with just name appearing.

	ptr = word + 1;

	

	printf("before increment pointer points to %c\n", *ptr);
	printf(".....%p address\n", ptr);


	c = *++ptr;    // c = ++ptr; then c = *ptr; points to next element of an array.
	               // dont forget about post and pre increment operator.
	
	printf("*ptr++ points to %c\n", c);
	printf(".....%p address\n", ptr);

	

	char d;
	d = ++(*ptr);  // points to one specific element and this element is increased by 1. i.e. in value
	               // if element is m it changes to n.

	printf("++(*ptr) points to %c\n", d);

	printf(".....%p address\n", ptr);


	ptr--;

	printf("pointer points to %c\n", *ptr);
	printf(".....%p address\n", ptr);

	ptr[-1] = 'x'; // changes the element 
	// *(ptr - 1) = 'x';

	/* We want to change the element located before the one pointed to by the p pointer 
	(in effect, it leads us to the second element of the array). 
	The entire expression is treated as an I-value and is assigned the character 'e'.*/

	printf("pointer points to %c\n", *ptr);

	ptr = word;

	printf("%c\n", *ptr);


	return 0;
}