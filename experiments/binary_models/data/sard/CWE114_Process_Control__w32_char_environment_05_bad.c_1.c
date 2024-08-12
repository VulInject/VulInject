#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define GETENV getenv
#define GETENV getenv
#VAR1 <VAR5.VAR3>
int VAR6 = 1; 
int VAR7 = 0; 
void FUN1()
{
    char * VAR8;
    char VAR9[100] = "";
    VAR8 = VAR9;
    if(VAR6)
    {
        {
            size_t VAR10 = strlen(VAR8);
            char * VAR11 = FUN2(VAR4);
            if (VAR11 != NULL)
            {
                strncat(VAR8+VAR10, VAR11, 100-VAR10-1);
            }
        }
    }
    {
        HMODULE VAR12;
        VAR12 = LoadLibraryA(VAR8);
        if (VAR12 != NULL)
        {
            FUN3(VAR12);
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