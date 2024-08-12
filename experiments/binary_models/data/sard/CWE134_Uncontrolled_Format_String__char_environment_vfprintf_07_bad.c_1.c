#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define VAR5 ""
#define GETENV getenv
#define GETENV getenv
int VAR6 = 5;
void FUN1(char * VAR7, ...)
{
    {
        va_list VAR8;
        FUN2(VAR8, VAR7);
        FUN3(VAR9, VAR7, VAR8);
        FUN4(VAR8);
    }
}
void FUN5()
{
    char * VAR7;
    char VAR10[100] = "";
    VAR7 = VAR10;
    if(VAR6==5)
    {
        {
            size_t VAR11 = strlen(VAR7);
            char * VAR12 = FUN6(VAR5);
            if (VAR12 != NULL)
            {
                strncat(VAR7+VAR11, VAR12, 100-VAR11-1);
            }
        }
    }
    if(VAR6==5)
    {
        FUN1(VAR7, VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN5();
    return 0;
}