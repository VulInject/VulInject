#VAR1 ""
#define CHAR_ARRAY_SIZE 8
short FUN1(short VAR2)
{
    {
        char VAR3[VAR4] = "";
        if (fgets(VAR3, VAR4, stdin) != NULL)
        {
            VAR2 = (short)FUN2(VAR3);
        }
        else
        {
        }
    }
    return VAR2;
}
void FUN3()
{
    short VAR2;
    VAR2 = 0;
    VAR2 = FUN1(VAR2);
    if (VAR2 < 100)
    {
        char * VAR5 = (char *)malloc(VAR2);
        if (VAR5 == NULL) {FUN4(-1);}
        memset(VAR5, '', VAR2-1);
        VAR5[VAR2-1] = '';
        FUN5(VAR5);
        free(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}