#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
void FUN1(char * VAR5, ...)
{
    {
        char VAR6[100] = "";
        va_list VAR7;
        FUN2(VAR7, VAR5);
        vsnprintf(VAR6, 100-1, VAR5, VAR7);
        FUN3(VAR7);
        FUN4(VAR6);
    }
}
void FUN5()
{
    char * VAR5;
    char * *VAR8 = &VAR5;
    char * *VAR9 = &VAR5;
    char VAR10[100] = "";
    VAR5 = VAR10;
    {
        char * VAR5 = *VAR8;
        {
            size_t VAR11 = strlen(VAR5);
            if (100-VAR11 > 1)
            {
                if (fgets(VAR5+VAR11, (int)(100-VAR11), stdin) != NULL)
                {
                    VAR11 = strlen(VAR5);
                    if (VAR11 > 0 && VAR5[VAR11-1] == '')
                    {
                        VAR5[VAR11-1] = '';
                    }
                }
                else
                {
                    VAR5[VAR11] = '';
                }
            }
        }
        *VAR8 = VAR5;
    }
    {
        char * VAR5 = *VAR9;
        FUN1(VAR5, VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN5();
    return 0;
}