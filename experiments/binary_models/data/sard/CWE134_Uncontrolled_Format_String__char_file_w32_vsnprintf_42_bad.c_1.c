#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define VAR5 ""
#define VAR5 ""
char * FUN1(char * VAR6)
{
    {
        size_t VAR7 = strlen(VAR6);
        VAR8 * VAR9;
        if (100-VAR7 > 1)
        {
            VAR9 = fopen(VAR5, "");
            if (VAR9 != NULL)
            {
                if (fgets(VAR6+VAR7, (int)(100-VAR7), VAR9) == NULL)
                {
                    VAR6[VAR7] = '';
                }
                fclose(VAR9);
            }
        }
    }
    return VAR6;
}
void FUN2(char * VAR6, ...)
{
    {
        char VAR10[100] = "";
        va_list VAR11;
        FUN3(VAR11, VAR6);
        vsnprintf(VAR10, 100-1, VAR6, VAR11);
        FUN4(VAR11);
        FUN5(VAR10);
    }
}
void FUN6()
{
    char * VAR6;
    char VAR12[100] = "";
    VAR6 = VAR12;
    VAR6 = FUN1(VAR6);
    FUN2(VAR6, VAR6);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN6();
    return 0;
}