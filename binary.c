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
    puts("\n▁ ▂ ▄ ▅ ▆ ▇ █ 2S2C - 2 Secure 2 Crack █ ▇ ▆ ▅ ▄ ▂ ▁\n");
    printf("\033[0;32m[+]\033[0m If you have been given a password, enter it here: ");
    gets(buf, stdin);
    printf("\n\033[0;31m[-] Incorrect, please verify that your password is correct.\n\033[1;31m\n");
    return 0;
}
