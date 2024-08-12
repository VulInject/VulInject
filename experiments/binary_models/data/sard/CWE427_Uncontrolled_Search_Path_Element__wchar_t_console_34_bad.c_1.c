#VAR1 ""
#VAR1 <VAR2.VAR3>
#define NEW_PATH VAR4""
#define PUTENV VAR5
#define NEW_PATH VAR4""
#define PUTENV VAR6
typedef union
{
    wchar_t * VAR7;
    wchar_t * VAR8;
} VAR9;
void FUN1()
{
    wchar_t * VAR10;
    CWE427_Uncontrolled_Search_Path_Element__wchar_t_console_34_unionType VAR11;
    wchar_t VAR12[250] = VAR4"";
    VAR10 = VAR12;
    {
        size_t VAR13 = wcslen(VAR10);
        if (250-VAR13 > 1)
        {
            if (FUN2(VAR10+VAR13, (int)(250-VAR13), stdin) != NULL)
            {
                VAR13 = wcslen(VAR10);
                if (VAR13 > 0 && VAR10[VAR13-1] == VAR4'')
                {
                    VAR10[VAR13-1] = VAR4'';
                }
            }
            else
            {
                VAR10[VAR13] = VAR4'';
            }
        }
    }
    VAR11.VAR7 = VAR10;
    {
        wchar_t * VAR10 = VAR11.VAR8;
        FUN3(VAR10);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}