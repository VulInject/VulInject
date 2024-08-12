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
        FUN3(VAR11, VAR9, VAR10);
        FUN4(VAR10);
    }
}
void FUN5()
{
    wchar_t * VAR9;
    wchar_t VAR12[100] = VAR13"";
    VAR9 = VAR12;
    {
        size_t VAR14 = wcslen(VAR9);
        VAR15 * VAR16;
        if (100-VAR14 > 1)
        {
            VAR16 = fopen(VAR5, "");
            if (VAR16 != NULL)
            {
                if (FUN6(VAR9+VAR14, (int)(100-VAR14), VAR16) == NULL)
                {
                    VAR9[VAR14] = VAR13'';
                }
                fclose(VAR16);
            }
        }
    }
    {
        wchar_t * VAR17 = VAR9;
        wchar_t * VAR9 = VAR17;
        FUN1(VAR9, VAR9);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN5();
    return 0;
}