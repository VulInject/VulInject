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
    wchar_t VAR10[100] = VAR8"";
    VAR6 = VAR10;
    {
        size_t VAR11 = wcslen(VAR6);
        VAR12 * VAR13;
        if (100-VAR11 > 1)
        {
            VAR13 = fopen(VAR5, "");
            if (VAR13 != NULL)
            {
                if (FUN6(VAR6+VAR11, (int)(100-VAR11), VAR13) == NULL)
                {
                    VAR6[VAR11] = VAR8'';
                }
                fclose(VAR13);
            }
        }
    }
    FUN1(VAR6, VAR6);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN5();
    return 0;
}