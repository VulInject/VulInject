#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define GETENV getenv
#define GETENV getenv
typedef union
{
    char * VAR5;
    char * VAR6;
} VAR7;
void FUN1()
{
    char * VAR8;
    CWE134_Uncontrolled_Format_String__char_environment_fprintf_34_unionType VAR9;
    char VAR10[100] = "";
    VAR8 = VAR10;
    {
        size_t VAR11 = strlen(VAR8);
        char * VAR12 = FUN2(VAR4);
        if (VAR12 != NULL)
        {
            strncat(VAR8+VAR11, VAR12, 100-VAR11-1);
        }
    }
    VAR9.VAR5 = VAR8;
    {
        char * VAR8 = VAR9.VAR6;
        fprintf(VAR13, VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}