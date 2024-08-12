#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define VAR5 ""
#define VAR5 ""
int VAR6 = 1; 
int VAR7 = 0; 
void FUN1(wchar_t * VAR8, ...)
{
    {
        va_list VAR9;
        FUN2(VAR9, VAR8);
        FUN3(VAR10, VAR8, VAR9);
        FUN4(VAR9);
    }
}
void FUN5()
{
    wchar_t * VAR8;
    wchar_t VAR11[100] = VAR12"";
    VAR8 = VAR11;
    if(VAR6)
    {
        {
            size_t VAR13 = wcslen(VAR8);
            VAR14 * VAR15;
            if (100-VAR13 > 1)
            {
                VAR15 = fopen(VAR5, "");
                if (VAR15 != NULL)
                {
                    if (FUN6(VAR8+VAR13, (int)(100-VAR13), VAR15) == NULL)
                    {
                        VAR8[VAR13] = VAR12'';
                    }
                    fclose(VAR15);
                }
            }
        }
    }
    if(VAR6)
    {
        FUN1(VAR8, VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN5();
    return 0;
}