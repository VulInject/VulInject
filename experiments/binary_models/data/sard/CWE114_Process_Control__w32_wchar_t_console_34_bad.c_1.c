#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
typedef union
{
    wchar_t * VAR5;
    wchar_t * VAR6;
} VAR7;
void FUN1()
{
    wchar_t * VAR8;
    CWE114_Process_Control__w32_wchar_t_console_34_unionType VAR9;
    wchar_t VAR10[100] = VAR11"";
    VAR8 = VAR10;
    {
        size_t VAR12 = wcslen(VAR8);
        if (100-VAR12 > 1)
        {
            if (FUN2(VAR8+VAR12, (int)(100-VAR12), stdin) != NULL)
            {
                VAR12 = wcslen(VAR8);
                if (VAR12 > 0 && VAR8[VAR12-1] == VAR11'')
                {
                    VAR8[VAR12-1] = VAR11'';
                }
            }
            else
            {
                VAR8[VAR12] = VAR11'';
            }
        }
    }
    VAR9.VAR5 = VAR8;
    {
        wchar_t * VAR8 = VAR9.VAR6;
        {
            HMODULE VAR13;
            VAR13 = LoadLibraryW(VAR8);
            if (VAR13 != NULL)
            {
                FUN3(VAR13);
            }
            else
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}