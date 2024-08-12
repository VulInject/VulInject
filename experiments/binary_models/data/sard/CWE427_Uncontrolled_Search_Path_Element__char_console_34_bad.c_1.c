#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define PUTENV VAR5
#define VAR4 ""
#define PUTENV VAR6
typedef union
{
    char * VAR7;
    char * VAR8;
} VAR9;
void FUN1()
{
    char * VAR10;
    CWE427_Uncontrolled_Search_Path_Element__char_console_34_unionType VAR11;
    char VAR12[250] = "";
    VAR10 = VAR12;
    {
        size_t VAR13 = strlen(VAR10);
        if (250-VAR13 > 1)
        {
            if (fgets(VAR10+VAR13, (int)(250-VAR13), stdin) != NULL)
            {
                VAR13 = strlen(VAR10);
                if (VAR13 > 0 && VAR10[VAR13-1] == '')
                {
                    VAR10[VAR13-1] = '';
                }
            }
            else
            {
                VAR10[VAR13] = '';
            }
        }
    }
    VAR11.VAR7 = VAR10;
    {
        char * VAR10 = VAR11.VAR8;
        FUN2(VAR10);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}