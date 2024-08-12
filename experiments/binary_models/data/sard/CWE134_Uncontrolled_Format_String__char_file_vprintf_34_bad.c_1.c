#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define VAR5 ""
#define VAR5 ""
typedef union
{
    char * VAR6;
    char * VAR7;
} VAR8;
void FUN1(char * VAR9, ...)
{
    {
        va_list VAR10;
        FUN2(VAR10, VAR9);
        FUN3(VAR9, VAR10);
        FUN4(VAR10);
    }
}
void FUN5()
{
    char * VAR9;
    char VAR11[100] = "";
    VAR9 = VAR11;
    {
        size_t VAR12 = strlen(VAR9);
        VAR13 * VAR14;
        if (100-VAR12 > 1)
        {
            VAR14 = fopen(VAR5, "");
            if (VAR14 != NULL)
            {
                if (fgets(VAR9+VAR12, (int)(100-VAR12), VAR14) == NULL)
                {
                    VAR9[VAR12] = '';
                }
                fclose(VAR14);
            }
        }
    }
    {
        char * VAR15 = VAR9;
        char * VAR9 = VAR15;
        FUN1(VAR9, VAR9);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN5();
    return 0;
}