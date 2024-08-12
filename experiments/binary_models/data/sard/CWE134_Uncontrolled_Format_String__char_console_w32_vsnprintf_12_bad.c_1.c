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
void FUN5(char * VAR5, ...)
{
    {
        char VAR6[100] = "";
        va_list VAR7;
        FUN2(VAR7, VAR5);
        vsnprintf(VAR6, 100-1, "", VAR7);
        FUN3(VAR7);
        FUN4(VAR6);
    }
}
void FUN6()
{
    char * VAR5;
    char VAR8[100] = "";
    VAR5 = VAR8;
    if(FUN7())
    {
        {
            size_t VAR9 = strlen(VAR5);
            if (100-VAR9 > 1)
            {
                if (fgets(VAR5+VAR9, (int)(100-VAR9), stdin) != NULL)
                {
                    VAR9 = strlen(VAR5);
                    if (VAR9 > 0 && VAR5[VAR9-1] == '')
                    {
                        VAR5[VAR9-1] = '';
                    }
                }
                else
                {
                    VAR5[VAR9] = '';
                }
            }
        }
    }
    else
    {
        strcpy(VAR5, "");
    }
    if(FUN7())
    {
        FUN1(VAR5, VAR5);
    }
    else
    {
        FUN5(VAR5, VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN8(NULL) );
    FUN6();
    return 0;
}