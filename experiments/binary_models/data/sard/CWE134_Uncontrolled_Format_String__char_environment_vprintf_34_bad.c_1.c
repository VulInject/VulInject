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
        va_list VAR10;
        FUN2(VAR10, VAR9);
        FUN3(VAR9, VAR10);
        FUN4(VAR10);
    }
}
void FUN5()
{
    char * VAR9;
    char VAR11[100] = "";
    VAR9 = VAR11;
    {
        size_t VAR12 = strlen(VAR9);
        char * VAR13 = FUN6(VAR5);
        if (VAR13 != NULL)
        {
            strncat(VAR9+VAR12, VAR13, 100-VAR12-1);
        }
    }
    {
        char * VAR14 = VAR9;
        char * VAR9 = VAR14;
        FUN1(VAR9, VAR9);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN5();
    return 0;
}