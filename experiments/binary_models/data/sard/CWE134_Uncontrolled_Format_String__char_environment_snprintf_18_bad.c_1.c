#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define GETENV getenv
#define GETENV getenv
#define SNPRINTF _snprintf
#define SNPRINTF snprintf
void FUN1()
{
    char * VAR5;
    char VAR6[100] = "";
    VAR5 = VAR6;
    goto VAR7;
VAR7:
    {
        size_t VAR8 = strlen(VAR5);
        char * VAR9 = FUN2(VAR4);
        if (VAR9 != NULL)
        {
            strncat(VAR5+VAR8, VAR9, 100-VAR8-1);
        }
    }
    goto VAR10;
VAR10:
    {
        char VAR11[100] = "";
        FUN3(VAR11, 100-1, VAR5);
        FUN4(VAR11);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}