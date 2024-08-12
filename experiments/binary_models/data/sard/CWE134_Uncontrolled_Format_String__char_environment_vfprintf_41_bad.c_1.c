#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define VAR5 ""
#define GETENV getenv
#define GETENV getenv
void FUN1(char * VAR6, ...)
{
    {
        va_list VAR7;
        FUN2(VAR7, VAR6);
        FUN3(VAR8, VAR6, VAR7);
        FUN4(VAR7);
    }
}
void FUN5(char * VAR6)
{
    FUN1(VAR6, VAR6);
}
void FUN6()
{
    char * VAR6;
    char VAR9[100] = "";
    VAR6 = VAR9;
    {
        size_t VAR10 = strlen(VAR6);
        char * VAR11 = FUN7(VAR5);
        if (VAR11 != NULL)
        {
            strncat(VAR6+VAR10, VAR11, 100-VAR10-1);
        }
    }
    FUN5(VAR6);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN8(NULL) );
    FUN6();
    return 0;
}