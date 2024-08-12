#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define GETENV getenv
#define GETENV getenv
#VAR1 <VAR5.VAR3>
typedef union
{
    char * VAR6;
    char * VAR7;
} VAR8;
void FUN1()
{
    char * VAR9;
    CWE114_Process_Control__w32_char_environment_34_unionType VAR10;
    char VAR11[100] = "";
    VAR9 = VAR11;
    {
        size_t VAR12 = strlen(VAR9);
        char * VAR13 = FUN2(VAR4);
        if (VAR13 != NULL)
        {
            strncat(VAR9+VAR12, VAR13, 100-VAR12-1);
        }
    }
    VAR10.VAR6 = VAR9;
    {
        char * VAR9 = VAR10.VAR7;
        {
            HMODULE VAR14;
            VAR14 = LoadLibraryA(VAR9);
            if (VAR14 != NULL)
            {
                FUN3(VAR14);
            }
            else
            {
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