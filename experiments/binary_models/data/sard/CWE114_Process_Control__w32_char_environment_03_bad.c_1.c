#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define GETENV getenv
#define GETENV getenv
#VAR1 <VAR5.VAR3>
void FUN1()
{
    char * VAR6;
    char VAR7[100] = "";
    VAR6 = VAR7;
    if(5==5)
    {
        {
            size_t VAR8 = strlen(VAR6);
            char * VAR9 = FUN2(VAR4);
            if (VAR9 != NULL)
            {
                strncat(VAR6+VAR8, VAR9, 100-VAR8-1);
            }
        }
    }
    {
        HMODULE VAR10;
        VAR10 = LoadLibraryA(VAR6);
        if (VAR10 != NULL)
        {
            FUN3(VAR10);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}