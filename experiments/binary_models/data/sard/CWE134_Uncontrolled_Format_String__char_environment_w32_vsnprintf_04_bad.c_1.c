#VAR1 <VAR2.VAR3>
#VAR1 ""
#VAR1 <VAR4.VAR3>
#define VAR5 ""
#define GETENV getenv
#define GETENV getenv
static const int VAR6 = 1; 
static const int VAR7 = 0; 
void FUN1(char * VAR8, ...)
{
    {
        char VAR9[100] = "";
        va_list VAR10;
        FUN2(VAR10, VAR8);
        vsnprintf(VAR9, 100-1, VAR8, VAR10);
        FUN3(VAR10);
        FUN4(VAR9);
    }
}
void FUN5()
{
    char * VAR8;
    char VAR11[100] = "";
    VAR8 = VAR11;
    if(VAR6)
    {
        {
            size_t VAR12 = strlen(VAR8);
            char * VAR13 = FUN6(VAR5);
            if (VAR13 != NULL)
            {
                strncat(VAR8+VAR12, VAR13, 100-VAR12-1);
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