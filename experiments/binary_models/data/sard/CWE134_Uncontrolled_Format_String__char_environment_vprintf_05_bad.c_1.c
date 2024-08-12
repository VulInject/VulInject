#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define VAR5 ""
#define GETENV getenv
#define GETENV getenv
int VAR6 = 1; 
int VAR7 = 0; 
void FUN1(char * VAR8, ...)
{
    {
        va_list VAR9;
        FUN2(VAR9, VAR8);
        FUN3(VAR8, VAR9);
        FUN4(VAR9);
    }
}
void FUN5()
{
    char * VAR8;
    char VAR10[100] = "";
    VAR8 = VAR10;
    if(VAR6)
    {
        {
            size_t VAR11 = strlen(VAR8);
            char * VAR12 = FUN6(VAR5);
            if (VAR12 != NULL)
            {
                strncat(VAR8+VAR11, VAR12, 100-VAR11-1);
            }
        }
    }
    if(VAR6)
    {
        FUN1(VAR8, VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN5();
    return 0;
}