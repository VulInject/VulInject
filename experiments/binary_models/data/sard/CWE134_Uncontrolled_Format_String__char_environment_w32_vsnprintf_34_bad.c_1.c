#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define VAR5 ""
#define GETENV getenv
#define GETENV getenv
typedef union
{
    char * VAR6;
    char * VAR7;
} VAR8;
void FUN1(char * VAR9, ...)
{
    {
        char VAR10[100] = "";
        va_list VAR11;
        FUN2(VAR11, VAR9);
        vsnprintf(VAR10, 100-1, VAR9, VAR11);
        FUN3(VAR11);
        FUN4(VAR10);
    }
}
void FUN5()
{
    char * VAR9;
    char VAR12[100] = "";
    VAR9 = VAR12;
    {
        size_t VAR13 = strlen(VAR9);
        char * VAR14 = FUN6(VAR5);
        if (VAR14 != NULL)
        {
            strncat(VAR9+VAR13, VAR14, 100-VAR13-1);
        }
    }
    {
        char * VAR15 = VAR9;
        char * VAR9 = VAR15;
        FUN1(VAR9, VAR9);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN5();
    return 0;
}