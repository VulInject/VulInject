#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SNPRINTF _snprintf
#define SNPRINTF snprintf
typedef union
{
    char * VAR4;
    char * VAR5;
} VAR6;
void FUN1()
{
    char * VAR7;
    CWE134_Uncontrolled_Format_String__char_console_snprintf_34_unionType VAR8;
    char VAR9[100] = "";
    VAR7 = VAR9;
    {
        size_t VAR10 = strlen(VAR7);
        if (100-VAR10 > 1)
        {
            if (fgets(VAR7+VAR10, (int)(100-VAR10), stdin) != NULL)
            {
                VAR10 = strlen(VAR7);
                if (VAR10 > 0 && VAR7[VAR10-1] == '')
                {
                    VAR7[VAR10-1] = '';
                }
            }
            else
            {
                VAR7[VAR10] = '';
            }
        }
    }
    VAR8.VAR4 = VAR7;
    {
        char * VAR7 = VAR8.VAR5;
        {
            char VAR11[100] = "";
            FUN2(VAR11, 100-1, VAR7);
            FUN3(VAR11);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}