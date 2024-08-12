#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
void FUN1(wchar_t * VAR5, ...)
{
    {
        va_list VAR6;
        FUN2(VAR6, VAR5);
        FUN3(VAR7, VAR5, VAR6);
        FUN4(VAR6);
    }
}
void FUN5()
{
    wchar_t * VAR5;
    wchar_t * *VAR8 = &VAR5;
    wchar_t * *VAR9 = &VAR5;
    wchar_t VAR10[100] = VAR11"";
    VAR5 = VAR10;
    {
        wchar_t * VAR5 = *VAR8;
        {
            size_t VAR12 = wcslen(VAR5);
            if (100-VAR12 > 1)
            {
                if (FUN6(VAR5+VAR12, (int)(100-VAR12), stdin) != NULL)
                {
                    VAR12 = wcslen(VAR5);
                    if (VAR12 > 0 && VAR5[VAR12-1] == VAR11'')
                    {
                        VAR5[VAR12-1] = VAR11'';
                    }
                }
                else
                {
                    VAR5[VAR12] = VAR11'';
                }
            }
        }
        *VAR8 = VAR5;
    }
    {
        wchar_t * VAR5 = *VAR9;
        FUN1(VAR5, VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN5();
    return 0;
}