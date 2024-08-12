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
void FUN5()
{
    wchar_t * VAR5;
    wchar_t VAR7[100] = VAR8"";
    VAR5 = VAR7;
    if(FUN6())
    {
        {
            size_t VAR9 = wcslen(VAR5);
            if (100-VAR9 > 1)
            {
                if (FUN7(VAR5+VAR9, (int)(100-VAR9), stdin) != NULL)
                {
                    VAR9 = wcslen(VAR5);
                    if (VAR9 > 0 && VAR5[VAR9-1] == VAR8'')
                    {
                        VAR5[VAR9-1] = VAR8'';
                    }
                }
                else
                {
                    VAR5[VAR9] = VAR8'';
                }
            }
        }
    }
    if(FUN6())
    {
        FUN1(VAR5, VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN8(NULL) );
    FUN5();
    return 0;
}