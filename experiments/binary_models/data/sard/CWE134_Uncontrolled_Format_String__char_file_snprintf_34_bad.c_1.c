#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define VAR4 ""
#define SNPRINTF _snprintf
#define SNPRINTF snprintf
typedef union
{
    char * VAR5;
    char * VAR6;
} VAR7;
void FUN1()
{
    char * VAR8;
    CWE134_Uncontrolled_Format_String__char_file_snprintf_34_unionType VAR9;
    char VAR10[100] = "";
    VAR8 = VAR10;
    {
        size_t VAR11 = strlen(VAR8);
        VAR12 * VAR13;
        if (100-VAR11 > 1)
        {
            VAR13 = fopen(VAR4, "");
            if (VAR13 != NULL)
            {
                if (fgets(VAR8+VAR11, (int)(100-VAR11), VAR13) == NULL)
                {
                    VAR8[VAR11] = '';
                }
                fclose(VAR13);
            }
        }
    }
    VAR9.VAR5 = VAR8;
    {
        char * VAR8 = VAR9.VAR6;
        {
            char VAR14[100] = "";
            FUN2(VAR14, 100-1, VAR8);
            FUN3(VAR14);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}