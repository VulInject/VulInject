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
    wchar_t VAR8[100] = VAR9"";
    VAR5 = VAR8;
    {
        size_t VAR10 = wcslen(VAR5);
        if (100-VAR10 > 1)
        {
            if (FUN6(VAR5+VAR10, (int)(100-VAR10), stdin) != NULL)
            {
                VAR10 = wcslen(VAR5);
                if (VAR10 > 0 && VAR5[VAR10-1] == VAR9'')
                {
                    VAR5[VAR10-1] = VAR9'';
                }
            }
            else
            {
                VAR5[VAR10] = VAR9'';
            }
        }
    }
    FUN1(VAR5, VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN5();
    return 0;
}