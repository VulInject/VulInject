#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define VAR5 ""
#define VAR5 ""
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3(char * VAR6, ...)
{
    {
        va_list VAR7;
        FUN4(VAR7, VAR6);
        FUN5(VAR6, VAR7);
        FUN6(VAR7);
    }
}
void FUN7()
{
    char * VAR6;
    char VAR8[100] = "";
    VAR6 = VAR8;
    if(FUN1())
    {
        {
            size_t VAR9 = strlen(VAR6);
            VAR10 * VAR11;
            if (100-VAR9 > 1)
            {
                VAR11 = fopen(VAR5, "");
                if (VAR11 != NULL)
                {
                    if (fgets(VAR6+VAR9, (int)(100-VAR9), VAR11) == NULL)
                    {
                        VAR6[VAR9] = '';
                    }
                    fclose(VAR11);
                }
            }
        }
    }
    if(FUN1())
    {
        FUN3(VAR6, VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN8(NULL) );
    FUN7();
    return 0;
}