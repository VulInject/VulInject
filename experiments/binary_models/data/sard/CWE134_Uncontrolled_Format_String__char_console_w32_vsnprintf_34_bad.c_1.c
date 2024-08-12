#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
typedef union
{
    char * VAR5;
    char * VAR6;
} VAR7;
void FUN1(char * VAR8, ...)
{
    {
        char VAR9[100] = "";
        va_list VAR10;
        FUN2(VAR10, VAR8);
        vsnprintf(VAR9, 100-1, VAR8, VAR10);
        FUN3(VAR10);
        FUN4(VAR9);
    }
}
void FUN5()
{
    char * VAR8;
    char VAR11[100] = "";
    VAR8 = VAR11;
    {
        size_t VAR12 = strlen(VAR8);
        if (100-VAR12 > 1)
        {
            if (fgets(VAR8+VAR12, (int)(100-VAR12), stdin) != NULL)
            {
                VAR12 = strlen(VAR8);
                if (VAR12 > 0 && VAR8[VAR12-1] == '')
                {
                    VAR8[VAR12-1] = '';
                }
            }
            else
            {
                VAR8[VAR12] = '';
            }
        }
    }
    {
        char * VAR13 = VAR8;
        char * VAR8 = VAR13;
        FUN1(VAR8, VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN5();
    return 0;
}