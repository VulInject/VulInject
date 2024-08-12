#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define GETENV getenv
#define GETENV getenv
#VAR1 <VAR5.VAR3>
void FUN1(char * VAR6)
{
    {
        HMODULE VAR7;
        VAR7 = LoadLibraryA(VAR6);
        if (VAR7 != NULL)
        {
            FUN2(VAR7);
        }
        else
        {
        }
    }
}
void FUN3()
{
    char * VAR6;
    char VAR8[100] = "";
    VAR6 = VAR8;
    {
        size_t VAR9 = strlen(VAR6);
        char * VAR10 = FUN4(VAR4);
        if (VAR10 != NULL)
        {
            strncat(VAR6+VAR9, VAR10, 100-VAR9-1);
        }
    }
    FUN1(VAR6);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}