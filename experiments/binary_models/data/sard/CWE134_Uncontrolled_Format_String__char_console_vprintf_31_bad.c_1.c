#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
void FUN1(char * VAR5, ...)
{
    {
        va_list VAR6;
        FUN2(VAR6, VAR5);
        FUN3(VAR5, VAR6);
        FUN4(VAR6);
    }
}
void FUN5()
{
    char * VAR5;
    char VAR7[100] = "";
    VAR5 = VAR7;
    {
        size_t VAR8 = strlen(VAR5);
        if (100-VAR8 > 1)
        {
            if (fgets(VAR5+VAR8, (int)(100-VAR8), stdin) != NULL)
            {
                VAR8 = strlen(VAR5);
                if (VAR8 > 0 && VAR5[VAR8-1] == '')
                {
                    VAR5[VAR8-1] = '';
                }
            }
            else
            {
                VAR5[VAR8] = '';
            }
        }
    }
    {
        char * VAR9 = VAR5;
        char * VAR5 = VAR9;
        FUN1(VAR5, VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN5();
    return 0;
}