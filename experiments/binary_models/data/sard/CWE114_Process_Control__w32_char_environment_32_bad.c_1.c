#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define GETENV getenv
#define GETENV getenv
#VAR1 <VAR5.VAR3>
void FUN1()
{
    char * VAR6;
    char * *VAR7 = &VAR6;
    char * *VAR8 = &VAR6;
    char VAR9[100] = "";
    VAR6 = VAR9;
    {
        char * VAR6 = *VAR7;
        {
            size_t VAR10 = strlen(VAR6);
            char * VAR11 = FUN2(VAR4);
            if (VAR11 != NULL)
            {
                strncat(VAR6+VAR10, VAR11, 100-VAR10-1);
            }
        }
        *VAR7 = VAR6;
    }
    {
        char * VAR6 = *VAR8;
        {
            HMODULE VAR12;
            VAR12 = LoadLibraryA(VAR6);
            if (VAR12 != NULL)
            {
                FUN3(VAR12);
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