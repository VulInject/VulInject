#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
void FUN1(wchar_t * VAR5, ...)
{
    {
        wchar_t VAR6[100] = VAR7"";
        va_list VAR8;
        FUN2(VAR8, VAR5);
        _vsnwprintf(VAR6, 100-1, VAR5, VAR8);
        FUN3(VAR8);
        FUN4(VAR6);
    }
}
void FUN5(wchar_t * VAR5, ...)
{
    {
        wchar_t VAR6[100] = VAR7"";
        va_list VAR8;
        FUN2(VAR8, VAR5);
        _vsnwprintf(VAR6, 100-1, VAR7"", VAR8);
        FUN3(VAR8);
        FUN4(VAR6);
    }
}
void FUN6()
{
    wchar_t * VAR5;
    wchar_t VAR9[100] = VAR7"";
    VAR5 = VAR9;
    if(FUN7())
    {
        {
            size_t VAR10 = wcslen(VAR5);
            if (100-VAR10 > 1)
            {
                if (FUN8(VAR5+VAR10, (int)(100-VAR10), stdin) != NULL)
                {
                    VAR10 = wcslen(VAR5);
                    if (VAR10 > 0 && VAR5[VAR10-1] == VAR7'')
                    {
                        VAR5[VAR10-1] = VAR7'';
                    }
                }
                else
                {
                    VAR5[VAR10] = VAR7'';
                }
            }
        }
    }
    else
    {
        wcscpy(VAR5, VAR7"");
    }
    if(FUN7())
    {
        FUN1(VAR5, VAR5);
    }
    else
    {
        FUN5(VAR5, VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN9(NULL) );
    FUN6();
    return 0;
}