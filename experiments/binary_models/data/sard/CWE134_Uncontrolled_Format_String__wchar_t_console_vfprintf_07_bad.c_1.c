#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
int VAR5 = 5;
void FUN1(wchar_t * VAR6, ...)
{
    {
        va_list VAR7;
        FUN2(VAR7, VAR6);
        FUN3(VAR8, VAR6, VAR7);
        FUN4(VAR7);
    }
}
void FUN5()
{
    wchar_t * VAR6;
    wchar_t VAR9[100] = VAR10"";
    VAR6 = VAR9;
    if(VAR5==5)
    {
        {
            size_t VAR11 = wcslen(VAR6);
            if (100-VAR11 > 1)
            {
                if (FUN6(VAR6+VAR11, (int)(100-VAR11), stdin) != NULL)
                {
                    VAR11 = wcslen(VAR6);
                    if (VAR11 > 0 && VAR6[VAR11-1] == VAR10'')
                    {
                        VAR6[VAR11-1] = VAR10'';
                    }
                }
                else
                {
                    VAR6[VAR11] = VAR10'';
                }
            }
        }
    }
    if(VAR5==5)
    {
        FUN1(VAR6, VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN5();
    return 0;
}