#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
#define SNPRINTF _snwprintf
#define SNPRINTF swprintf
typedef union
{
    wchar_t * VAR5;
    wchar_t * VAR6;
} VAR7;
void FUN1()
{
    wchar_t * VAR8;
    CWE134_Uncontrolled_Format_String__wchar_t_file_snprintf_34_unionType VAR9;
    wchar_t VAR10[100] = VAR11"";
    VAR8 = VAR10;
    {
        size_t VAR12 = wcslen(VAR8);
        VAR13 * VAR14;
        if (100-VAR12 > 1)
        {
            VAR14 = fopen(VAR4, "");
            if (VAR14 != NULL)
            {
                if (FUN2(VAR8+VAR12, (int)(100-VAR12), VAR14) == NULL)
                {
                    VAR8[VAR12] = VAR11'';
                }
                fclose(VAR14);
            }
        }
    }
    VAR9.VAR5 = VAR8;
    {
        wchar_t * VAR8 = VAR9.VAR6;
        {
            wchar_t VAR15[100] = VAR11"";
            FUN3(VAR15, 100-1, VAR8);
            FUN4(VAR15);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}