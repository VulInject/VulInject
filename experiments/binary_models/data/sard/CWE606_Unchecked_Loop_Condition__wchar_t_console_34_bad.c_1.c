#VAR1 ""
#define MAX_LOOP 10000
#VAR1 <VAR2.VAR3>
typedef union
{
    wchar_t * VAR4;
    wchar_t * VAR5;
} VAR6;
void FUN1()
{
    wchar_t * VAR7;
    CWE606_Unchecked_Loop_Condition__wchar_t_console_34_unionType VAR8;
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
            int VAR12, VAR13, VAR14;
            if (swscanf(VAR7, VAR10"", &VAR13) == 1)
            {
                VAR14 = 0;
                for (VAR12 = 0; VAR12 < VAR13; VAR12++)
                {
                    VAR14++; 
                }
                FUN3(VAR14);
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