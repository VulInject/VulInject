#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define VAR5 ""
#define VAR5 ""
typedef union
{
    wchar_t * VAR6;
    wchar_t * VAR7;
} VAR8;
void FUN1(wchar_t * VAR9, ...)
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
    wchar_t * VAR9;
    wchar_t VAR11[100] = VAR12"";
    VAR9 = VAR11;
    {
        size_t VAR13 = wcslen(VAR9);
        VAR14 * VAR15;
        if (100-VAR13 > 1)
        {
            VAR15 = fopen(VAR5, "");
            if (VAR15 != NULL)
            {
                if (FUN6(VAR9+VAR13, (int)(100-VAR13), VAR15) == NULL)
                {
                    VAR9[VAR13] = VAR12'';
                }
                fclose(VAR15);
            }
        }
    }
    {
        wchar_t * VAR16 = VAR9;
        wchar_t * VAR9 = VAR16;
        FUN1(VAR9, VAR9);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN5();
    return 0;
}