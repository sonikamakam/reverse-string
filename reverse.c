#include <stdio.h>
#include <errno.h>
int main(void)
{
    char c;
    FILE *ifp, *fp2;
    char *fileName="a.txt";
    ifp= fopen(fileName, "rb");
    fseek(ifp,0L, SEEK_END);
    fseek(ifp,-1L, SEEK_CUR);
    do
    {
        c = fgetc(ifp);
        putchar(c);
        fseek(ifp,-2L, SEEK_CUR);
    } while (ftell(ifp)>0); 
    c = fgetc(ifp);
    putchar(c);
    fclose(ifp);
    getch();
    return 0;
}
