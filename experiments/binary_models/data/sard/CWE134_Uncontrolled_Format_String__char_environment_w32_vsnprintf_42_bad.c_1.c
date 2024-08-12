#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define VAR5 ""
#define GETENV getenv
#define GETENV getenv
char * FUN1(char * VAR6)
{
    {
        size_t VAR7 = strlen(VAR6);
        char * VAR8 = FUN2(VAR5);
        if (VAR8 != NULL)
        {
            strncat(VAR6+VAR7, VAR8, 100-VAR7-1);
        }
    }
    return VAR6;
}
void FUN3(char * VAR6, ...)
{
    {
        char VAR9[100] = "";
        va_list VAR10;
        FUN4(VAR10, VAR6);
        vsnprintf(VAR9, 100-1, VAR6, VAR10);
        FUN5(VAR10);
        FUN6(VAR9);
    }
}
void FUN7()
{
    char * VAR6;
    char VAR11[100] = "";
    VAR6 = VAR11;
    VAR6 = FUN1(VAR6);
    FUN3(VAR6, VAR6);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN8(NULL) );
    FUN7();
    return 0;
}