#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
void FUN1(wchar_t * VAR5, ...)
{
    {
        va_list VAR6;
        FUN2(VAR6, VAR5);
        FUN3(VAR5, VAR6);
        FUN4(VAR6);
    }
}
void FUN5(wchar_t * VAR5, ...)
{
    {
        va_list VAR6;
        FUN2(VAR6, VAR5);
        FUN3(VAR7"", VAR6);
        FUN4(VAR6);
    }
}
void FUN6()
{
    wchar_t * VAR5;
    wchar_t VAR8[100] = VAR7"";
    VAR5 = VAR8;
    if(FUN7())
    {
        {
            size_t VAR9 = wcslen(VAR5);
            if (100-VAR9 > 1)
            {
                if (FUN8(VAR5+VAR9, (int)(100-VAR9), stdin) != NULL)
                {
                    VAR9 = wcslen(VAR5);
                    if (VAR9 > 0 && VAR5[VAR9-1] == VAR7'')
                    {
                        VAR5[VAR9-1] = VAR7'';
                    }
                }
                else
                {
                    VAR5[VAR9] = VAR7'';
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