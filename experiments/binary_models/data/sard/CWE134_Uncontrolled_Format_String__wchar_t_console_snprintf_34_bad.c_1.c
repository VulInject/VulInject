#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SNPRINTF _snwprintf
#define SNPRINTF swprintf
typedef union
{
    wchar_t * VAR4;
    wchar_t * VAR5;
} VAR6;
void FUN1()
{
    wchar_t * VAR7;
    CWE134_Uncontrolled_Format_String__wchar_t_console_snprintf_34_unionType VAR8;
    wchar_t VAR9[100] = VAR10"";
    VAR7 = VAR9;
    {
        size_t VAR11 = wcslen(VAR7);
        if (100-VAR11 > 1)
        {
            if (FUN2(VAR7+VAR11, (int)(100-VAR11), stdin) != NULL)
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
    VAR8.VAR4 = VAR7;
    {
        wchar_t * VAR7 = VAR8.VAR5;
        {
            wchar_t VAR12[100] = VAR10"";
            FUN3(VAR12, 100-1, VAR7);
            FUN4(VAR12);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}