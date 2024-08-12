#VAR1 ""
#define CHAR_ARRAY_SIZE 8
void FUN1(short VAR2)
{
    {
        char VAR3[100];
        char VAR4[100] = "";
        memset(VAR3, '', 100-1);
        VAR3[100-1] = '';
        if (VAR2 < 100)
        {
            strncpy(VAR4, VAR3, VAR2);
            VAR4[VAR2] = ''; 
        }
        FUN2(VAR4);
    }
}
void FUN3()
{
    short VAR2;
    VAR2 = 0;
    {
        char VAR5[VAR6] = "";
        if (fgets(VAR5, VAR6, stdin) != NULL)
        {
            VAR2 = (short)FUN4(VAR5);
        }
        else
        {
        }
    }
    FUN1(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}