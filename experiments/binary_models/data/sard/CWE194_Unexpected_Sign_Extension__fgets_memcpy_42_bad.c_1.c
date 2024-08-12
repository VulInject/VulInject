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
    {
        char VAR5[100];
        char VAR6[100] = "";
        memset(VAR5, '', 100-1);
        VAR5[100-1] = '';
        if (VAR2 < 100)
        {
            memcpy(VAR6, VAR5, VAR2);
            VAR6[VAR2] = ''; 
        }
        FUN4(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}