#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
char * FUN1(char * VAR5)
{
    {
        size_t VAR6 = strlen(VAR5);
        if (100-VAR6 > 1)
        {
            if (fgets(VAR5+VAR6, (int)(100-VAR6), stdin) != NULL)
            {
                VAR6 = strlen(VAR5);
                if (VAR6 > 0 && VAR5[VAR6-1] == '')
                {
                    VAR5[VAR6-1] = '';
                }
            }
            else
            {
                VAR5[VAR6] = '';
            }
        }
    }
    return VAR5;
}
void FUN2(char * VAR5, ...)
{
    {
        char VAR7[100] = "";
        va_list VAR8;
        FUN3(VAR8, VAR5);
        vsnprintf(VAR7, 100-1, VAR5, VAR8);
        FUN4(VAR8);
        FUN5(VAR7);
    }
}
void FUN6()
{
    char * VAR5;
    char VAR9[100] = "";
    VAR5 = VAR9;
    VAR5 = FUN1(VAR5);
    FUN2(VAR5, VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN6();
    return 0;
}