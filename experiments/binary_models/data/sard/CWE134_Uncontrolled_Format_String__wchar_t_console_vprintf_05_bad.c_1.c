#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
int VAR5 = 1; 
int VAR6 = 0; 
void FUN1(wchar_t * VAR7, ...)
{
    {
        va_list VAR8;
        FUN2(VAR8, VAR7);
        FUN3(VAR7, VAR8);
        FUN4(VAR8);
    }
}
void FUN5()
{
    wchar_t * VAR7;
    wchar_t VAR9[100] = VAR10"";
    VAR7 = VAR9;
    if(VAR5)
    {
        {
            size_t VAR11 = wcslen(VAR7);
            if (100-VAR11 > 1)
            {
                if (FUN6(VAR7+VAR11, (int)(100-VAR11), stdin) != NULL)
                {
                    VAR11 = wcslen(VAR7);
                    if (VAR11 > 0 && VAR7[VAR11-1] == VAR10'')
                    {
                        VAR7[VAR11-1] = VAR10'';
                    }
                }
                else
                {
                    VAR7[VAR11] = VAR10'';
                }
            }
        }
    }
    if(VAR5)
    {
        FUN1(VAR7, VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN5();
    return 0;
}