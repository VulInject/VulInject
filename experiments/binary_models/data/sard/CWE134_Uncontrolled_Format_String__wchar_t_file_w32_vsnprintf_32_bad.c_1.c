#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define VAR5 ""
#define VAR5 ""
void FUN1(wchar_t * VAR6, ...)
{
    {
        wchar_t VAR7[100] = VAR8"";
        va_list VAR9;
        FUN2(VAR9, VAR6);
        _vsnwprintf(VAR7, 100-1, VAR6, VAR9);
        FUN3(VAR9);
        FUN4(VAR7);
    }
}
void FUN5()
{
    wchar_t * VAR6;
    wchar_t * *VAR10 = &VAR6;
    wchar_t * *VAR11 = &VAR6;
    wchar_t VAR12[100] = VAR8"";
    VAR6 = VAR12;
    {
        wchar_t * VAR6 = *VAR10;
        {
            size_t VAR13 = wcslen(VAR6);
            VAR14 * VAR15;
            if (100-VAR13 > 1)
            {
                VAR15 = fopen(VAR5, "");
                if (VAR15 != NULL)
                {
                    if (FUN6(VAR6+VAR13, (int)(100-VAR13), VAR15) == NULL)
                    {
                        VAR6[VAR13] = VAR8'';
                    }
                    fclose(VAR15);
                }
            }
        }
        *VAR10 = VAR6;
    }
    {
        wchar_t * VAR6 = *VAR11;
        FUN1(VAR6, VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN5();
    return 0;
}