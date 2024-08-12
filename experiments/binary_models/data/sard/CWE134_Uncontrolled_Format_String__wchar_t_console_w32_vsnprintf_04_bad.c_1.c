#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
static const int VAR5 = 1; 
static const int VAR6 = 0; 
void FUN1(wchar_t * VAR7, ...)
{
    {
        wchar_t VAR8[100] = VAR9"";
        va_list VAR10;
        FUN2(VAR10, VAR7);
        _vsnwprintf(VAR8, 100-1, VAR7, VAR10);
        FUN3(VAR10);
        FUN4(VAR8);
    }
}
void FUN5()
{
    wchar_t * VAR7;
    wchar_t VAR11[100] = VAR9"";
    VAR7 = VAR11;
    if(VAR5)
    {
        {
            size_t VAR12 = wcslen(VAR7);
            if (100-VAR12 > 1)
            {
                if (FUN6(VAR7+VAR12, (int)(100-VAR12), stdin) != NULL)
                {
                    VAR12 = wcslen(VAR7);
                    if (VAR12 > 0 && VAR7[VAR12-1] == VAR9'')
                    {
                        VAR7[VAR12-1] = VAR9'';
                    }
                }
                else
                {
                    VAR7[VAR12] = VAR9'';
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