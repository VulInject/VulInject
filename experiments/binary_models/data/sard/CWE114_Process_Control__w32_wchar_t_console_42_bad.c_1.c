#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
wchar_t * FUN1(wchar_t * VAR5)
{
    {
        size_t VAR6 = wcslen(VAR5);
        if (100-VAR6 > 1)
        {
            if (FUN2(VAR5+VAR6, (int)(100-VAR6), stdin) != NULL)
            {
                VAR6 = wcslen(VAR5);
                if (VAR6 > 0 && VAR5[VAR6-1] == VAR7'')
                {
                    VAR5[VAR6-1] = VAR7'';
                }
            }
            else
            {
                VAR5[VAR6] = VAR7'';
            }
        }
    }
    return VAR5;
}
void FUN3()
{
    wchar_t * VAR5;
    wchar_t VAR8[100] = VAR7"";
    VAR5 = VAR8;
    VAR5 = FUN1(VAR5);
    {
        HMODULE VAR9;
        VAR9 = LoadLibraryW(VAR5);
        if (VAR9 != NULL)
        {
            FUN4(VAR9);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}