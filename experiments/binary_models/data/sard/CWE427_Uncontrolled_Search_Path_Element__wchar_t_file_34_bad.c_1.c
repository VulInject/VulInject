#VAR1 ""
#VAR1 <VAR2.VAR3>
#define NEW_PATH VAR4""
#define PUTENV VAR5
#define NEW_PATH VAR4""
#define PUTENV VAR6
#define VAR7 ""
#define VAR7 ""
typedef union
{
    wchar_t * VAR8;
    wchar_t * VAR9;
} VAR10;
void FUN1()
{
    wchar_t * VAR11;
    CWE427_Uncontrolled_Search_Path_Element__wchar_t_file_34_unionType VAR12;
    wchar_t VAR13[250] = VAR4"";
    VAR11 = VAR13;
    {
        size_t VAR14 = wcslen(VAR11);
        VAR15 * VAR16;
        if (250-VAR14 > 1)
        {
            VAR16 = fopen(VAR7, "");
            if (VAR16 != NULL)
            {
                if (FUN2(VAR11+VAR14, (int)(250-VAR14), VAR16) == NULL)
                {
                    VAR11[VAR14] = VAR4'';
                }
                fclose(VAR16);
            }
        }
    }
    VAR12.VAR8 = VAR11;
    {
        wchar_t * VAR11 = VAR12.VAR9;
        FUN3(VAR11);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}