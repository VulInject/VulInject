#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define VAR5 ""
#define GETENV getenv
#define GETENV getenv
void FUN1(char * VAR6, ...)
{
    {
        char VAR7[100] = "";
        va_list VAR8;
        FUN2(VAR8, VAR6);
        vsnprintf(VAR7, 100-1, VAR6, VAR8);
        FUN3(VAR8);
        FUN4(VAR7);
    }
}
void FUN5()
{
    char * VAR6;
    char VAR9[100] = "";
    VAR6 = VAR9;
    if(VAR10)
    {
        {
            size_t VAR11 = strlen(VAR6);
            char * VAR12 = FUN6(VAR5);
            if (VAR12 != NULL)
            {
                strncat(VAR6+VAR11, VAR12, 100-VAR11-1);
            }
        }
    }
    if(VAR10)
    {
        FUN1(VAR6, VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN5();
    return 0;
}