#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define PUTENV VAR5
#define VAR4 ""
#define PUTENV VAR6
#define VAR7 ""
#define GETENV getenv
#define GETENV getenv
typedef union
{
    char * VAR8;
    char * VAR9;
} VAR10;
void FUN1()
{
    char * VAR11;
    CWE427_Uncontrolled_Search_Path_Element__char_environment_34_unionType VAR12;
    char VAR13[250] = "";
    VAR11 = VAR13;
    {
        size_t VAR14 = strlen(VAR11);
        char * VAR15 = FUN2(VAR7);
        if (VAR15 != NULL)
        {
            strncat(VAR11+VAR14, VAR15, 250-VAR14-1);
        }
    }
    VAR12.VAR8 = VAR11;
    {
        char * VAR11 = VAR12.VAR9;
        FUN3(VAR11);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}