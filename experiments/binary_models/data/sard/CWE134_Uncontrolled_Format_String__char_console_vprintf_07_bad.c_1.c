#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
int VAR5 = 5;
void FUN1(char * VAR6, ...)
{
    {
        va_list VAR7;
        FUN2(VAR7, VAR6);
        FUN3(VAR6, VAR7);
        FUN4(VAR7);
    }
}
void FUN5()
{
    char * VAR6;
    char VAR8[100] = "";
    VAR6 = VAR8;
    if(VAR5==5)
    {
        {
            size_t VAR9 = strlen(VAR6);
            if (100-VAR9 > 1)
            {
                if (fgets(VAR6+VAR9, (int)(100-VAR9), stdin) != NULL)
                {
                    VAR9 = strlen(VAR6);
                    if (VAR9 > 0 && VAR6[VAR9-1] == '')
                    {
                        VAR6[VAR9-1] = '';
                    }
                }
                else
                {
                    VAR6[VAR9] = '';
                }
            }
        }
    }
    if(VAR5==5)
    {
        FUN1(VAR6, VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN5();
    return 0;
}