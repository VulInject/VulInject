#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define VAR5 ""
#define VAR5 ""
void FUN1(char * VAR6, ...)
{
    {
        char VAR7[100] = "";
        va_list VAR8;
        FUN2(VAR8, VAR6);
        vsnprintf(VAR7, 100-1, VAR6, VAR8);
        FUN3(VAR8);
        FUN4(VAR7);
    }
}
void FUN5()
{
    char * VAR6;
    char VAR9[100] = "";
    VAR6 = VAR9;
    {
        size_t VAR10 = strlen(VAR6);
        VAR11 * VAR12;
        if (100-VAR10 > 1)
        {
            VAR12 = fopen(VAR5, "");
            if (VAR12 != NULL)
            {
                if (fgets(VAR6+VAR10, (int)(100-VAR10), VAR12) == NULL)
                {
                    VAR6[VAR10] = '';
                }
                fclose(VAR12);
            }
        }
    }
    FUN1(VAR6, VAR6);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN5();
    return 0;
}