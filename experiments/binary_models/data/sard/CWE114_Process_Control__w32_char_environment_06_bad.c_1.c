#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define GETENV getenv
#define GETENV getenv
#VAR1 <VAR5.VAR3>
static const int VAR6 = 5;
void FUN1()
{
    char * VAR7;
    char VAR8[100] = "";
    VAR7 = VAR8;
    if(VAR6==5)
    {
        {
            size_t VAR9 = strlen(VAR7);
            char * VAR10 = FUN2(VAR4);
            if (VAR10 != NULL)
            {
                strncat(VAR7+VAR9, VAR10, 100-VAR9-1);
            }
        }
    }
    {
        HMODULE VAR11;
        VAR11 = LoadLibraryA(VAR7);
        if (VAR11 != NULL)
        {
            FUN3(VAR11);
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