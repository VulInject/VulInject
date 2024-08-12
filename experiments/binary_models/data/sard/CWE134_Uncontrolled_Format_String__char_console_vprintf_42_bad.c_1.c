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
        va_list VAR7;
        FUN3(VAR7, VAR5);
        FUN4(VAR5, VAR7);
        FUN5(VAR7);
    }
}
void FUN6()
{
    char * VAR5;
    char VAR8[100] = "";
    VAR5 = VAR8;
    VAR5 = FUN1(VAR5);
    FUN2(VAR5, VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN6();
    return 0;
}