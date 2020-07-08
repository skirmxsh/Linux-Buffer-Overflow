#include <string.h>
#include <unistd.h>
#include <sys/cdefs.h>
#include <stdio.h>

void getshell()
{
    puts("Pwned!");
    system("/bin/sh");
}

void getflag()
{
	char fname[20], ch;
	FILE *fpts, *fptt;
	fpts=fopen("flag.txt", "r");
	fptt=fopen("decrypted.txt", "w");
	while(1)
	{
		ch=fgetc(fpts);
		if(ch==EOF)
		{
			break;
		}
		else
		{
			ch=ch-100;
			fputc(ch, fptt);
		}
	}
	fclose(fpts);
	fclose(fptt);
        system("/bin/cat decrypted.txt && rm decrypted.txt");
}

int main(int argc, char** argv) {


    char buf[50];
    puts("▁ ▂ ▄ ▅ ▆ ▇ █ 2S2C - 2 Secure 2 Crack █ ▇ ▆ ▅ ▄ ▂ ▁\n");
    gets(buf, stdin);
    printf("\nYou entered: %s\n", buf);
    return 0;
}
